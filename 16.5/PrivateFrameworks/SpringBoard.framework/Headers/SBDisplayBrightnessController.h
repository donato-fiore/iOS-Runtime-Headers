// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYBRIGHTNESSCONTROLLER_H
#define SBDISPLAYBRIGHTNESSCONTROLLER_H

@class SBUIViewFloatSpringProperty, NSString;
@protocol SBHIDValueModifyingButtonSetArbiterDelegate, SBBrightnessRouteControlling, SBBrightnessRouteCoordinating;

#import <Foundation/Foundation.h>

#import "SBHIDValueModifyingButtonSetArbiter.h"

@interface SBDisplayBrightnessController : NSObject <SBHIDValueModifyingButtonSetArbiterDelegate, SBBrightnessRouteControlling>

 {
    *BKSDisplayBrightnessTransaction _brightnessTransaction;
    id<SBBrightnessRouteCoordinating> *_coordinator;
    SBHIDValueModifyingButtonSetArbiter *_buttonArbiter;
    SBUIViewFloatSpringProperty *_brightnessProperty;
}


@property (readonly, nonatomic) float brightnessLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)handlesKeyCommands;
-(BOOL)_isBrightnessPropertyRunning;
-(NSInteger)brightnessRouteType;
-(float)_effectiveCurrentTargetBrightness;
-(id)initWithCoordinator:(id)arg0 ;
-(void)_beginBrightnessTransaction;
-(void)_completeBrightnessTransaction;
-(void)buttonSetArbiter:(id)arg0 performActionForButtonPage:(unsigned short)arg1 usage:(unsigned short)arg2 ;
-(void)buttonSetArbiterDidReset:(id)arg0 ;
-(void)cancelBrightnessKeyPressEvent;
-(void)dealloc;
-(void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent *)arg0 ;
-(void)noteValueUpdatesDidEnd;
-(void)noteValueUpdatesWillBegin;


@end


#endif