// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYASSETSSECTIONGENERATEDLAYOUT_H
#define PXCURATEDLIBRARYASSETSSECTIONGENERATEDLAYOUT_H

@protocol PXDisplayAsset;


#import "PXGGeneratedLayout.h"
#import "PXCuratedLibrarySectionGeometryDescriptor.h"

@interface PXCuratedLibraryAssetsSectionGeneratedLayout : PXGGeneratedLayout

@property (readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (retain, nonatomic) NSObject<PXDisplayAsset> *presentedKeyAsset; // ivar: _presentedKeyAsset
@property (nonatomic) CGRect presentedKeyAssetRect; // ivar: _presentedKeyAssetRect
@property (readonly, nonatomic) CGRect sectionRect;


-(id)init;
-(void)enumerateHeroSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)getSpriteZPosition:(*float)arg0 clippingRect:(struct CGRect *)arg1 forSpriteKind:(NSInteger)arg2 ;
-(void)spritesDidUpdate;


@end


#endif