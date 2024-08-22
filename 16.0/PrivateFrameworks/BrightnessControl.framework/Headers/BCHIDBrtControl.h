// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCHIDBRTCONTROL_H
#define BCHIDBRTCONTROL_H

@class HIDDevice, HIDElement;
@protocol OS_dispatch_queue;


#import "BCBrtControl.h"

@interface BCHIDBrtControl : BCBrtControl {
    unsigned int _hidBrightnessService;
    HIDDevice *_hidBrightnessDevice;
    HIDElement *_brightnessElement;
    HIDElement *_brightnessFadeElement;
    float _nitsScaler;
    CGFloat _nits;
    float _brightnessUpdateTarget;
    NSUInteger _brighntessUpdateCounter;
    NSObject<OS_dispatch_queue> *_brightnessUpdateQueue;
    *IONotificationPort _boostFactorNotificationPort;
    unsigned int _boostFactorNotification;
    float _nitsBoostFactor;
}


@property (readonly) NSUInteger registryID; // ivar: _registryID


+(id)copyAvailableControls;
// +(id)newMonitorWithHandler:(id)arg0 error:(unk)arg1  ;
-(BOOL)_getDeviceNits:(*CGFloat)arg0 ;
-(BOOL)_setDeviceNits:(CGFloat)arg0 ;
-(BOOL)setNits:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setProperty:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(CGFloat)getNitsWithError:(*id)arg0 ;
-(float)boostFactorFromIOFixed:(int)arg0 ;
-(id)copyModuleIdentifier;
-(id)copyProperty:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithService:(unsigned int)arg0 ;
-(void)addDisplayService:(unsigned int)arg0 ;
-(void)dealloc;
-(void)refreshBoostFactor;
-(void)removeDisplayService;
-(void)setBoostFactor:(float)arg0 ;
-(void)setDisplayService:(unsigned int)arg0 ;


@end


#endif