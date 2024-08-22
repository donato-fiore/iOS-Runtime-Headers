// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACTIVITYCONTENTVIEWCONTROLLER_H
#define UIACTIVITYCONTENTVIEWCONTROLLER_H

@class UIViewController, SFAirDropTransferChange, NSUUID, SFUIActivityImageProvider, NSArray, UIVisualEffectView, UIBarButtonItem, SLCollaborationFooterViewModel, NSDiffableDataSourceSnapshot, NSString, UICollectionViewDiffableDataSource, LPLinkView, LPLinkMetadata, NSMutableDictionary, SFAirDropMagicHeadViewController, SFUIPeopleSuggestionImageProvider;
@protocol UICollectionViewDelegate, LPLinkViewDelegate, SHSheetContentLayoutDelegate, SHSheetContentDataSourceManagerDelegate, UICollectionViewDataSourcePrefetching, SHSheetContentView, SHSheetContentPresenter, SHSheetContentViewModel;


#import "_UIActivityContentCollectionView.h"
#import "_UIActivityCollectionViewCompositionalLayout.h"
#import "SHSheetContentDataSource.h"
#import "SHSheetContentDataSourceManager.h"
#import "_UIActivityContentTitleView.h"
#import "SHSheetContentLayoutProvider.h"
#import "SHSheetContentLayoutSpec.h"

@interface UIActivityContentViewController : UIViewController <UICollectionViewDelegate, LPLinkViewDelegate, SHSheetContentLayoutDelegate, SHSheetContentDataSourceManagerDelegate, UICollectionViewDataSourcePrefetching, SHSheetContentView>

 {
    BOOL _didLayout;
}


@property (retain, nonatomic) SFAirDropTransferChange *activeAirDropTransferChange; // ivar: _activeAirDropTransferChange
@property (retain, nonatomic) NSUUID *activeCollaborationIdentifier; // ivar: _activeCollaborationIdentifier
@property (retain, nonatomic) _UIActivityContentCollectionView *activityCollectionView; // ivar: _activityCollectionView
@property (readonly, nonatomic) _UIActivityCollectionViewCompositionalLayout *activityCollectionViewLayout; // ivar: _activityCollectionViewLayout
@property (readonly, nonatomic) SFUIActivityImageProvider *activityImageProvider; // ivar: _activityImageProvider
@property (copy, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (nonatomic) BOOL canShowShareOptions; // ivar: _canShowShareOptions
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIBarButtonItem *closeButton; // ivar: _closeButton
@property (retain, nonatomic) SLCollaborationFooterViewModel *collaborationFooterViewModel; // ivar: _collaborationFooterViewModel
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (nonatomic) NSInteger currentSectionTypesToExclude; // ivar: _currentSectionTypesToExclude
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, nonatomic) UIViewController *customViewController;
@property (readonly, nonatomic) SHSheetContentDataSource *dataSource;
@property (retain, nonatomic) SHSheetContentDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetCollaborationActionsButton; // ivar: _didSetCollaborationActionsButton
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkView *headerLinkView; // ivar: _headerLinkView
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;
@property (retain, nonatomic) NSMutableDictionary *headerMetadataObservers; // ivar: _headerMetadataObservers
@property (retain, nonatomic) _UIActivityContentTitleView *headerTitleView; // ivar: _headerTitleView
@property (copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (nonatomic) BOOL hideHeaderView; // ivar: _hideHeaderView
@property (readonly, nonatomic) NSMutableDictionary *identifiersToActivityImageRequestID; // ivar: _identifiersToActivityImageRequestID
@property (readonly, nonatomic) NSMutableDictionary *identifiersToPeopleSuggestionImageRequestIDs; // ivar: _identifiersToPeopleSuggestionImageRequestIDs
@property (nonatomic) BOOL ignorePersonTap; // ivar: _ignorePersonTap
@property (readonly, nonatomic) SHSheetContentLayoutProvider *layoutProvider; // ivar: _layoutProvider
@property (readonly, nonatomic) SHSheetContentLayoutSpec *layoutSpec; // ivar: _layoutSpec
@property (retain, nonatomic) SFAirDropMagicHeadViewController *magicHeadViewController; // ivar: _magicHeadViewController
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (copy, nonatomic) id *pendingUpdate; // ivar: _pendingUpdate
@property (readonly, nonatomic) SFUIPeopleSuggestionImageProvider *peopleSuggestionImageProvider; // ivar: _peopleSuggestionImageProvider
@property (nonatomic) BOOL photosLandscapeMode; // ivar: _photosLandscapeMode
@property (weak, nonatomic) NSObject<SHSheetContentPresenter> *presenter; // ivar: _presenter
@property (nonatomic) BOOL sharingExpanded; // ivar: _sharingExpanded
@property (nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (retain, nonatomic) NSObject<SHSheetContentViewModel> *viewModel; // ivar: _viewModel


-(BOOL)_canShowOptions;
-(BOOL)_presentedInFormSheet;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)_activityTitleForHeroActionActivity:(id)arg0 ;
-(id)_contextMenuPreviewForCollectionView:(id)arg0 collectionViewCell:(id)arg1 ;
-(id)_createLinkView;
-(id)_footerTextForInformationalSectionIdentifier:(id)arg0 ;
-(id)_provideCellForCollectionView:(id)arg0 indexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)_provideLayoutForSection:(NSInteger)arg0 environment:(id)arg1 ;
-(id)_provideSupplementaryViewForCollectionView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(id)titleForItemIdentifier:(id)arg0 ;
-(void)_configureActionCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_configureAirDropCell:(id)arg0 withChange:(id)arg1 ;
-(void)_configureCollectionViewIfNeeded;
-(void)_configureHeaderViewIfNeeded;
-(void)_configureHeroActionCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_configureMagicHeadCell:(id)arg0 withProxy:(id)arg1 ;
-(void)_configurePeopleCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_configureSharingAppCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_metadataDidChange:(id)arg0 ;
-(void)_stopCreatingCollaborationForActivity:(id)arg0 ;
-(void)_updateContentWithPeopleProxies:(id)arg0 shareProxies:(id)arg1 actionProxies:(id)arg2 activitiesByUUID:(id)arg3 nearbyCountSlotID:(id)arg4 animated:(BOOL)arg5 reloadData:(BOOL)arg6 ;
-(void)_updateCustomViewContent;
-(void)_updateHeaderLinkViewAction;
-(void)_updateHeaderLinkViewSizeClass;
-(void)_updateHeaderMetadataValues;
-(void)_updateHeaderSize;
-(void)collectionView:(id)arg0 cancelPrefetchingForItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)creatingCollaborationForActivity:(id)arg0 ;
-(void)dataSourceManager:(id)arg0 didPublishDataSourceWithChangeDetails:(id)arg1 ;
-(void)didCancelCollaborationCreationForActivity:(id)arg0 ;
-(void)didCreateCollaborationForActivity:(id)arg0 ;
-(void)didUpdateAirDropTransferWithChange:(id)arg0 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)reloadActivity:(id)arg0 ;
-(void)reloadContent;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithViewModel:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif