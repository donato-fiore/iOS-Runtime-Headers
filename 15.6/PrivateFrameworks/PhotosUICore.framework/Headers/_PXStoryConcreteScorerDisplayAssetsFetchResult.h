// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYCONCRETESCORERDISPLAYASSETSFETCHRESULT_H
#define _PXSTORYCONCRETESCORERDISPLAYASSETSFETCHRESULT_H

@class NSString;
@protocol PXStoryDisplayAssetFetchResult, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXStoryReusableDisplayAsset.h"
#import "PXStoryResourcesDataSource.h"

@interface _PXStoryConcreteScorerDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult>

 {
    NSInteger _capacity;
    *NSInteger _resourceIndexes;
    PXStoryReusableDisplayAsset *_asset;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *lastObject;
@property (readonly, nonatomic) *NSInteger resourceIndexes;
@property (retain, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)cachedCountOfAssetsWithMediaType:(NSInteger)arg0 ;
-(NSUInteger)countOfAssetsWithMediaType:(NSInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)storyDisplayAssetAtIndex:(NSInteger)arg0 ;
-(id)thumbnailAssetAtIndex:(NSUInteger)arg0 ;
-(void)addResourceWithIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)removeAllResources;


@end


#endif