// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXTIMETRIGGER_H
#define ATXTIMETRIGGER_H

@class NSString, NSDateComponents;
@protocol ATXTrigger;

#import <Foundation/Foundation.h>


@interface ATXTimeTrigger : NSObject <ATXTrigger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDateComponents *timeComponents; // ivar: _timeComponents
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif