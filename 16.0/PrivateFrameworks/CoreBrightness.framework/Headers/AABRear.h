// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AABREAR_H
#define AABREAR_H



#import "CBModule.h"
#import "CBGrimaldiModule.h"

@interface AABRear : CBModule {
    CBGrimaldiModule *_Grimaldi;
    BOOL _started;
    BOOL _sensorEnabled;
    float _frontALSThreshold;
    float _rearALSThreshold;
    float _luxRatioThreshold;
    float _nitsRatioThreshold;
    float _lastFrequency;
    float _activationFLux;
}




-(BOOL)checkSensorEnablementConditions:(float)arg0 ;
-(BOOL)shouldUseRLux:(float)arg0 rLux:(float)arg1 ;
-(BOOL)shouldUseRearLuxFrontLux:(float)arg0 rearLux:(float)arg1 andCap:(float)arg2 ;
-(float)nitsRatio;
-(id)copyParam:(id)arg0 ;
-(id)initWithGrimaldi:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)evaluateSamplingFrequencyWithLux:(float)arg0 andCap:(float)arg1 ;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unregisterNotificationBlock;


@end


#endif