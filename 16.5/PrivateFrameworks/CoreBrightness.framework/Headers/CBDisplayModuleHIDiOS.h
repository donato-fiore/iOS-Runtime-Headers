// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDISPLAYMODULEHIDIOS_H
#define CBDISPLAYMODULEHIDIOS_H

@class NSUUID, NSArray, NSString;
@protocol CBContainerModuleProtocol, OS_os_log, OS_dispatch_queue;


#import "CBDisplayModule.h"

@interface CBDisplayModuleHIDiOS : CBDisplayModule <CBContainerModuleProtocol>

 {
    *__IOHIDDevice _hidDisplayDevice;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_containerID;
    *__IOHIDElement _brightnessElement;
    *__IOHIDElement _durationElement;
    NSArray *_elements;
    float _minNits;
    float _maxNits;
    float _currentNits;
    float _nitsScaler;
    float _minLinearBrightness;
    NSObject<OS_dispatch_queue> *_brightnessUpdateQueue;
    NSUInteger _brighntessUpdateCounter;
    float _brightnessUpdateTarget;
    BOOL _noHID;
    NSUInteger _displayVID;
    NSUInteger _displayPID;
}


@property (readonly) NSUInteger PID; // ivar: _PID
@property (readonly) NSUInteger VID; // ivar: _VID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getNits:(*float)arg0 ;
-(BOOL)handleDisplayBrightnessProperty:(id)arg0 ;
-(BOOL)handleDisplayLinearBrightnessProperty:(id)arg0 ;
-(BOOL)handleDisplayProductIDProperty:(id)arg0 ;
-(BOOL)handleDisplayVendorIDProperty:(id)arg0 ;
-(BOOL)setLinearBrightness:(float)arg0 ;
-(BOOL)setNits:(float)arg0 ;
-(BOOL)setNits:(float)arg0 withPeriod:(float)arg1 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setSlider:(float)arg0 ;
-(float)getLinearBrightness;
-(float)getNitsForUserBrightness:(float)arg0 ;
-(float)getUserBrightnessForNits:(float)arg0 ;
-(id)copyIdentifiers;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)initWithDevice:(unsigned int)arg0 andQueue:(id)arg1 ;
-(id)newDisplayBrightnessData;
-(void)dealloc;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif