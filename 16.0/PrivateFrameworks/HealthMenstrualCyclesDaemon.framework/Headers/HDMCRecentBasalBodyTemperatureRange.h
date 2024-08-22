// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCRECENTBASALBODYTEMPERATURERANGE_H
#define HDMCRECENTBASALBODYTEMPERATURERANGE_H

@class HKQuantity;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDMCRecentBasalBodyTemperatureRange : NSObject <NSCopying>



@property (readonly, copy, nonatomic) HKQuantity *lowerQuantile; // ivar: _lowerQuantile
@property (readonly, copy, nonatomic) HKQuantity *median; // ivar: _median
@property (readonly, copy, nonatomic) HKQuantity *upperQuantile; // ivar: _upperQuantile


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUpperQuantileValue:(CGFloat)arg0 medianValue:(CGFloat)arg1 lowerQuantileValue:(CGFloat)arg2 unit:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)recentBasalBodyTemperatureWithMostRecentQuantity:(id)arg0 ;


@end


#endif