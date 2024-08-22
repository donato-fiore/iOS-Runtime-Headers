// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDEFAULTDISPLAYASSETCROPPINGCONTEXT_H
#define PXSTORYDEFAULTDISPLAYASSETCROPPINGCONTEXT_H

@class NSSet;
@protocol PXDisplayAssetCollection, PXStorySaliencyDataSource;


#import "PXStoryBaseDisplayAssetCroppingContext.h"

@interface PXStoryDefaultDisplayAssetCroppingContext : PXStoryBaseDisplayAssetCroppingContext

@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<PXStorySaliencyDataSource> *detailedSaliency; // ivar: _detailedSaliency
@property (readonly, nonatomic) NSSet *featuredPersonLocalIdentifiers; // ivar: _featuredPersonLocalIdentifiers


-(id)adjustOrderedFaces:(id)arg0 featuredFaceCount:(*NSInteger)arg1 ;
-(id)adjustOrderedFaces:(id)arg0 featuredFaceCount:(*NSInteger)arg1 forFeaturedPersonWithLocalIdentifiers:(id)arg2 ;
-(id)cropContentRectsForMultipartPanoramaAsset:(id)arg0 axis:(NSInteger)arg1 cropContentsRectsApectRatio:(CGFloat)arg2 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 detailedSaliency:(id)arg1 ;
-(id)orderFaces:(id)arg0 ;


@end


#endif