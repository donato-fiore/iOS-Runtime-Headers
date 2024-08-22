// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWHIDINGMANAGER_H
#define SBWINDOWHIDINGMANAGER_H

@class NSMapTable, SBSceneHandle, NSString;
@protocol SBSceneHandleObserver, UIScenePresenter;

#import <Foundation/Foundation.h>


@interface SBWindowHidingManager : NSObject <SBSceneHandleObserver>

 {
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    SBSceneHandle *_keyboardSceneHandle;
    SBWindowLevelRange_struct _hideRange;
    id<UIScenePresenter> *_keyboardPresenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)start;
-(BOOL)_isHidingWindowLevel:(CGFloat)arg0 ;
-(BOOL)_isHidingWindows;
-(id)dumpHidingState;
-(id)dumpKnownWindows;
-(id)init;
-(void)_adjustWindowsForActiveHideRange;
-(void)_captureWindow:(id)arg0 ;
-(void)_recomputeHideRangeAndAdjustWindows;
-(void)_releaseWindow:(id)arg0 ;
-(void)_takeNoteOfWindow:(id)arg0 onScreen:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)setAlpha:(CGFloat)arg0 forWindow:(id)arg1 ;
-(void)startHidingWindowsExclusivelyFromLevel:(CGFloat)arg0 toLevel:(CGFloat)arg1 forContext:(id)arg2 reason:(id)arg3 ;
-(void)stopHidingWindowsForContext:(id)arg0 ;


@end


#endif