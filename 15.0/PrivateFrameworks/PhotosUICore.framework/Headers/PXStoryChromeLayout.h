// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCHROMELAYOUT_H
#define PXSTORYCHROMELAYOUT_H

@class NSNumber, NSIndexSet, NSString, NSMutableDictionary, NSDateFormatter, NSAttributedString;
@protocol PXGViewSource, PXGStringSource, PXGNamedImageSource, PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver, PXStoryMenuDelegate, PXDisplayAsset, OS_dispatch_queue, PXStorySongResource, PXStoryViewLayoutSpec;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXInfoUpdater.h"
#import "PXStoryModel.h"
#import "PXStoryRecipeManager.h"
#import "PXStoryViewModel.h"

@interface PXStoryChromeLayout : PXGAbsoluteCompositeLayout <PXGViewSource, PXGStringSource, PXGNamedImageSource, PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver, PXStoryMenuDelegate>

 {
    ? _updateFlags;
    unsigned int _playButtonSpriteIndex;
    unsigned int _replayButtonSpriteIndex;
    unsigned int _errorIndicatorSpriteIndex;
    unsigned int _actionMenuButtonSpriteIndex;
    unsigned int _shareButtonSpriteIndex;
    unsigned int _closeButtonSpriteIndex;
    unsigned int _closeBrowserButtonSpriteIndex;
    unsigned int _browserGridButtonSpriteIndex;
    unsigned int _fullsizePlayerButtonSpriteIndex;
    unsigned int _styleSwitcherButtonSpriteIndex;
    unsigned int _playbackEndReplayButtonSpriteIndex;
    unsigned int _playbackEndShareButtonSpriteIndex;
    unsigned int _playbackEndFavoriteButtonSpriteIndex;
    unsigned int _playbackEndUnfavoriteButtonSpriteIndex;
    unsigned int _titleSpriteIndex;
    unsigned int _subtitleSpriteIndex;
    unsigned int _leftEdgeHighlightSpriteIndex;
    unsigned int _rightEdgeHighlightSpriteIndex;
    unsigned int _aspectModeButtonIndex;
    unsigned int _bufferingIndicatorSpriteIndex;
    NSInteger _styleChromeSublayoutIndex;
    unsigned short _contentVersion;
    unsigned short _actionMenuButtonVersion;
    unsigned short _titleContentVersion;
    BOOL _shouldInvalidateActionMenuOnClose;
}


@property (retain, nonatomic) NSNumber *alphaOverride; // ivar: _alphaOverride
@property (readonly, nonatomic) NSIndexSet *axSpriteIndexes; // ivar: _axSpriteIndexes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *itemControllers; // ivar: _itemControllers
@property (retain, nonatomic) NSObject<PXDisplayAsset> *mainAsset; // ivar: _mainAsset
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mainAssetInfoUpdateQueue; // ivar: _mainAssetInfoUpdateQueue
@property (readonly, nonatomic) NSDateFormatter *mainAssetInfoUpdateQueue_titleDateFormatter; // ivar: _mainAssetInfoUpdateQueue_titleDateFormatter
@property (readonly, nonatomic) PXInfoUpdater *mainAssetInfoUpdater; // ivar: _mainAssetInfoUpdater
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (nonatomic) BOOL showSongInTitleWhenPaused; // ivar: _showSongInTitleWhenPaused
@property (retain, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource
@property (retain, nonatomic) NSAttributedString *subtitleAttributedString; // ivar: _subtitleAttributedString
@property (readonly) Class superclass;
@property (retain, nonatomic) NSAttributedString *titleAttributedString; // ivar: _titleAttributedString
@property (readonly, nonatomic) NSObject<PXStoryViewLayoutSpec> *viewLayoutSpec;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)axCanFocusOnSpriteAtIndex:(unsigned int)arg0 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)_actionButtonMenu;
-(id)_actionPerformer;
-(id)_buttonConfigurationForSpriteIndex:(unsigned int)arg0 ;
-(id)_configurationForButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 backgroundStyle:(NSInteger)arg2 axLabelKey:(id)arg3 ;
-(id)_configurationForButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 label:(id)arg2 axLabelKey:(id)arg3 ;
-(id)_configurationForCloseButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 axLabelKey:(id)arg2 ;
-(id)_configurationForShareButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 backgroundStyle:(NSInteger)arg2 axLabelKey:(id)arg3 ;
-(id)_mainAssetInfoUpdateQueue_infoForAsset:(id)arg0 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)mainLayoutSpec;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)_addButtonForChromeItem:(NSUInteger)arg0 ;
-(unsigned int)_addEdgeHighlightForChromeItem:(NSUInteger)arg0 ;
-(unsigned int)_addLabelForChromeItem:(NSUInteger)arg0 ;
-(unsigned int)_addSpriteForChromeItemController:(id)arg0 mediaKind:(int)arg1 presentationType:(int)arg2 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_actionMenuChangedVisibilityStateToOpen:(BOOL)arg0 ;
-(void)_addDurationSectionToMenuBuilder:(id)arg0 ;
-(void)_handleAspectModeButton:(id)arg0 ;
-(void)_handleAutoEditButton:(id)arg0 ;
-(void)_handleCloseBrowserButton:(id)arg0 ;
-(void)_handleCloseButton:(id)arg0 ;
-(void)_handleEditColorGradeButton:(id)arg0 ;
-(void)_handleEditMusicButton:(id)arg0 ;
-(void)_handleErrorIndicator:(id)arg0 ;
-(void)_handleFavoriteButton:(id)arg0 ;
-(void)_handlePlayButton:(id)arg0 ;
-(void)_handleReplayButton:(id)arg0 ;
-(void)_handleShareButton:(id)arg0 ;
-(void)_handleToggleViewModeButton:(id)arg0 ;
-(void)_invalidateActionMenu;
-(void)_invalidateContent;
-(void)_invalidateContentAlpha;
-(void)_invalidateContentLayout;
-(void)_invalidateMainAsset;
-(void)_invalidateMainModel;
-(void)_invalidateSong;
-(void)_invalidateTitle;
-(void)_updateContentAlpha;
-(void)_updateContentLayout;
-(void)_updateMainAsset;
-(void)_updateMainModel;
-(void)_updateSong;
-(void)_updateTitle;
-(void)alphaDidChange;
-(void)didUpdate;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)menuDidClose:(id)arg0 ;
-(void)menuWillOpen:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;
-(void)willUpdate;


@end


#endif