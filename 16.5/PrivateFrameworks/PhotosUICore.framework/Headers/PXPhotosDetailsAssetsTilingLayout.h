// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSASSETSTILINGLAYOUT_H
#define PXPHOTOSDETAILSASSETSTILINGLAYOUT_H



#import "PXEngineDrivenAssetsTilingLayout.h"
#import "PXPhotosDetailsAssetsSpec.h"

@interface PXPhotosDetailsAssetsTilingLayout : PXEngineDrivenAssetsTilingLayout

@property (nonatomic) NSInteger placeholderMode; // ivar: _placeholderMode
@property (retain, nonatomic) PXPhotosDetailsAssetsSpec *spec; // ivar: _spec


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(struct CGRect )_placeholderFrame;
-(struct CGRect )contentBounds;
-(struct UIEdgeInsets )contentInset;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;


@end


#endif