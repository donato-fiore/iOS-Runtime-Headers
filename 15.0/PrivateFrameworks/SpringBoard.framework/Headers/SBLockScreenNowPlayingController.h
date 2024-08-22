// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENNOWPLAYINGCONTROLLER_H
#define SBLOCKSCREENNOWPLAYINGCONTROLLER_H

@class PCPersistentTimer, CSLockScreenSettings, PTToggleTestRecipe, NSString;
@protocol PTSettingsKeyObserver, SBLockScreenNowPlayingControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBMediaController.h"

@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver>

 {
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
    CSLockScreenSettings *_testSettings;
    PTToggleTestRecipe *_testRecipe;
}


@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLockScreenNowPlayingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isMediaRecentlyActive;
-(BOOL)isNowPlayingActive;
-(CGFloat)_timeoutInterval;
-(id)initWithMediaController:(id)arg0 ;
-(void)_addObservers;
-(void)_disableTimerFired;
-(void)_invalidateDisableTimer;
-(void)_removeObservers;
-(void)_startDisableTimer;
-(void)_updateNowPlayingPlugin;
-(void)_updateToState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif