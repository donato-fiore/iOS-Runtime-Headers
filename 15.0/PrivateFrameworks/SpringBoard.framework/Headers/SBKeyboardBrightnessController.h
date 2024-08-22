// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKEYBOARDBRIGHTNESSCONTROLLER_H
#define SBKEYBOARDBRIGHTNESSCONTROLLER_H

@class KeyboardBrightnessClient, NSString;
@protocol SBHIDValueModifyingButtonSetArbiterDelegate, SBBrightnessRouteControlling, SBBrightnessRouteCoordinating;

#import <Foundation/Foundation.h>

#import "SBHIDValueModifyingButtonSetArbiter.h"

@interface SBKeyboardBrightnessController : NSObject <SBHIDValueModifyingButtonSetArbiterDelegate, SBBrightnessRouteControlling>

 {
    id<SBBrightnessRouteCoordinating> *_coordinator;
    KeyboardBrightnessClient *_keyboardBrightnessClient;
    SBHIDValueModifyingButtonSetArbiter *_buttonArbiter;
}


@property (readonly, nonatomic) float brightnessLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)handlesKeyCommands;
-(NSInteger)brightnessRouteType;
-(float)_currentBrightness;
-(id)initWithCoordinator:(id)arg0 ;
-(void)buttonSetArbiter:(id)arg0 performActionForButtonPage:(unsigned short)arg1 usage:(unsigned short)arg2 ;
-(void)buttonSetArbiterDidReset:(id)arg0 ;
-(void)cancelBrightnessKeyPressEvent;
-(void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent *)arg0 ;
-(void)noteValueUpdatesDidEnd;
-(void)noteValueUpdatesWillBegin;


@end


#endif