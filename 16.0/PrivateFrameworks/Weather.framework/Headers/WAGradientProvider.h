// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WAGRADIENTPROVIDER_H
#define WAGRADIENTPROVIDER_H


#import <Foundation/Foundation.h>


@interface WAGradientProvider : NSObject



-(id)gradientForConditionCode:(NSInteger)arg0 isDay:(BOOL)arg1 ;
-(struct ? )mixedColorsForIndex:(NSInteger)arg0 solarHeight:(float)arg1 condition:(NSInteger)arg2 latitude:(float)arg3 ;
-(struct ? )mixedGradientForSunheight:(CGFloat)arg0 hourAngle:(CGFloat)arg1 condition:(NSInteger)arg2 latitude:(float)arg3 ;
-(void)getTopColor:(*id)arg0 middleColor:(*id)arg1 bottomColor:(*id)arg2 gradientStopPoint:(*CGFloat)arg3 forCity:(id)arg4 date:(id)arg5 ;


@end


#endif