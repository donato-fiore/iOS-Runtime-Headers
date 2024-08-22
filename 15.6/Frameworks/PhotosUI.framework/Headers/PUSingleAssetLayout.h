// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSINGLEASSETLAYOUT_H
#define PUSINGLEASSETLAYOUT_H

@class NSString;


#import "PUTilingLayout.h"
#import "PUAssetReference.h"

@interface PUSingleAssetLayout : PUTilingLayout

@property (nonatomic) CGRect assetRect; // ivar: _assetRect
@property (retain, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (copy, nonatomic) NSString *cornerCurve; // ivar: _cornerCurve
@property (nonatomic) NSUInteger cornerMask; // ivar: _cornerMask
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) UIEdgeInsets cropInsets; // ivar: _cropInsets


-(id)layoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)layoutInfosForTilesInRect:(struct CGRect )arg0 ;
-(struct CGRect )contentBounds;
-(struct CGRect )visibleRectForScrollingToItemAtIndexPath:(id)arg0 scrollPosition:(NSInteger)arg1 ;
-(void)_invalidateSingleAssetLayout;


@end


#endif