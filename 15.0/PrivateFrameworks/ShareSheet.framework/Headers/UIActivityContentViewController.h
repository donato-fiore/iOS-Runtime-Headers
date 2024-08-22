// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACTIVITYCONTENTVIEWCONTROLLER_H
#define UIACTIVITYCONTENTVIEWCONTROLLER_H

@class UIViewController, NSArray, NSMutableDictionary, NSDictionary, NSUUID, UIVisualEffectView, UIBarButtonItem, NSDiffableDataSourceSnapshot, NSNumber, UICollectionViewDiffableDataSource, NSString, LPLinkView, LPLinkMetadata, SFAirDropMagicHeadViewController, NSMutableSet;
@protocol UICollectionViewDelegate, LPLinkViewDelegate, SHSheetContentViewInterface, UIActivityContentDelegate, SHSheetContentPresenterInterface;


#import "_UIActivityContentCollectionView.h"
#import "_UIActivityContentTitleView.h"

@interface UIActivityContentViewController : UIViewController <UICollectionViewDelegate, LPLinkViewDelegate, SHSheetContentViewInterface>

 {
    BOOL _didLayout;
}


@property (retain, nonatomic) NSArray *actionProxies; // ivar: _actionProxies
@property (retain, nonatomic) NSMutableDictionary *actionSlots; // ivar: _actionSlots
@property (retain, nonatomic) NSDictionary *activitiesByUUID; // ivar: _activitiesByUUID
@property (retain, nonatomic) _UIActivityContentCollectionView *activityCollectionView; // ivar: _activityCollectionView
@property (retain, nonatomic) NSArray *airDropSlots; // ivar: _airDropSlots
@property (retain, nonatomic) NSUUID *airDropUUID; // ivar: _airDropUUID
@property (retain, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIBarButtonItem *closeButton; // ivar: _closeButton
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (nonatomic) BOOL contentInstalled; // ivar: _contentInstalled
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // ivar: _currentSnapshot
@property (nonatomic) CGFloat customViewControllerVerticalInset;
@property (retain, nonatomic) NSNumber *customViewControllerVerticalInsetWrapper; // ivar: _customViewControllerVerticalInsetWrapper
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIActivityContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
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
@property (retain, nonatomic) SFAirDropMagicHeadViewController *magicHeadViewController; // ivar: _magicHeadViewController
@property (retain, nonatomic) NSNumber *nearbyCountSlotID; // ivar: _nearbyCountSlotID
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (copy, nonatomic) id *pendingUpdate; // ivar: _pendingUpdate
@property (retain, nonatomic) NSMutableDictionary *peopleSlots; // ivar: _peopleSlots
@property (retain, nonatomic) NSUUID *photosCarouselUUID; // ivar: _photosCarouselUUID
@property (retain, nonatomic) UIViewController *photosCarouselViewController; // ivar: _photosCarouselViewController
@property (nonatomic) BOOL photosLandscapeMode; // ivar: _photosLandscapeMode
@property (weak, nonatomic) NSObject<SHSheetContentPresenterInterface> *presenter; // ivar: _presenter
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (retain, nonatomic) NSArray *shareProxies; // ivar: _shareProxies
@property (retain, nonatomic) NSMutableDictionary *shareSlots; // ivar: _shareSlots
@property (nonatomic) BOOL sharingExpanded; // ivar: _sharingExpanded
@property (nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (retain, nonatomic) NSMutableSet *suggestLessIdentifiers; // ivar: _suggestLessIdentifiers
@property (readonly) Class superclass;
@property (nonatomic) NSDirectionalEdgeInsets topContentSectionHeaderInsets; // ivar: _topContentSectionHeaderInsets
@property (copy, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (nonatomic) BOOL wantsObjectManipulation; // ivar: _wantsObjectManipulation


-(BOOL)_presentedInFormSheet;
-(BOOL)_shouldUseNarrowLayoutForHeroActionsWithContainerWidth:(CGFloat)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)_activityImageSymbolConfiguration;
-(id)_activityTitleForHeroAction:(id)arg0 ;
-(id)_activityWithActivityUUID:(id)arg0 ;
-(id)_contextMenuPreviewForCollectionView:(id)arg0 collectionViewCell:(id)arg1 ;
-(id)_createLinkView;
-(id)_customSectionIdentifiersForActionProxies:(id)arg0 ;
-(id)_provideCellForCollectionView:(id)arg0 indexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)_provideLayoutForSection:(NSInteger)arg0 environment:(id)arg1 ;
-(id)_provideSupplementaryViewForCollectionView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(id)_uniqueIdentifierForSectionIdentifier:(id)arg0 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(void)_editActionsTapped;
-(void)_updatePhotosCarouselViewContent;
-(void)_updateWantsObjectManipulation;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)configureCollectionViewIfNeeded;
-(void)configureHeaderViewIfNeeded;
-(void)configureMagicHeadCell:(id)arg0 withProxy:(id)arg1 ;
-(void)layoutContentCollectionView:(BOOL)arg0 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)overrideLayoutConfigurationWithSafeAreaInsets:(BOOL)arg0 ;
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