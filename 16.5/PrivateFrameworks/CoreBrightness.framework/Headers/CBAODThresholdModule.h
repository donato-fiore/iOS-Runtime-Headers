// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBAODTHRESHOLDMODULE_H
#define CBAODTHRESHOLDMODULE_H

@class NSMutableArray, NSString;
@protocol CBHIDServiceProtocol;


#import "CBModule.h"

@interface CBAODThresholdModule : CBModule <CBHIDServiceProtocol>

 {
    float _minNits;
    float _maxNits;
    float _Pthreshold_dim;
    float _Pthreshold_dim_lowLux;
    float _Pthreshold_brighten;
    float _Pthreshold_brighten_lowLux;
    float _AP_Pthreshold_dim;
    float _AP_Pthreshold_brighten;
    BOOL _brightenLuxThresholdOverriden;
    BOOL _dimLuxThresholdOverriden;
    float _currentBrightness;
    float _currentLux;
    float _currentBrightnessLimit;
    NSMutableArray *_alsServiceClients;
}


@property float brightenLuxThreshold; // ivar: _brightenLuxThreshold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property float dimLuxThreshold; // ivar: _dimLuxThreshold
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)thresholdsCrossedForLux:(float)arg0 ;
-(id)copyPdeltaThresholdsForLux:(float)arg0 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)checkBootArgsConfiguration;
-(void)dealloc;
-(void)reevaluateALSThresholds;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)updateALSThresholdsWithBrightness:(float)arg0 brightnessLimit:(float)arg1 lux:(float)arg2 ;


@end


#endif