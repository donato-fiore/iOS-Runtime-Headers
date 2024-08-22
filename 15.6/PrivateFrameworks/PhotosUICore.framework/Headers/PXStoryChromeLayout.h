// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCHROMELAYOUT_H
#define PXSTORYCHROMELAYOUT_H

@class NSIndexSet, NSNumber, NSString, NSMutableDictionary;
@protocol PXGViewSource, PXGStringSource, PXGNamedImageSource, PXChangeObserver, PXStoryMenuDelegate, PXStoryViewLayoutSpec;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXStoryRelatedLayoutGenerator.h"
#import "PXStoryModel.h"
#import "PXStoryRecipeManager.h"
#import "PXStoryViewModel.h"

@interface PXStoryChromeLayout : PXGAbsoluteCompositeLayout <PXGViewSource, PXGStringSource, PXGNamedImageSource, PXChangeObserver, PXStoryMenuDelegate>

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
    unsigned int _toggleFavoriteButtonSpriteIndex;
    unsigned int _chromeButtonFocusGuideSpriteIndex;
    unsigned int _infoPanelSpriteIndex;
    NSInteger _styleChromeSublayoutIndex;
    unsigned short _contentVersion;
    unsigned short _actionMenuButtonVersion;
    BOOL _shouldInvalidateActionMenuOnClose;
    NSIndexSet *_cachePossiblyAccessibleSpriteIndexes;
}


@property (retain, nonatomic) NSNumber *alphaOverride; // ivar: _alphaOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *itemControllers; // ivar: _itemControllers
@property (readonly, nonatomic) PXStoryRelatedLayoutGenerator *layoutGenerator; // ivar: _layoutGenerator
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXStoryViewLayoutSpec> *viewLayoutSpec;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)axFocusabilityForSpriteAtIndex:(unsigned int)arg0 ;
-(id)_actionPerformer;
-(id)_buttonConfigurationForSpriteIndex:(unsigned int)arg0 ;
-(id)_configurationForButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 backgroundStyle:(NSInteger)arg2 axLabelKey:(id)arg3 ;
-(id)_configurationForButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 backgroundStyle:(NSInteger)arg2 label:(id)arg3 axLabelKey:(id)arg4 ;
-(id)_configurationForCloseButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 axLabelKey:(id)arg2 ;
-(id)_configurationForShareButtonWithAction:(SEL)arg0 systemImageName:(id)arg1 backgroundStyle:(NSInteger)arg2 axLabelKey:(id)arg3 ;
-(id)_possiblyAccessibleSpriteIndexes;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axLocalizedLabel;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)mainLayoutSpec;
-(id)preferredFocusLayouts;
-(id)preferredFocusSpriteIndexes;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)_addButtonForChromeItem:(NSUInteger)arg0 ;
-(unsigned int)_addEdgeHighlightForChromeItem:(NSUInteger)arg0 ;
-(unsigned int)_addLabelForChromeItem:(NSUInteger)arg0 ;
-(unsigned int)_addSpriteForChromeItemController:(id)arg0 mediaKind:(int)arg1 presentationType:(int)arg2 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_actionMenuChangedVisibilityStateToOpen:(BOOL)arg0 ;
-(void)_configureDefaultContentLayout:(id)arg0 ;
-(void)_configureUnifiedContentLayout:(id)arg0 ;
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
-(void)_invalidateAXGroupRole;
-(void)_invalidateActionMenu;
-(void)_invalidateContent;
-(void)_invalidateContentAlpha;
-(void)_invalidateContentLayout;
-(void)_invalidateMainModel;
-(void)_updateAXGroupRole;
-(void)_updateConfigurationUpdatedForPlaybackEnd:(id)arg0 ;
-(void)_updateContentAlpha;
-(void)_updateContentLayout;
-(void)_updateMainModel;
-(void)alphaDidChange;
-(void)didUpdate;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
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