// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPTRAVELESTIMATES_H
#define CPTRAVELESTIMATES_H

@class NSMeasurement;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPTravelEstimates : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSMeasurement *distanceRemaining; // ivar: _distanceRemaining
@property (readonly, copy, nonatomic) NSMeasurement *distanceRemainingDisplay; // ivar: _distanceRemainingDisplay
@property (readonly, nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining
@property (nonatomic) NSUInteger timeRemainingColor; // ivar: _timeRemainingColor


+(BOOL)supportsSecureCoding;
+(id)_greenColor;
+(id)_orangeColor;
+(id)_redColor;
+(id)timeRemainingColorForColor:(NSUInteger)arg0 ;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistanceRemaining:(id)arg0 distanceRemainingDisplay:(id)arg1 timeRemaining:(CGFloat)arg2 ;
-(id)initWithDistanceRemaining:(id)arg0 timeRemaining:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif