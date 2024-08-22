// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICANVASUSERACTIVITYMANAGER_H
#define _UICANVASUSERACTIVITYMANAGER_H

@class NSUserActivity, NSDictionary, NSSet, NSString;
@protocol UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UIActivityContinuationManager.h"

@interface _UICanvasUserActivityManager : NSObject <UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding>

 {
    UIScene *_weakScene;
    NSUserActivity *_restorationActivity;
    NSDictionary *_connectionOptionsRestorationActivityDictionary;
    UIActivityContinuationManager *_activityContinuationManager;
    NSSet *_activityTypesForDefaultProgressUI;
}


@property (readonly, nonatomic, getter=_activityContinuationManager) UIActivityContinuationManager *_activityContinuationManager;
@property (readonly, nonatomic) BOOL _initialRestorationIsFinished; // ivar: _initialRestorationIsFinished
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:) BOOL isDisplayingActivityContinuationUI; // ivar: _isDisplayingActivityContinuationUI
@property (readonly) Class superclass;


+(BOOL)_restorationUserActivityAvailableForSceneIdentifier:(id)arg0 ;
+(id)_activityContinuationDictionaryWithAction:(id)arg0 sourceApplication:(id)arg1 ;
+(id)_fetchSceneSessionWithPersistentIdentifier:(id)arg0 ;
+(id)_getRestorationUserActivityForPersistentIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)_getUserInfoForPersistentIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)_knownSceneSessionMap;
+(id)_userActivityManagerForScene:(id)arg0 ;
+(void)_deleteSavedSceneSessionDirectoryWithPersistentIdentifier:(id)arg0 ;
+(void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg0 ;
+(void)_initializeUserActivityManager;
+(void)_saveRestorationStateForScene:(id)arg0 ;
+(void)_scheduleDataSaveForSceneSession:(id)arg0 saveRestorationActivity:(BOOL)arg1 ;
+(void)_showProgressForScene:(id)arg0 whenFetchingUserActivityForTypes:(id)arg1 ;
+(void)_updatePersistedSceneSession:(id)arg0 ;
-(BOOL)activityContinuationManager:(id)arg0 continueUserActivity:(id)arg1 ;
-(BOOL)activityContinuationManager:(id)arg0 willContinueUserActivityWithType:(id)arg1 ;
-(BOOL)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg0 ;
-(id)_updateCanvasConnectionOptionsDictionary:(id)arg0 ;
-(id)activityContinuationManagerUserCancelledError:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
-(void)_performCanvasRestoration;
-(void)_performCanvasRestorationIfNecessary;
-(void)_saveOrClearRestorationDictionary:(id)arg0 forScene:(id)arg1 ;
-(void)_saveSceneRestorationState;
-(void)_scene:(id)arg0 didTransitionFromActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_scene:(id)arg0 willTransitionToActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_setupCanvasRestorationState;
-(void)activityContinuationManager:(id)arg0 configureProgressUIWithError:(id)arg1 ;
-(void)activityContinuationManager:(id)arg0 didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2 ;
-(void)activityContinuationManager:(id)arg0 didUpdateUserActivity:(id)arg1 ;
-(void)activityContinuationManager:(id)arg0 displayProgressUI:(id)arg1 dismissalHandler:(id)arg2 ;
-(void)activityContinuationManager:(id)arg0 hideProgressUIWithCompletion:(id)arg1 ;


@end


#endif