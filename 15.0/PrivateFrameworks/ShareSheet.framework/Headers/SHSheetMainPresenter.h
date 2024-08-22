// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSHEETMAINPRESENTER_H
#define SHSHEETMAINPRESENTER_H

@class SFAirDropViewController, NSString, UIViewController, UIViewController<SHSheetContentViewInterface>, NSArray;
@protocol SHSheetMainInteractorDelegate, _UIActivityUserDefaultsViewControllerDelegate, SFAirDropViewControllerDelegate, ObjectManipulationDelegate, SHSheetMainPresenterInterface, SHSheetMainPresenterDelegate, SHSheetMainInteractorInterface;

#import <Foundation/Foundation.h>

#import "SHSheetActivityPerformerResult.h"
#import "UIActivity.h"
#import "SHSheetMainRouter.h"
#import "_UIActivityUserDefaultsViewController.h"

@interface SHSheetMainPresenter : NSObject <SHSheetMainInteractorDelegate, _UIActivityUserDefaultsViewControllerDelegate, SFAirDropViewControllerDelegate, ObjectManipulationDelegate, SHSheetMainPresenterInterface>



@property (retain, nonatomic) SHSheetActivityPerformerResult *activityResult; // ivar: _activityResult
@property (nonatomic) BOOL activityViewControllerIsEmbedded; // ivar: _activityViewControllerIsEmbedded
@property (nonatomic) BOOL activityViewControllerIsPresenting; // ivar: _activityViewControllerIsPresenting
@property (nonatomic) BOOL activityViewControllerPresentationDidBegin; // ivar: _activityViewControllerPresentationDidBegin
@property (weak, nonatomic) SFAirDropViewController *airdropViewController; // ivar: _airdropViewController
@property (readonly, nonatomic) UIActivity *currentActivity;
@property (readonly, nonatomic) NSString *customOptionsTitle;
@property (retain, nonatomic) UIViewController *customViewController;
@property (nonatomic) CGFloat customViewControllerVerticalInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetMainPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRequestDismissal; // ivar: _didRequestDismissal
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SHSheetMainInteractorInterface> *interactor; // ivar: _interactor
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (nonatomic) BOOL isReportingActivityResult; // ivar: _isReportingActivityResult
@property (weak, nonatomic) UIViewController<SHSheetContentViewInterface> *mainViewController; // ivar: _mainViewController
@property (weak, nonatomic) UIViewController *optionsViewController; // ivar: _optionsViewController
@property (readonly, nonatomic) SHSheetMainRouter *router; // ivar: _router
@property (weak, nonatomic) UIViewController<SHSheetContentViewInterface> *secondaryViewController; // ivar: _secondaryViewController
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers; // ivar: _selectedAssetIdentifiers
@property (readonly) Class superclass;
@property (weak, nonatomic) _UIActivityUserDefaultsViewController *userDefaultsViewController; // ivar: _userDefaultsViewController


-(id)_titleForActivity:(id)arg0 ;
-(id)initWithRouter:(id)arg0 interactor:(id)arg1 ;
-(id)mainInteractor:(id)arg0 activityPresentationControllerForActivity:(id)arg1 ;
-(id)mainInteractor:(id)arg0 linkMetadataForActivity:(id)arg1 ;
-(id)requestMetadataValues;
-(id)requestRefreshedCustomizationGroups;
-(id)urlRequestsForLinkPresentation;
-(void)_activityViewControllerPresentationDidBegin:(id)arg0 ;
-(void)_completeInitialConfigurationUpdate;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_dismiss;
-(void)_editActionsTapped;
-(void)_finishAirdropActivityPerformer:(id)arg0 withSuccess:(BOOL)arg1 ;
-(void)_registerForApplicationStateChangeNotification;
-(void)_startSessionIfNeeded;
-(void)_unregisterForApplicationStateChangeNotification;
-(void)_updateConfigurationAsynchronously:(BOOL)arg0 ;
-(void)_updateContentView:(id)arg0 ;
-(void)_willEnterForeground:(id)arg0 ;
-(void)activityContentViewControllerDidExpand:(id)arg0 ;
-(void)activityViewController:(id)arg0 traitCollectionDidChange:(id)arg1 ;
-(void)activityViewControllerDidAppear:(id)arg0 ;
-(void)activityViewControllerDidDisappear:(id)arg0 ;
-(void)activityViewControllerDidResignContentViewControllerOfPopover:(id)arg0 ;
-(void)activityViewControllerSizeWillChange:(id)arg0 ;
-(void)activityViewControllerWillAppear:(id)arg0 ;
-(void)activityViewControllerWillBeEmbedded:(id)arg0 ;
-(void)activityViewControllerWillBePresented:(id)arg0 ;
-(void)activityViewControllerWillDisappear:(id)arg0 ;
-(void)airDropViewController:(id)arg0 didFinishTransferWithSuccess:(BOOL)arg1 ;
-(void)airDropViewController:(id)arg0 requestSharedItemsWithDataRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)airDropViewControllerDidDismiss:(id)arg0 ;
-(void)airDropViewControllerDidStartTransfer:(id)arg0 ;
-(void)closeButtonTapped;
-(void)didLongPressShareActivityWithIdentifier:(id)arg0 ;
-(void)dismiss;
-(void)handleActivity:(id)arg0 ;
-(void)handleClose;
-(void)handleOptions;
-(void)handlePeopleSuggestion:(id)arg0 ;
-(void)mainInteractor:(id)arg0 didPerformActivityWithResult:(id)arg1 ;
-(void)mainInteractor:(id)arg0 didPerformAirdropViewActivityWithNoContentView:(BOOL)arg1 ;
-(void)mainInteractor:(id)arg0 didPerformUserDefaultsActivityWithContext:(id)arg1 ;
-(void)mainInteractor:(id)arg0 didUpdateAirdropTransferWithContext:(id)arg1 ;
-(void)mainInteractor:(id)arg0 willPerformActivity:(id)arg1 ;
-(void)mainInteractorDidUpdateObjectManipulationSupport:(id)arg0 ;
-(void)mainInteractorDidUpdateSessionConfiguration:(id)arg0 ;
-(void)nextButtonTappedWithPeopleProxies:(id)arg0 shareProxies:(id)arg1 actionProxies:(id)arg2 nearbyCountSlotID:(id)arg3 ;
-(void)optionsButtonTapped;
-(void)performActivity:(id)arg0 ;
-(void)preheatExtensionDiscovery;
-(void)prepareViewIfNeeded;
-(void)present;
-(void)reloadActivity:(id)arg0 ;
-(void)removedPersonWithIdentifier:(id)arg0 ;
-(void)selectedActionWithIdentifier:(id)arg0 ;
-(void)selectedAppWithIdentifier:(id)arg0 ;
-(void)selectedPersonWithIdentifier:(id)arg0 ;
-(void)showScreenTimeRestrictedAlert;
-(void)updateWithContext:(id)arg0 ;
-(void)userDefaultsViewController:(id)arg0 didFavoriteActivity:(BOOL)arg1 withIdentifier:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)userDefaultsViewController:(id)arg0 didSelectActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 disabled:(BOOL)arg3 ;
-(void)userDefaultsViewController:(id)arg0 didToggleActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)userDefaultsViewController:(id)arg0 didUpdateFavoritesProxies:(id)arg1 activityCategory:(NSInteger)arg2 ;


@end


#endif