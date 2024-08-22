// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSUGGESTIONMANAGER_H
#define SBAPPSUGGESTIONMANAGER_H

@class UABestAppSuggestionManager, UABestAppSuggestion, _DECConsumer, _DECResult, NSCountedSet, NSString;
@protocol UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate;

#import <Foundation/Foundation.h>

#import "SBBestAppSuggestion.h"
#import "SBAttentionAwarenessClient.h"

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate>

 {
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    _DECConsumer *_expertCenterSuggestionMonitor;
    _DECResult *_currentExpertBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    BOOL _isListeningForContinuitySuggestion;
    BOOL _isListeningForExpertCenterSuggestion;
    BOOL _screenOnDueToUserEvent;
    BOOL _screenOnAndLookingForEvent;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSUInteger)_supportedExpertCenterCategories;
-(id)currentSuggestedApp;
-(id)init;
-(void)_calculateBestSuggestionAndNotifyListeners;
-(void)_createSuggestionSources;
-(void)_destroySuggestionSources;
-(void)_evaluateSuggestionUpdates:(id)arg0 ;
-(void)_handleAppUninstall:(id)arg0 ;
-(void)_handleInitialSpringBoardLaunch;
-(void)_listenForNotifications;
-(void)_screenDidDim:(id)arg0 ;
-(void)_screenDidUndim:(id)arg0 ;
-(void)_setContinuitySuggestionUpdatesEnabled:(BOOL)arg0 expertCenterSuggestionUpdatesEnabled:(BOOL)arg1 ;
-(void)_stopListeningForNotifications;
-(void)bestAppSuggestionChanged:(id)arg0 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)dealloc;
-(void)disableListeningForUpdatesForReason:(id)arg0 ;
-(void)enableListeningForUpdatesForReason:(id)arg0 ;
-(void)expertCenterSuggestionChanged:(id)arg0 ;
-(void)noteActivatingForAppSuggestion:(id)arg0 fromSource:(NSInteger)arg1 ;
-(void)noteNotActivatingForAppSuggestion:(id)arg0 fromSource:(NSInteger)arg1 ;
-(void)performWithCurrentSuggestedAppAndApplication:(id)arg0 ;
-(void)startFetchingPayloadForAppSuggestion:(id)arg0 ;


@end


#endif