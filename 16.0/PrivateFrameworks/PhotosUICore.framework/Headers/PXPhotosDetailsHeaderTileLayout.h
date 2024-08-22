// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSHEADERTILELAYOUT_H
#define PXPHOTOSDETAILSHEADERTILELAYOUT_H

@protocol PXPhotosDetailsHeaderTileLayoutDelegate;


#import "PXTilingLayout.h"
#import "PXPhotosDetailsHeaderSpec.h"

@interface PXPhotosDetailsHeaderTileLayout : PXTilingLayout {
    ? _delegateRespondsTo;
    BOOL _useTitledPlayButton;
}


@property (readonly, nonatomic) PXTileIdentifier contentTileIdentifier;
@property (weak, nonatomic) NSObject<PXPhotosDetailsHeaderTileLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGRect previewRect;
@property (retain, nonatomic) PXPhotosDetailsHeaderSpec *spec; // ivar: _spec
@property (nonatomic) NSInteger style; // ivar: _style


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(CGFloat)_zPositionForTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(NSInteger)tileKindForTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)_userDataForTileWithIdentifier:(struct PXTileIdentifier )arg0 inContainingRect:(struct CGRect )arg1 ;
-(id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier )arg0 boundingSize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(struct CGRect )_contentsRectForAspectRatio:(CGFloat)arg0 ;
-(struct CGRect )_rectForTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(struct CGRect )contentBounds;
-(struct CGSize )_playButtonSize;
-(struct PXTileIdentifier )tileIdentifierForTileKind:(NSInteger)arg0 ;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif