// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETPRESENTER_H
#define SHSHEETPRESENTER_H

@class SFAirDropViewController, NSUUID, UIViewController, NSString, UIViewController<SHSheetContentView>, NSArray;
@protocol SHSheetInteractorDelegate, _UIActivityUserDefaultsViewControllerDelegate, SFAirDropViewControllerDelegate, ObjectManipulationDelegate, CSAddParticipantsViewControllerDelegate, SHSheetPresenter, SHSheetPresenterDelegate, SHSheetInteractor;

#import <Foundation/Foundation.h>

#import "SHSheetActivityPerformerResult.h"
#import "UIActivity.h"
#import "SHSheetRouter.h"
#import "_UIActivityUserDefaultsViewController.h"

@interface SHSheetPresenter : NSObject <SHSheetInteractorDelegate, _UIActivityUserDefaultsViewControllerDelegate, SFAirDropViewControllerDelegate, ObjectManipulationDelegate, CSAddParticipantsViewControllerDelegate, SHSheetPresenter>



@property (retain, nonatomic) SHSheetActivityPerformerResult *activityResult; // ivar: _activityResult
@property (nonatomic) BOOL activityViewControllerIsEmbedded; // ivar: _activityViewControllerIsEmbedded
@property (nonatomic) BOOL activityViewControllerIsPresenting; // ivar: _activityViewControllerIsPresenting
@property (nonatomic) BOOL activityViewControllerPresentationDidBegin; // ivar: _activityViewControllerPresentationDidBegin
@property (weak, nonatomic) SFAirDropViewController *airdropViewController; // ivar: _airdropViewController
@property (copy, nonatomic) id *collaborationCreateSharingURLCompletionHandler; // ivar: _collaborationCreateSharingURLCompletionHandler
@property (retain, nonatomic) NSUUID *collaborationItemIdentifier; // ivar: _collaborationItemIdentifier
@property (weak, nonatomic) UIViewController *collaborationOptionsViewController; // ivar: _collaborationOptionsViewController
@property (weak, nonatomic) UIViewController *collaborationParticipantsViewController; // ivar: _collaborationParticipantsViewController
@property (readonly, nonatomic) UIActivity *currentActivity;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRequestDismissal; // ivar: _didRequestDismissal
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SHSheetInteractor> *interactor; // ivar: _interactor
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (nonatomic) BOOL isReportingActivityResult; // ivar: _isReportingActivityResult
@property (weak, nonatomic) UIViewController<SHSheetContentView> *mainViewController; // ivar: _mainViewController
@property (weak, nonatomic) UIViewController *optionsViewController; // ivar: _optionsViewController
@property (readonly, nonatomic) SHSheetRouter *router; // ivar: _router
@property (weak, nonatomic) UIViewController<SHSheetContentView> *secondaryViewController; // ivar: _secondaryViewController
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (weak, nonatomic) _UIActivityUserDefaultsViewController *userDefaultsViewController; // ivar: _userDefaultsViewController


-(id)customTitleForActivityType:(id)arg0 ;
-(id)initWithRouter:(id)arg0 interactor:(id)arg1 ;
-(id)interactor:(id)arg0 activityPresentationControllerForActivity:(id)arg1 ;
-(id)interactor:(id)arg0 linkMetadataForActivity:(id)arg1 ;
-(id)requestRefreshedCustomizationGroups;
-(id)session;
-(void)_activityViewControllerPresentationDidBegin:(id)arg0 ;
-(void)_completeInitialConfigurationUpdate;
-(void)_didCompleteActivityWithResult:(id)arg0 ;
-(void)_didCompleteCollaborationSharingURLCreationWithResult:(id)arg0 ;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_dismiss;
-(void)_expandSharingContentView;
-(void)_finishAirdropActivityPerformer:(id)arg0 withSuccess:(BOOL)arg1 ;
-(void)_registerForApplicationStateChangeNotification;
-(void)_showScreenTimeRestrictedAlert;
-(void)_startSessionIfNeeded;
-(void)_unregisterForApplicationStateChangeNotification;
-(void)_updateConfigurationAsynchronously:(BOOL)arg0 ;
-(void)_updateContentView:(id)arg0 ;
-(void)_willEnterForeground:(id)arg0 ;
-(void)activityViewController:(id)arg0 traitCollectionDidChange:(id)arg1 ;
-(void)activityViewControllerDidAppear:(id)arg0 ;
-(void)activityViewControllerDidDisappear:(id)arg0 ;
-(void)activityViewControllerDidResignContentViewControllerOfPopover:(id)arg0 ;
-(void)activityViewControllerSizeWillChange:(id)arg0 ;
-(void)activityViewControllerWillAppear:(id)arg0 ;
-(void)activityViewControllerWillBeEmbedded:(id)arg0 ;
-(void)activityViewControllerWillBePresented:(id)arg0 ;
-(void)activityViewControllerWillDisappear:(id)arg0 ;
-(void)addParticipantsViewController:(id)arg0 completedSharingWithShareURL:(id)arg1 ckShare:(id)arg2 ;
-(void)addParticipantsViewController:(id)arg0 failedToSaveShareWithError:(id)arg1 ;
-(void)airDropViewController:(id)arg0 didFinishTransferWithSuccess:(BOOL)arg1 ;
-(void)airDropViewController:(id)arg0 requestSharedItemsWithDataRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)airDropViewControllerDidDismiss:(id)arg0 ;
-(void)airDropViewControllerDidStartTransfer:(id)arg0 ;
-(void)airDropViewServiceWillStartTransfer:(id)arg0 toRecipient:(id)arg1 ;
-(void)didLongPressShareActivityWithIdentifier:(id)arg0 ;
-(void)didSelectCollaborativeAction;
-(void)didSelectSendCopyAction;
-(void)dismiss;
-(void)handleActionsEdit;
-(void)handleActivity:(id)arg0 ;
-(void)handleClose;
-(void)handleCollaborationOptions;
-(void)handleCustomHeaderButton;
-(void)handleInfoSuggestionPress:(id)arg0 ;
-(void)handleNext;
-(void)handleOptions;
-(void)handlePeopleSuggestion:(id)arg0 ;
-(void)interactor:(id)arg0 airDropViewServiceWillStartTransferToRecipient:(id)arg1 ;
-(void)interactor:(id)arg0 canManageShareForDocumentInSharedFolderWithCompletionHandler:(id)arg1 ;
-(void)interactor:(id)arg0 canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id)arg1 ;
-(void)interactor:(id)arg0 createSharingURLWithParticipantsForCollaborationRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)interactor:(id)arg0 creatingCollaborationForActivity:(id)arg1 ;
-(void)interactor:(id)arg0 didCancelCollaborationForActivity:(id)arg1 ;
-(void)interactor:(id)arg0 didCreateCollaborationForActivity:(id)arg1 ;
-(void)interactor:(id)arg0 didFailCreatingCollaborationForActivity:(id)arg1 error:(id)arg2 ;
-(void)interactor:(id)arg0 didPerformActivityWithResult:(id)arg1 ;
-(void)interactor:(id)arg0 didPerformAirdropViewActivityWithNoContentView:(BOOL)arg1 ;
-(void)interactor:(id)arg0 didPerformUserDefaultsActivityWithContext:(id)arg1 ;
-(void)interactor:(id)arg0 didUpdateAirDropTransferWithChange:(id)arg1 ;
-(void)interactor:(id)arg0 willPerformActivity:(id)arg1 ;
-(void)interactorDidFailPerformActivityNotCollaborationEligible:(id)arg0 ;
-(void)interactorDidUpdateCollaborationDetails:(id)arg0 ;
-(void)interactorDidUpdateHeaderMetadata:(id)arg0 ;
-(void)interactorDidUpdateObjectManipulationSupport:(id)arg0 ;
-(void)interactorDidUpdateSessionConfiguration:(id)arg0 ;
-(void)performActionActivityProxy:(id)arg0 ;
-(void)performActivity:(id)arg0 ;
-(void)performPeopleSuggestionProxy:(id)arg0 ;
-(void)performShareActivityProxy:(id)arg0 ;
-(void)preheatExtensionDiscovery;
-(void)prepareViewIfNeeded;
-(void)present;
-(void)reloadActivity:(id)arg0 ;
-(void)removePeopleSuggestionProxy:(id)arg0 ;
-(void)updateCustomView;
-(void)updateWithContext:(id)arg0 ;
-(void)userDefaultsViewController:(id)arg0 didFavoriteActivity:(BOOL)arg1 withIdentifier:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)userDefaultsViewController:(id)arg0 didSelectActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 disabled:(BOOL)arg3 ;
-(void)userDefaultsViewController:(id)arg0 didToggleActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)userDefaultsViewController:(id)arg0 didUpdateFavoritesProxies:(id)arg1 activityCategory:(NSInteger)arg2 ;


@end


#endif