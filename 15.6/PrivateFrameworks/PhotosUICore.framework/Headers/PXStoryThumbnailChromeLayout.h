// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTHUMBNAILCHROMELAYOUT_H
#define PXSTORYTHUMBNAILCHROMELAYOUT_H

@class NSNumber, NSIndexSet, NSString;
@protocol PXGViewSource, PXChangeObserver, PXStoryThumbnailActionPerformer, PXStoryLayoutSpec;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXStoryModel.h"

@interface PXStoryThumbnailChromeLayout : PXGAbsoluteCompositeLayout <PXGViewSource, PXChangeObserver>

 {
    ? _updateFlags;
    unsigned int _actionMenuButtonSpriteIndex;
    unsigned int _favoriteButtonSpriteIndex;
    unsigned short _contentVersion;
}


@property (readonly, nonatomic) NSObject<PXStoryThumbnailActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (retain, nonatomic) NSNumber *alphaOverride; // ivar: _alphaOverride
@property (readonly, nonatomic) NSIndexSet *axSpriteIndexes; // ivar: _axSpriteIndexes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (nonatomic) CGFloat scaleFromTopRightCorner; // ivar: _scaleFromTopRightCorner
@property (readonly, nonatomic) NSObject<PXStoryLayoutSpec> *spec;
@property (readonly) Class superclass;


-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)axFocusabilityForSpriteAtIndex:(unsigned int)arg0 ;
-(id)_baseConfigurationForButtonWithSystemImageName:(id)arg0 ;
-(id)_buttonConfigurationForSpriteIndex:(unsigned int)arg0 ;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_handleActionMenuItem:(NSInteger)arg0 ;
-(void)_handleFavoriteButton:(id)arg0 ;
-(void)_invalidateContent;
-(void)_invalidateContentAlpha;
-(void)_invalidateContentVersion;
-(void)_invalidateIsFavorite;
-(void)_invalidateTransform;
-(void)_updateContent;
-(void)_updateContentAlpha;
-(void)_updateIsFavorite;
-(void)_updateTransform;
-(void)alphaDidChange;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;


@end


#endif