// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACTIVITYVIEWCONTROLLER_H
#define UIACTIVITYVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, NSDictionary, NSSet, LPLinkMetadata, NSUserDefaults;
@protocol SHSheetMainPresenterDelegate, UIActivityViewControllerAirDropDelegate, SHSheetMainPresenterInterface, UIActivityViewControllerObjectManipulationDelegate, UIActivityViewControllerPhotosDelegate;


#import "UIActivity.h"

@interface UIActivityViewController : UIViewController <SHSheetMainPresenterDelegate>



@property (retain, nonatomic) UIActivity *activity; // ivar: _activity
@property (copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (copy, nonatomic, getter=_activityPresentationCompletionHandler, setter=_setActivityPresentationCompletionHandler:) id *activityPresentationCompletionHandler; // ivar: _activityPresentationCompletionHandler
@property (copy, nonatomic) NSArray *activityTypeOrder; // ivar: _activityTypeOrder
@property (retain, nonatomic) UIViewController *activityViewController; // ivar: _activityViewController
@property (weak, nonatomic) NSObject<UIActivityViewControllerAirDropDelegate> *airDropDelegate; // ivar: _airDropDelegate
@property (nonatomic) BOOL allowsCustomPresentationStyle; // ivar: _allowsCustomPresentationStyle
@property (nonatomic) BOOL allowsEmbedding; // ivar: _allowsEmbedding
@property (nonatomic) BOOL allowsProminentActivity; // ivar: _allowsProminentActivity
@property (copy, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (nonatomic) NSUInteger clientAttemptedInitialPresentationOrEmbeddingTimestamp; // ivar: _clientAttemptedInitialPresentationOrEmbeddingTimestamp
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *completionWithItemsHandler; // ivar: _completionWithItemsHandler
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (nonatomic) NSUInteger creationTimestamp; // ivar: _creationTimestamp
@property (retain, nonatomic) UIViewController *customViewController;
@property (nonatomic) CGFloat customViewControllerVerticalInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableNewDesignInPhotos; // ivar: _enableNewDesignInPhotos
@property (nonatomic) NSInteger excludedActivityCategories; // ivar: _excludedActivityCategories
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (nonatomic) BOOL hideHeaderView; // ivar: _hideHeaderView
@property (copy, nonatomic) NSArray *includedActivityTypes; // ivar: _includedActivityTypes
@property (copy, nonatomic, getter=_initialPhotosAssetDetails, setter=_setInitialPhotosAssetDetails:) NSDictionary *initialPhotosAssetDetails; // ivar: _initialPhotosAssetDetails
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (readonly, nonatomic) NSObject<SHSheetMainPresenterInterface> *mainPresenter; // ivar: _mainPresenter
@property (weak, nonatomic) NSObject<UIActivityViewControllerObjectManipulationDelegate> *objectManipulationDelegate; // ivar: _objectManipulationDelegate
@property (copy, nonatomic, getter=_photosAssetIdentifiers, setter=_setPhotosAssetIdentifiers:) NSSet *photosAssetIdentifiers; // ivar: _photosAssetIdentifiers
@property (retain, nonatomic) UIViewController *photosCarouselViewController; // ivar: _photosCarouselViewController
@property (weak, nonatomic) NSObject<UIActivityViewControllerPhotosDelegate> *photosDelegate; // ivar: _photosDelegate
@property (retain, nonatomic) LPLinkMetadata *photosHeaderMetadata; // ivar: _photosHeaderMetadata
@property (retain, nonatomic) UIViewController *photosStackViewController; // ivar: _photosStackViewController
@property (copy, nonatomic) id *preCompletionHandler; // ivar: _preCompletionHandler
@property (nonatomic) NSUInteger readyToInteractTimestamp; // ivar: _readyToInteractTimestamp
@property (copy, nonatomic, getter=_selectedAssetIdentifiers, setter=_setSelectedAssetIdentifiers:) NSArray *selectedAssetIdentifiers; // ivar: _selectedAssetIdentifiers
@property (copy, nonatomic, getter=_shareSheetReadyToInteractHandler, setter=_setShareSheetReadyToInteractHandler:) id *shareSheetReadyToInteractHandler; // ivar: _shareSheetReadyToInteractHandler
@property (nonatomic) NSInteger sharingStyle; // ivar: _sharingStyle
@property (nonatomic) BOOL shouldSuggestFamilyMembers; // ivar: _shouldSuggestFamilyMembers
@property (nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (nonatomic) BOOL showKeyboardAutomatically; // ivar: _showKeyboardAutomatically
@property (nonatomic) BOOL sourceIsManaged;
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (copy, nonatomic) NSString *userDefaultsIdentifier; // ivar: _userDefaultsIdentifier
@property (nonatomic) NSUInteger viewWillAppearTimestamp; // ivar: _viewWillAppearTimestamp
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // ivar: _whitelistActionActivitiesOnly


+(BOOL)_preventsAppearanceProxyCustomization;
+(CGFloat)_asyncPresentationTimeout;
+(NSInteger)_defaultPlatformPresentationStyle;
-(BOOL)_allowsStylingSheetsAsCards;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)_shouldShowSystemActivityType:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_displayHeight;
-(id)_createContextFromCurrentState;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_titleForActivity:(id)arg0 ;
-(id)init;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 shouldSuggestFamilyMembers:(BOOL)arg2 ;
-(id)initWithActivityItemsConfiguration:(id)arg0 ;
-(id)initWithAssetIdentifiers:(id)arg0 activityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg0 userDefaultsIdentifier:(id)arg1 applicationActivities:(id)arg2 ;
-(void)__viewControllerWillBePresented:(BOOL)arg0 ;
-(void)_cancel;
-(void)_createMainPresenterIfNeeded;
-(void)_didResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_executeActivity;
-(void)_performActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 completion:(id)arg1 ;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)_presentationControllerDidDismiss:(id)arg0 ;
-(void)_primeExtensionDiscovery;
-(void)_reloadActivity:(id)arg0 ;
-(void)_updateActivityItems:(id)arg0 ;
-(void)_updateActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_updateSheetPresentationController:(id)arg0 ;
-(void)_willPerformInServiceActivityType:(id)arg0 activitySpecificMetadata:(id)arg1 ;
-(void)dealloc;
-(void)mainPresenter:(id)arg0 didCompleteActivity:(id)arg1 withSuccess:(BOOL)arg2 returnedItems:(id)arg3 error:(id)arg4 ;
-(void)mainPresenter:(id)arg0 willCompleteActivity:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)mainPresenterIsReadyToInteract:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif