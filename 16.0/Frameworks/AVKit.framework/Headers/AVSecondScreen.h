// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSECONDSCREEN_H
#define AVSECONDSCREEN_H

@class CADisplay, UIScreen, UIWindow, UIWindowScene;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVSecondScreenConnection.h"

@interface AVSecondScreen : NSObject

@property (readonly, nonatomic, getter=isTVOutScreen) BOOL TVOutScreen; // ivar: _TVOutScreen
@property (retain, nonatomic) CADisplay *debugInfoDisplay; // ivar: _debugInfoDisplay
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (readonly, nonatomic) CGRect sceneBounds;
@property (readonly, weak, nonatomic) UIScreen *screen; // ivar: _screen
@property (retain, nonatomic) AVSecondScreenConnection *secondScreenConnection; // ivar: _secondScreenConnection
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) UIWindow *window; // ivar: _window
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_isWindowSceneAvailable;
-(BOOL)isAvailable;
-(id)initWithScene:(id)arg0 ;
-(void)_updatePreferredDisplayCriteria;
-(void)connectWithSecondScreenConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif