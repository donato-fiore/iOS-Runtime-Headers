// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYDEFAULTDISPLAYASSETCROPPINGCONTEXT_H
#define PXSTORYDEFAULTDISPLAYASSETCROPPINGCONTEXT_H

@class NSSet;
@protocol PXDisplayAssetCollection;


#import "PXStoryBaseDisplayAssetCroppingContext.h"

@interface PXStoryDefaultDisplayAssetCroppingContext : PXStoryBaseDisplayAssetCroppingContext

@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSSet *featuredPersonLocalIdentifiers; // ivar: _featuredPersonLocalIdentifiers


-(id)adjustOrderedFaces:(id)arg0 featuredFaceCount:(*NSInteger)arg1 ;
-(id)adjustOrderedFaces:(id)arg0 featuredFaceCount:(*NSInteger)arg1 forFeaturedPersonWithLocalIdentifiers:(id)arg2 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)orderFaces:(id)arg0 ;


@end


#endif