// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSLEEPDURATIONCOORDINATE_H
#define HKSLEEPDURATIONCOORDINATE_H

@class NSNumber, NSArray;


#import "HKMinMaxCoordinate.h"

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate

@property (copy, nonatomic) NSNumber *goalLineYValue; // ivar: _goalLineYValue
@property (readonly, nonatomic) BOOL highlighted; // ivar: _highlighted
@property (copy, nonatomic) NSArray *stackPoints; // ivar: _stackPoints


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithStackPoints:(id)arg0 goalLineYValue:(id)arg1 highlighted:(BOOL)arg2 userInfo:(id)arg3 ;


@end


#endif