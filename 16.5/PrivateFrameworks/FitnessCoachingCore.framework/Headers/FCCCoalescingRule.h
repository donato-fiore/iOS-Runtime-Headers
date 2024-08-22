// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCCOALESCINGRULE_H
#define FCCCOALESCINGRULE_H

@class NSString;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCCoalescingRule : NSObject <FCCDataSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (readonly) Class superclass;


-(id)initWithEventIdentifier:(id)arg0 interval:(CGFloat)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)protobuf;
-(id)transportData;


@end


#endif