// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCPHYSICALINPUTPROFILE_H
#define GCPHYSICALINPUTPROFILE_H

@class NSMutableSet, NSDictionary, NSMutableDictionary, NSString;
@protocol GCNamedProfile, GCControllerComponent, GCDevice, GCSystemGestureComponent, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCMotion.h"
#import "GCControllerSettings.h"
#import "GCController.h"

@interface GCPhysicalInputProfile : NSObject <GCNamedProfile, GCControllerComponent>

 {
    id<GCDevice> *_device;
    GCMotion *_motion;
    GCControllerElement" _remappedElements;
    GCControllerSettings *_appliedSettings;
    GCControllerSettings *_appliedGlobalSettings;
    NSMutableSet *_allGestureAwareButtons;
    NSDictionary *_physicalInputNameToElementAlias;
    NSDictionary *_elementAliasToPhysicalInputNames;
    id<GCSystemGestureComponent> *_systemGestureComponent;
}


@property (retain) GCMotion *_motion;
@property (retain, nonatomic) NSMutableSet *_topLevelButtons; // ivar: __topLevelButtons
@property (retain, nonatomic) NSMutableSet *_topLevelDirectionPads; // ivar: __topLevelDirectionPads
@property (retain, nonatomic) NSMutableSet *_topLevelElements; // ivar: __topLevelElements
@property (retain, nonatomic) NSMutableSet *_topLevelTouchpads; // ivar: __topLevelTouchpads
@property (retain, nonatomic) NSMutableSet *allAxes; // ivar: _allAxes
@property (retain, nonatomic) NSMutableSet *allButtons; // ivar: _allButtons
@property (retain, nonatomic) NSMutableSet *allDpads; // ivar: _allDpads
@property (retain, nonatomic) NSMutableSet *allElements; // ivar: _allElements
@property (retain, nonatomic) NSMutableSet *allTouchpads; // ivar: _allTouchpads
@property (retain, nonatomic) NSMutableDictionary *axes; // ivar: _axes
@property (retain, nonatomic) GCControllerSettings *bundleSettings; // ivar: _bundleSettings
@property (retain, nonatomic) NSMutableDictionary *buttons; // ivar: _buttons
@property (readonly, weak, nonatomic) GCController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GCControllerSettings *defaultSettings; // ivar: _defaultSettings
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<GCDevice> *device;
@property (retain, nonatomic) NSMutableDictionary *dpads; // ivar: _dpads
@property (retain, nonatomic) NSMutableDictionary *elements; // ivar: _elements
@property (nonatomic) NSInteger glyphSetOverride; // ivar: _glyphSetOverride
@property (nonatomic) BOOL hasRemappedElements; // ivar: _hasRemappedElements
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property CGFloat lastEventTimestamp; // ivar: _lastEventTimestamp
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *touchpads; // ivar: _touchpads


-(id)_buttonWithInfo:(struct ? )arg0 ;
-(id)_cursorWithInfo:(struct ? )arg0 ;
-(id)_directionPadWithInfo:(struct ? )arg0 ;
-(id)_keyboardButtonWithInfo:(struct ? )arg0 ;
-(id)_touchpadWithInfo:(struct ? )arg0 ;
-(id)capture;
-(id)init;
-(id)initWithController:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)mappedElementAliasForPhysicalInputName:(id)arg0 ;
-(id)mappedPhysicalInputNamesForElementAlias:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)productCategory;
-(id)remappedElementForIndex:(NSInteger)arg0 ;
-(id)valueChangedHandler:(SEL)arg0 ;
-(unsigned int)sampleRate;
-(void)_receivedEvent;
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
-(void)applyGlobalSettings:(id)arg0 ;
-(void)applySettings:(id)arg0 ;
-(void)applySystemGestureComponent:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)registerPhysicalInputName:(id)arg0 toElementAlias:(id)arg1 withPhysicalToElementMapping:(id)arg2 withElementToPhysicalMapping:(id)arg3 ;
-(void)setButton:(id)arg0 pressed:(BOOL)arg1 ;
-(void)setButton:(id)arg0 value:(CGFloat)arg1 ;
-(void)setDpad:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 ;
-(void)setPlayerIndex:(NSInteger)arg0 ;
-(void)setStateFromPhysicalInput:(id)arg0 ;
-(void)updateElementControllerReferences;
-(void)updateSystemGesturesState:(id)arg0 ;


@end


#endif