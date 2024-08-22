// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYRESOURCESDATASOURCE_H
#define PXSTORYRESOURCESDATASOURCE_H

@protocol PXDisplayAssetCollection, PXAudioAssetFetchResult, PXDisplayAssetFetchResult, PXStoryColorResource, PXStoryDisplayAssetCroppingContext, PXDisplayAsset, PXStoryDisplayAssetResource, PXStoryMovieHighlightsCollection, PXStoryTextResource;

#import <Foundation/Foundation.h>


@interface PXStoryResourcesDataSource : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *audioAssets; // ivar: _audioAssets
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *availableDisplayAssets; // ivar: _availableDisplayAssets
@property (readonly, nonatomic) NSObject<PXStoryColorResource> *backgroundColorResource; // ivar: _backgroundColorResource
@property (readonly, nonatomic) NSObject<PXStoryDisplayAssetCroppingContext> *croppingContext; // ivar: _croppingContext
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSObject<PXStoryDisplayAssetResource> *keyAssetResource;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlightsCollection> *movieHighlights; // ivar: _movieHighlights
@property (readonly, nonatomic) NSInteger numberOfColorResources; // ivar: _numberOfColorResources
@property (readonly, nonatomic) NSInteger numberOfDisplayAssetResources;
@property (readonly, nonatomic) NSInteger numberOfFrameFillingEffectResources;
@property (readonly, nonatomic) NSInteger numberOfSongResources;
@property (readonly, nonatomic) NSInteger numberOfTextResources; // ivar: _numberOfTextResources
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, nonatomic) NSObject<PXStoryTextResource> *subtitleResource; // ivar: _subtitleResource
@property (readonly, nonatomic) NSObject<PXStoryTextResource> *titleResource; // ivar: _titleResource


-(BOOL)hasSameResourcesOfKind:(NSInteger)arg0 as:(id)arg1 ;
-(NSInteger)indexForDisplayAssetReference:(id)arg0 ;
-(NSInteger)numberOfResourcesWithKind:(NSInteger)arg0 ;
-(id)colorResourceAtIndex:(NSInteger)arg0 ;
-(id)displayAssetResourceAtIndex:(NSInteger)arg0 ;
-(id)frameFillingEffectResourceAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithKeyAsset:(id)arg0 displayAssets:(id)arg1 availableDisplayAssets:(id)arg2 movieHighlights:(id)arg3 audioAssets:(id)arg4 assetCollection:(id)arg5 overallDurationInfo:(struct ? )arg6 configuration:(id)arg7 ;
-(id)movieHighlightsForDisplayAssetAtIndex:(NSInteger)arg0 ;
-(id)resourceWithKind:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(id)songResourceAtIndex:(NSInteger)arg0 ;
-(id)textResourceAtIndex:(NSInteger)arg0 ;


@end


#endif