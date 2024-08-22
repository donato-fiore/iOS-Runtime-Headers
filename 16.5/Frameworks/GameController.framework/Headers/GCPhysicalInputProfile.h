// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCPHYSICALINPUTPROFILE_H
#define GCPHYSICALINPUTPROFILE_H

@class NSMutableSet, NSDictionary, NSSet, NSString, GCSProfile;
@protocol GCNamedProfile, _GCGamepadEventSink, GCControllerComponent, GCDevice, GCSystemGestureComponent, OS_dispatch_queue, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCObjectPool.h"
#import "GCMotion.h"
#import "GCController.h"

@interface GCPhysicalInputProfile : NSObject <GCNamedProfile, _GCGamepadEventSink, GCControllerComponent>

 {
    NSInteger _inlineRefcount;
    GCObjectPool *pool;
    GCObjectPool *weakPool;
    BOOL pooled;
    id<GCDevice> *_device;
    id *_gamepadEventObservation;
    GCMotion *_motion;
    id *_valueDidChangedHandler;
    GCControllerElement" _remappedElements;
    NSMutableSet *_allGestureAwareButtons;
    NSDictionary *_physicalInputNameToElementAlias;
    NSDictionary *_elementAliasToPhysicalInputNames;
    id<GCSystemGestureComponent> *_systemGestureComponent;
    NSObject<OS_dispatch_queue> *_syntheticDeviceHandlerQueue;
    id *_syntheticDeviceElementValueChangedHandler;
}


@property (retain) GCMotion *_motion;
@property (readonly, nonatomic) NSMutableSet *_topLevelButtons; // ivar: __topLevelButtons
@property (readonly, nonatomic) NSMutableSet *_topLevelDirectionPads; // ivar: __topLevelDirectionPads
@property (readonly, nonatomic) NSMutableSet *_topLevelElements; // ivar: __topLevelElements
@property (readonly, nonatomic) NSMutableSet *_topLevelTouchpads; // ivar: __topLevelTouchpads
@property (readonly, nonatomic) NSSet *allAxes; // ivar: _allAxes
@property (readonly, nonatomic) NSSet *allButtons; // ivar: _allButtons
@property (readonly, nonatomic) NSSet *allDpads; // ivar: _allDpads
@property (readonly, nonatomic) NSSet *allElements; // ivar: _allElements
@property (readonly, nonatomic) NSSet *allTouchpads; // ivar: _allTouchpads
@property (readonly, nonatomic) NSDictionary *axes; // ivar: _axes
@property (readonly, nonatomic) NSDictionary *buttons; // ivar: _buttons
@property (readonly, weak, nonatomic) GCController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<GCDevice> *device;
@property (readonly, nonatomic) NSDictionary *dpads; // ivar: _dpads
@property (readonly, nonatomic) NSDictionary *elements; // ivar: _elements
@property (nonatomic) NSUInteger glyphFlags; // ivar: _glyphFlags
@property (readonly) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic) BOOL hasRemappedElements; // ivar: _hasRemappedElements
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property CGFloat lastEventTimestamp; // ivar: _lastEventTimestamp
@property (readonly) NSString *name;
@property (retain, nonatomic) GCSProfile *settingsProfile; // ivar: _settingsProfile
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy) id *syntheticDeviceElementValueChangedHandler;
@property (retain) NSObject<OS_dispatch_queue> *syntheticDeviceHandlerQueue;
@property (copy, nonatomic) id *thumbstickUserIntentHandler;
@property (readonly, nonatomic) NSDictionary *touchpads; // ivar: _touchpads
@property (copy, nonatomic) id *valueDidChangeHandler; // ivar: _valueDidChangeHandler


-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)settingsProfile:(id)arg0 differsFrom:(id)arg1 ;
-(NSUInteger)retainCount;
-(id)_buttonWithDescription:(id)arg0 ;
-(id)_buttonWithInfo:(struct ? )arg0 ;
-(id)_cursorWithInfo:(struct ? )arg0 ;
-(id)_directionPadWithDescription:(id)arg0 ;
-(id)_directionPadWithInfo:(struct ? )arg0 ;
-(id)_keyboardButtonWithInfo:(struct ? )arg0 ;
-(id)_touchpadWithInfo:(struct ? )arg0 ;
-(id)capture;
-(id)init;
-(id)initWithController:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 andPool:(id)arg1 ;
-(id)mappedElementAliasForPhysicalInputName:(id)arg0 ;
-(id)mappedPhysicalInputNamesForElementAlias:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)productCategory;
-(id)remappedElementForIndex:(NSInteger)arg0 ;
-(id)retain;
-(id)valueChangedHandler:(SEL)arg0 ;
-(unsigned int)sampleRate;
-(void)_receivedEvent;
-(void)_receivedEventWithTimestamp:(NSUInteger)arg0 ;
-(void)_registerAxis:(id)arg0 ;
-(void)_registerButton:(id)arg0 ;
-(void)_registerDirectionPad:(id)arg0 ;
-(void)_registerTopLevelButton:(id)arg0 ;
-(void)_registerTopLevelDirectionPad:(id)arg0 ;
-(void)_registerTopLevelTouchpad:(id)arg0 ;
-(void)_registerTouchpad:(id)arg0 ;
-(void)_triggerValueChangedHandlerForElement:(id)arg0 queue:(id)arg1 ;
-(void)appDidBecomeActive;
-(void)appWillResignActive;
-(void)applyGestureSettingsToButton:(id)arg0 withSettings:(id)arg1 ;
-(void)applySettingsProfile:(id)arg0 ;
-(void)applySystemGestureComponent:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)registerPhysicalInputName:(id)arg0 toElementAlias:(id)arg1 withPhysicalToElementMapping:(id)arg2 withElementToPhysicalMapping:(id)arg3 ;
-(void)release;
-(void)setButton:(id)arg0 pressed:(BOOL)arg1 ;
-(void)setButton:(id)arg0 value:(CGFloat)arg1 ;
-(void)setDpad:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 ;
-(void)setGamepadEventSource:(id)arg0 ;
-(void)setPlayerIndex:(NSInteger)arg0 ;
-(void)setStateFromPhysicalInput:(id)arg0 ;
-(void)updateElementDeviceReferences;
-(void)updateSystemGesturesState:(id)arg0 ;


@end


#endif