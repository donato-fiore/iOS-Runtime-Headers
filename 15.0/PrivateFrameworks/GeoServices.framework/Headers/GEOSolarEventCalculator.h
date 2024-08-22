// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSOLAREVENTCALCULATOR_H
#define GEOSOLAREVENTCALCULATOR_H


#import <Foundation/Foundation.h>


@interface GEOSolarEventCalculator : NSObject {
    *void _rts;
}




+(CGFloat)nextEventOfType:(unsigned int)arg0 after:(CGFloat)arg1 forLocation:(struct ? )arg2 ;
+(CGFloat)nextEventOfType:(unsigned int)arg0 after:(CGFloat)arg1 forLocation:(struct ? )arg2 altitudeInDegrees:(CGFloat)arg3 accuracy:(CGFloat)arg4 ;
+(CGFloat)prevEventOfType:(unsigned int)arg0 before:(CGFloat)arg1 forLocation:(struct ? )arg2 altitudeInDegrees:(CGFloat)arg3 accuracy:(CGFloat)arg4 ;
-(CGFloat)nextEventOfType:(unsigned int)arg0 ;
-(id)description;
-(id)initWithLocation:(struct ? )arg0 time:(CGFloat)arg1 ;
-(id)initWithLocation:(struct ? )arg0 time:(CGFloat)arg1 altitudeInDegrees:(CGFloat)arg2 accuracy:(CGFloat)arg3 ;
-(id)initWithLocation:(struct ? )arg0 time:(CGFloat)arg1 altitudeInDegrees:(CGFloat)arg2 accuracy:(CGFloat)arg3 after:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif