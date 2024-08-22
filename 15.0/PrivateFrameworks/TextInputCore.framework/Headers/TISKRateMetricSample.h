// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKRATEMETRICSAMPLE_H
#define TISKRATEMETRICSAMPLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TISKRateMetricSample : NSObject <NSSecureCoding>



@property (nonatomic) int countFactor; // ivar: _countFactor
@property (nonatomic) CGFloat durationFactor; // ivar: _durationFactor


+(BOOL)supportsSecureCoding;
+(id)makeMetric;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)rate;
-(void)addToCounter:(int)arg0 ;
-(void)addToDuration:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)merge:(id)arg0 ;


@end


#endif