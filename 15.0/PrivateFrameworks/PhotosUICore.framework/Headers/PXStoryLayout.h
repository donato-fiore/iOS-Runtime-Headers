// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYLAYOUT_H
#define PXSTORYLAYOUT_H

@class NSString, NSShadow;
@protocol PXGShadowSource, PXChangeObserver, PXStoryItemPlacementController, PXTapToRadarDiagnosticProvider;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXGLayout.h"
#import "PXStoryFullsizeLayout.h"
#import "PXStoryFadeOverlayLayout.h"
#import "PXStoryItemPlacement.h"
#import "PXStoryModel.h"
#import "PXNumberAnimator.h"
#import "PXStoryScrollLayout.h"
#import "PXStoryStyleSwitchingFullsizeLayout.h"
#import "PXStoryThumbnailChromeLayout.h"

@interface PXStoryLayout : PXGAbsoluteCompositeLayout <PXGShadowSource, PXChangeObserver, PXStoryItemPlacementController, PXTapToRadarDiagnosticProvider>

 {
    ? _updateFlags;
    CGRect _presentedContentFrame;
    CGRect _presentedContentFrameVelocity;
}


@property (weak, nonatomic) PXGLayout *accessoryItemPlacementLayout; // ivar: _accessoryItemPlacementLayout
@property (readonly, nonatomic) PXStoryFullsizeLayout *currentFullsizePlayerLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryFadeOverlayLayout *fadeOverlayLayout; // ivar: _fadeOverlayLayout
@property (readonly, nonatomic) NSInteger fadeOverlayLayoutIndex; // ivar: _fadeOverlayLayoutIndex
@property (retain, nonatomic) PXStoryItemPlacement *fullsizeContentPlacementOverride; // ivar: _fullsizeContentPlacementOverride
@property (readonly, nonatomic) PXGLayout *fullsizeLayout; // ivar: _fullsizeLayout
@property (readonly, nonatomic) NSInteger fullsizeLayoutIndex; // ivar: _fullsizeLayoutIndex
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *itemReference;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) PXNumberAnimator *pressedFractionAnimator; // ivar: _pressedFractionAnimator
@property (nonatomic) CGFloat presssedFraction; // ivar: _presssedFraction
@property (nonatomic) CGFloat relativeZPositionAboveLegibilityGradients; // ivar: _relativeZPositionAboveLegibilityGradients
@property (readonly, nonatomic) PXStoryScrollLayout *scrollLayout; // ivar: _scrollLayout
@property (readonly, nonatomic) NSInteger scrollLayoutIndex; // ivar: _scrollLayoutIndex
@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) unsigned int shadowSpriteIndex; // ivar: _shadowSpriteIndex
@property (readonly, nonatomic) PXStoryStyleSwitchingFullsizeLayout *styleSwitchingFullsizeLayout; // ivar: _styleSwitchingFullsizeLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryThumbnailChromeLayout *thumbnailChromeLayout; // ivar: _thumbnailChromeLayout
@property (readonly, nonatomic) NSInteger thumbnailChromeLayoutIndex; // ivar: _thumbnailChromeLayoutIndex
@property (readonly, nonatomic) PXStoryFullsizeLayout *thumbnailFullsizeLayout; // ivar: _thumbnailFullsizeLayout


-(CGFloat)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)scrollableAxis;
-(NSUInteger)contentChangeTrend;
-(id)diagnosticsItemProvidersInRect:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)placementInContext:(id)arg0 forItemReference:(id)arg1 ;
-(id)shadowForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateAXGroupMode;
-(void)_invalidateContent;
-(void)_invalidatePressedFraction;
-(void)_invalidatePressedFractionAnimator;
-(void)_invalidateShadow;
-(void)_setFrame:(struct CGRect )arg0 relativeZPosition:(CGFloat)arg1 depth:(CGFloat)arg2 forSublayoutAtIndex:(NSInteger)arg3 ;
-(void)_updateAXGroupMode;
-(void)_updateContent;
-(void)_updatePressedFraction;
-(void)_updatePressedFractionAnimator;
-(void)_updateShadow;
-(void)alphaDidChange;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didUpdate;
-(void)enumerateSublayoutsForDetailedPlacement:(id)arg0 ofItemWithReference:(id)arg1 usingBlock:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)setPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;
-(void)willUpdate;


@end


#endif