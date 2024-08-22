// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYDUMMYDISPLAYASSETSFETCHRESULT_H
#define _PXSTORYDUMMYDISPLAYASSETSFETCHRESULT_H

@class NSString;
@protocol PXStoryDisplayAssetFetchResult, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXStoryReusableDisplayAsset.h"
#import "PXStoryResourcesDataSource.h"

@interface _PXStoryDummyDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult>

 {
    NSInteger _capacity;
    *NSInteger _resourceIndexes;
    PXStoryReusableDisplayAsset *_asset;
}


@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *lastObject;
@property (readonly, nonatomic) *NSInteger resourceIndexes;
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)cachedCountOfAssetsWithMediaType:(NSInteger)arg0 ;
-(NSUInteger)countOfAssetsWithMediaType:(NSInteger)arg0 ;
-(id)initWithResourcesDataSource:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)storyDisplayAssetAtIndex:(NSInteger)arg0 ;
-(id)thumbnailAssetAtIndex:(NSUInteger)arg0 ;
-(void)configureWithRange:(struct _NSRange )arg0 ;
-(void)dealloc;


@end


#endif