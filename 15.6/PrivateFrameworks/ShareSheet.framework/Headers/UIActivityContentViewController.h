// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACTIVITYCONTENTVIEWCONTROLLER_H
#define UIACTIVITYCONTENTVIEWCONTROLLER_H

@class UIViewController, NSArray, UIVisualEffectView, UIBarButtonItem, NSDiffableDataSourceSnapshot, NSString, UICollectionViewDiffableDataSource, LPLinkView, LPLinkMetadata, NSMutableDictionary, SFAirDropMagicHeadViewController, SFUIPeopleSuggestionImageFetcher;
@protocol UICollectionViewDelegate, LPLinkViewDelegate, SHSheetContentLayoutDelegate, SHSheetContentDataSourceManagerDelegate, UICollectionViewDataSourcePrefetching, SHSheetContentViewInterface, UIActivityContentDelegate, SHSheetContentPresenterInterface;


#import "_UIActivityContentCollectionView.h"
#import "_UIActivityCollectionViewCompositionalLayout.h"
#import "SHSheetContentDataSource.h"
#import "SHSheetContentDataSourceManager.h"
#import "_UIActivityContentTitleView.h"
#import "SHSheetContentLayoutProvider.h"
#import "SHSheetContentLayoutSpec.h"

@interface UIActivityContentViewController : UIViewController <UICollectionViewDelegate, LPLinkViewDelegate, SHSheetContentLayoutDelegate, SHSheetContentDataSourceManagerDelegate, UICollectionViewDataSourcePrefetching, SHSheetContentViewInterface>

 {
    BOOL _didLayout;
}


@property (retain, nonatomic) _UIActivityContentCollectionView *activityCollectionView; // ivar: _activityCollectionView
@property (readonly, nonatomic) _UIActivityCollectionViewCompositionalLayout *activityCollectionViewLayout; // ivar: _activityCollectionViewLayout
@property (retain, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIBarButtonItem *closeButton; // ivar: _closeButton
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (nonatomic) NSInteger currentSectionTypesToExclude; // ivar: _currentSectionTypesToExclude
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (nonatomic) CGFloat customViewControllerVerticalInset;
@property (readonly, nonatomic) SHSheetContentDataSource *dataSource;
@property (retain, nonatomic) SHSheetContentDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIActivityContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkView *headerLinkView; // ivar: _headerLinkView
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;
@property (retain, nonatomic) NSMutableDictionary *headerMetadataObservers; // ivar: _headerMetadataObservers
@property (retain, nonatomic) _UIActivityContentTitleView *headerTitleView; // ivar: _headerTitleView
@property (copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (nonatomic) BOOL hideHeaderView; // ivar: _hideHeaderView
@property (retain, nonatomic) NSMutableDictionary *identifierToProgress; // ivar: _identifierToProgress
@property (retain, nonatomic) NSMutableDictionary *identifierToPulse; // ivar: _identifierToPulse
@property (retain, nonatomic) NSMutableDictionary *identifierToSubtitle; // ivar: _identifierToSubtitle
@property (nonatomic) BOOL ignorePersonTap; // ivar: _ignorePersonTap
@property (readonly, nonatomic) SHSheetContentLayoutProvider *layoutProvider; // ivar: _layoutProvider
@property (readonly, nonatomic) SHSheetContentLayoutSpec *layoutSpec; // ivar: _layoutSpec
@property (retain, nonatomic) SFAirDropMagicHeadViewController *magicHeadViewController; // ivar: _magicHeadViewController
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (copy, nonatomic) id *pendingUpdate; // ivar: _pendingUpdate
@property (readonly, nonatomic) SFUIPeopleSuggestionImageFetcher *peopleSuggestionImageFetcher; // ivar: _peopleSuggestionImageFetcher
@property (retain, nonatomic) UIViewController *photosCarouselViewController; // ivar: _photosCarouselViewController
@property (nonatomic) BOOL photosLandscapeMode; // ivar: _photosLandscapeMode
@property (weak, nonatomic) NSObject<SHSheetContentPresenterInterface> *presenter; // ivar: _presenter
@property (nonatomic) BOOL sharingExpanded; // ivar: _sharingExpanded
@property (nonatomic) BOOL shouldShowCustomButton; // ivar: _shouldShowCustomButton
@property (nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (nonatomic) BOOL wantsObjectManipulation; // ivar: _wantsObjectManipulation


-(BOOL)_presentedInFormSheet;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)_activityTitleForHeroActionActivity:(id)arg0 ;
-(id)_contextMenuPreviewForCollectionView:(id)arg0 collectionViewCell:(id)arg1 ;
-(id)_createLinkView;
-(id)_provideCellForCollectionView:(id)arg0 indexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)_provideLayoutForSection:(NSInteger)arg0 environment:(id)arg1 ;
-(id)_provideSupplementaryViewForCollectionView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(id)titleForItemIdentifier:(id)arg0 ;
-(void)_configureActionCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_configureCollectionViewIfNeeded;
-(void)_configureHeaderViewIfNeeded;
-(void)_configureHeroActionCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_configureMagicHeadCell:(id)arg0 withProxy:(id)arg1 ;
-(void)_configurePeopleSuggestionCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_configureSharingAppCell:(id)arg0 itemIdentifier:(id)arg1 ;
-(void)_editActionsTapped;
-(void)_updateHeaderLinkView;
-(void)_updatePhotosCarouselViewContent;
-(void)collectionView:(id)arg0 cancelPrefetchingForItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dataSourceManager:(id)arg0 didPublishDataSourceWithChangeDetails:(id)arg1 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)refreshContent;
-(void)reloadActivity:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentWithPeopleProxies:(id)arg0 shareProxies:(id)arg1 actionProxies:(id)arg2 activitiesByUUID:(id)arg3 nearbyCountSlotID:(id)arg4 animated:(BOOL)arg5 reloadData:(BOOL)arg6 ;
-(void)updateHeaderMetadata;
-(void)updateHeaderSize;
-(void)updateProgress:(CGFloat)arg0 withTopText:(id)arg1 bottomText:(id)arg2 forNodeWithIdentifier:(id)arg3 shouldPulse:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)updateWithViewModel:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif