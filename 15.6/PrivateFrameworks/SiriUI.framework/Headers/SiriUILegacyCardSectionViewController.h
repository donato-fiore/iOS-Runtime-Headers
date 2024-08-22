// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUILEGACYCARDSECTIONVIEWCONTROLLER_H
#define SIRIUILEGACYCARDSECTIONVIEWCONTROLLER_H

@class CRKCardSectionViewController, NSString;
@protocol SiriUISnippetViewControllerDelegatePrivate, SiriUISnippetViewControllerDelegate;


#import "SiriUISnippetViewController.h"
#import "SiriUICardSectionView.h"

@interface SiriUILegacyCardSectionViewController : CRKCardSectionViewController <SiriUISnippetViewControllerDelegatePrivate, SiriUISnippetViewControllerDelegate>



@property (readonly, nonatomic) SiriUISnippetViewController *backingSnippetViewController; // ivar: _snippetViewController
@property (weak, nonatomic) SiriUISnippetViewController *containingSnippetViewController; // ivar: _containingSnippetViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SiriUICardSectionView *view;


+(id)cardSectionClasses;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAttemptToConnectToRemoteViewController;
-(BOOL)siriSnippetViewControllerIsVisible:(id)arg0 ;
-(BOOL)siriViewControllerShouldPreventUserInteraction:(id)arg0 ;
-(CGFloat)boundingWidthForSnippetViewController:(id)arg0 ;
-(CGFloat)siriViewControllerExpectedWidth:(id)arg0 ;
-(CGFloat)statusBarHeightForSiriViewController:(id)arg0 ;
-(NSUInteger)siriDeviceLockStateForSnippetViewController:(id)arg0 ;
-(id)_createReusableViewIfNeededWithClass:(Class)arg0 ;
-(id)_interaction;
-(id)additionalSpeechInterpretationsForSiriViewController:(id)arg0 ;
-(id)localeForSiriViewController:(id)arg0 ;
-(id)persistentDataStoreForSiriViewController:(id)arg0 ;
-(id)siriEnabledAppListForSiriViewController:(id)arg0 ;
-(id)siriViewController:(id)arg0 disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(id)siriViewController:(id)arg0 domainObjectForIdentifier:(id)arg1 ;
-(id)siriViewController:(id)arg0 filteredDisambiguationListItems:(id)arg1 ;
-(id)siriViewController:(id)arg0 listItemToPickInAutodisambiguationForListItems:(id)arg1 ;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg0 ;
-(id)updatedUserUtteranceForSiriViewController:(id)arg0 ;
-(struct CGSize )siriViewControllerVisibleContentArea:(id)arg0 ;
-(struct UIEdgeInsets )siriViewControllerBackgroundInsets:(id)arg0 ;
-(void)_loadCardSectionView;
-(void)_updateContentSize;
-(void)cancelRequestForSiriSnippetViewController:(id)arg0 ;
-(void)cancelSpeakingForSiriViewController:(id)arg0 ;
-(void)removeSiriViewController:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)siriSnippetViewController:(id)arg0 didDismissViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg0 didPresentViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg0 didRequestKeyboardWithVisibility:(BOOL)arg1 ;
-(void)siriSnippetViewController:(id)arg0 didShowGuideStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg0 pushSirilandSnippets:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg0 requestPasscodeUnlockWithCompletion:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg0 setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)siriSnippetViewController:(id)arg0 setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)siriSnippetViewController:(id)arg0 setStatusViewHidden:(BOOL)arg1 ;
-(void)siriSnippetViewController:(id)arg0 shouldPresentPicker:(id)arg1 completion:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)siriSnippetViewControllerViewDidLoad:(id)arg0 ;
-(void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg0 ;
-(void)siriViewController:(id)arg0 addSelectionResponse:(id)arg1 ;
-(void)siriViewController:(id)arg0 didHideVibrantView:(id)arg1 ;
-(void)siriViewController:(id)arg0 openURL:(id)arg1 completion:(id)arg2 ;
-(void)siriViewController:(id)arg0 performAceCommands:(id)arg1 ;
-(void)siriViewController:(id)arg0 performAceCommands:(id)arg1 completion:(id)arg2 ;
-(void)siriViewController:(id)arg0 setContentOffset:(CGFloat)arg1 ;
-(void)siriViewController:(id)arg0 setDomainObject:(id)arg1 forIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg0 speakText:(id)arg1 completion:(id)arg2 ;
-(void)siriViewController:(id)arg0 startCorrectedSpeechRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3 ;
-(void)siriViewControllerDidEndEditing:(id)arg0 ;
-(void)siriViewControllerHeightDidChange:(id)arg0 ;
-(void)siriViewControllerHeightDidChange:(id)arg0 pinTopOfSnippet:(BOOL)arg1 ;
-(void)siriViewControllerRequestTearDownEditingViewController:(id)arg0 ;
-(void)siriViewControllerViewDidAppear:(id)arg0 isTopLevelViewController:(BOOL)arg1 ;
-(void)siriViewControllerViewDidDisappear:(id)arg0 isTopLevelViewController:(BOOL)arg1 ;
-(void)siriViewControllerWillBeginEditing:(id)arg0 ;


@end


#endif