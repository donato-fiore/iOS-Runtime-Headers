// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCPERCENTAGEOFDAYRULE_H
#define FCCPERCENTAGEOFDAYRULE_H

@class NSString;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCPercentageOfDayRule : NSObject <FCCDataSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minimumDayDuration; // ivar: _minimumDayDuration
@property (readonly, nonatomic) CGFloat percentOfDay; // ivar: _percentOfDay
@property (readonly) Class superclass;


-(id)initWithMinimumDayDuration:(CGFloat)arg0 percentOfDay:(CGFloat)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)protobuf;
-(id)transportData;


@end


#endif