// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPPTRUNNER_H
#define SBPPTRUNNER_H

@class NSString;
@protocol CCUIPPTHostDelegate, NCNotificationViewControllerObserving;

#import <Foundation/Foundation.h>


@interface SBPPTRunner : NSObject <CCUIPPTHostDelegate, NCNotificationViewControllerObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)isAppLibraryTest:(id)arg0 ;
+(BOOL)isPageManagementTest:(id)arg0 ;
+(id)_operationToPutVideoInPIP;
+(id)_operationToRestoreVideoFromPIP;
+(id)_operationToStashPIP;
+(id)_operationToUnstashStashedPIP;
+(id)sharedInstance;
-(BOOL)_runCoverSheetTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)runTestWithName:(id)arg0 options:(id)arg1 ;
-(id)_operationToDismissCoverSheetForTestWithName:(id)arg0 ;
-(id)_operationToPresentCoverSheetForTestWithName:(id)arg0 ;
-(void)_configureParams:(id)arg0 forScrollView:(id)arg1 ;
-(void)_runAppLibraryPadPresent;
-(void)_runAppLibraryTestWithName:(id)arg0 options:(id)arg1 ;
-(void)_runCoverSheetDismissTestWithOptions:(id)arg0 ;
-(void)_runCoverSheetDismissToSafariTestWithOptions:(id)arg0 ;
-(void)_runCoverSheetPresentOverSafariTestWithOptions:(id)arg0 ;
-(void)_runCoverSheetPresentTestWithOptions:(id)arg0 ;
-(void)_runFloatingDockBringupTestWithOptions:(id)arg0 ;
-(void)_runFloatingDockDismissTestWithOptions:(id)arg0 ;
-(void)_runLibrarySearchTest;
-(void)_runNotificationBannerTransitionTestWithOptions:(id)arg0 ;
-(void)_runNotificationClearLongLookTransitionTestWithOptions:(id)arg0 ;
-(void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)arg0 ;
-(void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)arg0 ;
-(void)_runPIPAutoStashByEnteringSwitcherTestWithOptions:(id)arg0 ;
-(void)_runPIPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)arg0 ;
-(void)_runPIPBasicRestoreTestWithOptions:(id)arg0 ;
-(void)_runPIPManualStashTestWithOptions:(id)arg0 ;
-(void)_runPIPManualUnstashTestWithOptions:(id)arg0 ;
-(void)_runPageManagementPresentTestWithName:(id)arg0 options:(id)arg1 ;
-(void)_runPageManagementTestWithName:(id)arg0 options:(id)arg1 ;
-(void)_runPiPAutoStashByEnteringSwitcherTestWithOptions:(id)arg0 ;
-(void)_runPiPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)arg0 ;
-(void)_runPiPBasicRestoreTestWithOptions:(id)arg0 ;
-(void)_runPiPManualStashTestWithOptions:(id)arg0 ;
-(void)_runPiPManualUnstashTestWithOptions:(id)arg0 ;
-(void)_runPullToAppLibrarySearchTest;
-(void)_runScrollDeweyTest;
-(void)_runScrollWithinExpandedPodTest;
-(void)_runSiriTestWithName:(id)arg0 options:(id)arg1 ;
-(void)_runSwipeFromDeweyTest;
-(void)_runSwipeToDeweyTest;
-(void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)arg0 operation:(id)arg1 ;
-(void)assistantDidAppear:(id)arg0 ;
-(void)assistantWillAppear:(id)arg0 ;
-(void)longLookDidDismissForNotificationViewController:(id)arg0 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg0 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg0 ;
-(void)prepareForControlCenterPPTHostState:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif