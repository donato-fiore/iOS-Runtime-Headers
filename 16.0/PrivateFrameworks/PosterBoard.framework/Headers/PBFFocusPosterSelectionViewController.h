// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFFOCUSPOSTERSELECTIONVIEWCONTROLLER_H
#define PBFFOCUSPOSTERSELECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSUUID, NSString, UIColor, UICollectionViewDiffableDataSource, NSAttributedString, PRSwitcherConfiguration, NSArray, NSDictionary, NSMapTable, NSMutableArray;
@protocol PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, PBFPosterEditingIngestionManagerDelegate, PBFPosterRackCollectionViewControllerDelegate, BSInvalidatable, PBFFocusPosterSelectionViewControllerDelegate;


#import "PBFPosterGalleryDataProvider.h"
#import "PBFFocusPosterSuggestionData.h"
#import "PBFPosterExtensionDataStore.h"

@interface PBFFocusPosterSelectionViewController : UICollectionViewController <PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, PBFPosterEditingIngestionManagerDelegate, PBFPosterRackCollectionViewControllerDelegate>

 {
    NSUUID *_activityUUID;
    NSString *_activityIdentifier;
    NSString *_activitySymbolImageName;
    UIColor *_activitySymbolColor;
    PBFPosterGalleryDataProvider *_galleryDataProvider;
    UICollectionViewDiffableDataSource *_dataSource;
    id<BSInvalidatable> *_editingSessionInProgressAssertion;
    BOOL _receivedSuggestionsResponse;
    PBFFocusPosterSuggestionData *_suggestionData;
    NSAttributedString *_createLockScreensFromSuggestionsHeaderDescription;
    NSAttributedString *_createLockScreensHeaderDescription;
    PBFPosterExtensionDataStore *_dataStore;
    PRSwitcherConfiguration *_switcherConfiguration;
    NSArray *_configurations;
    NSDictionary *_uuidsToConfigurations;
    NSMapTable *_configurationsToMetadata;
    NSMutableArray *_nonFocusAssociatedConfigurations;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBFFocusPosterSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)posterRackCollectionViewControllerDidPressDone:(id)arg0 ;
-(id)_cancelBarButtonItem;
-(id)_cellForItemAtIndexPath:(id)arg0 identifier:(id)arg1 ;
-(id)_createLockScreenFromSuggestionsHeaderDescription;
-(id)_createLockScreenHeaderDescription;
-(id)_doneBarButtonItem;
-(id)_posterLimitExceededAlert;
-(id)_supplementaryViewAtIndexPath:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)compositionalLayout;
-(id)galleryViewController:(id)arg0 willUseAnimationController:(id)arg1 forDismissingEditingViewControllerWithAction:(NSInteger)arg2 ;
-(id)initWithActivityUUID:(id)arg0 activityIdentifier:(id)arg1 galleryDataProvider:(id)arg2 dataStore:(id)arg3 ;
-(id)mastheadSectionWithEnvironment:(id)arg0 ;
-(id)sectionWithEnvironment:(id)arg0 section:(id)arg1 ;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(void)_applySnapshotForCurrentStateWithAnimation:(BOOL)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_commitCheckedStates;
-(void)_done:(id)arg0 ;
-(void)_logEditWithPosterUUID:(id)arg0 lastModifiedDate:(id)arg1 ;
-(void)_populateActivityMetadata;
-(void)_reloadDataWithAnimation:(BOOL)arg0 ;
-(void)_showEditingForPoster:(id)arg0 fromFocusPosterCell:(id)arg1 ;
-(void)_showGallery;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)editingIngestionManager:(id)arg0 didAccept:(id)arg1 userChoice:(NSInteger)arg2 ;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)editingSceneViewControllerDidFinalize:(id)arg0 ;
-(void)galleryViewController:(id)arg0 didSelectPreview:(id)arg1 fromPreviewView:(id)arg2 ;
-(void)galleryViewController:(id)arg0 willDisplayPreview:(id)arg1 ;
-(void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg0 ;
-(void)posterRackCollectionViewControllerDidPressCancel:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif