// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBABMODULEEXTERNAL_H
#define CBABMODULEEXTERNAL_H

@class NSMutableArray, NSString;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol;


#import "CBModule.h"
#import "CBABCurve.h"
#import "CBABRamp.h"
#import "CBDisplayModule.h"

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol>

 {
    NSMutableArray *_ALSServices;
    NSString *_containerID;
    NSString *_uniqueID;
    NSString *_displayUUID;
    BOOL _enabled;
    BOOL _available;
    BOOL _presetDisableAB;
    CBABCurve *_curve;
    CBABRamp *_ramp;
    BOOL _updatesFrozen;
    BOOL _suspendAutoBrightness;
    BOOL _fastRamp;
    BOOL _builtIn;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CBDisplayModule *displayModule; // ivar: _displayModule
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)getAggregatedLux:(*float)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)newALSService:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg0 forKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithDisplayModule:(id)arg0 andQueue:(id)arg1 ;
-(void)dealloc;
-(void)endFastRamp;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)storeCurveToPreferences;
-(void)updateAutoBrightnessState:(BOOL)arg0 ;
-(void)updateAvailability;
-(void)updateBrightness;
-(void)updateBrightnessForce:(BOOL)arg0 periodOverride:(BOOL)arg1 period:(float)arg2 ;
-(void)userBrightnessChangingHandler;
-(void)userBrightnessCommitHandler;


@end


#endif