// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYRESOURCESDATASOURCE_H
#define PXSTORYRESOURCESDATASOURCE_H

@class NSMutableDictionary;
@protocol PXDisplayAssetCollection, PXAudioAssetFetchResult, PXDisplayAssetFetchResult, PXStoryColorResource, PXStoryChapterCollection, PXStoryDisplayAssetCroppingContext, PXStorySaliencyDataSource, PXDisplayAsset, PXStoryDisplayAssetResource, PXStoryMovieHighlightsCollection;

#import <Foundation/Foundation.h>


@interface PXStoryResourcesDataSource : NSObject {
    NSInteger _initialDisplayAssetIndex;
    _NSRange _chapterTitleTextResourceIndexes;
    _NSRange _chapterSubtitleTextResourceIndexes;
    NSMutableDictionary *_cachedTextResources;
}


@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *audioAssets; // ivar: _audioAssets
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *availableDisplayAssets; // ivar: _availableDisplayAssets
@property (readonly, nonatomic) NSObject<PXStoryColorResource> *backgroundColorResource; // ivar: _backgroundColorResource
@property (readonly, nonatomic) NSObject<PXStoryChapterCollection> *chapterCollection; // ivar: _chapterCollection
@property (readonly, nonatomic) NSObject<PXStoryDisplayAssetCroppingContext> *croppingContext; // ivar: _croppingContext
@property (readonly, nonatomic) NSObject<PXStorySaliencyDataSource> *detailedSaliency; // ivar: _detailedSaliency
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger initialSubtitleTextResourceIndex; // ivar: _initialSubtitleTextResourceIndex
@property (readonly, nonatomic) NSInteger initialTitleTextResourceIndex; // ivar: _initialTitleTextResourceIndex
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSObject<PXStoryDisplayAssetResource> *keyAssetResource;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlightsCollection> *movieHighlights; // ivar: _movieHighlights
@property (readonly, nonatomic) NSInteger numberOfColorResources; // ivar: _numberOfColorResources
@property (readonly, nonatomic) NSInteger numberOfDisplayAssetResources;
@property (readonly, nonatomic) NSInteger numberOfFrameFillingEffectResources;
@property (readonly, nonatomic) NSInteger numberOfSongResources;
@property (readonly, nonatomic) NSInteger numberOfTextResources; // ivar: _numberOfTextResources
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo


-(BOOL)hasSameResourcesOfKind:(NSInteger)arg0 as:(id)arg1 ;
-(NSInteger)indexForDisplayAssetReference:(id)arg0 ;
-(NSInteger)numberOfResourcesWithKind:(NSInteger)arg0 ;
-(id)_createTextResourceAtIndex:(NSInteger)arg0 ;
-(id)colorResourceAtIndex:(NSInteger)arg0 ;
-(id)displayAssetResourceAtIndex:(NSInteger)arg0 ;
-(id)frameFillingEffectResourceAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithKeyAsset:(id)arg0 displayAssets:(id)arg1 availableDisplayAssets:(id)arg2 movieHighlights:(id)arg3 detailedSaliency:(id)arg4 chapterCollection:(id)arg5 audioAssets:(id)arg6 assetCollection:(id)arg7 overallDurationInfo:(struct ? )arg8 configuration:(id)arg9 ;
-(id)movieHighlightsForDisplayAssetAtIndex:(NSInteger)arg0 ;
-(id)resourceWithKind:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(id)songResourceAtIndex:(NSInteger)arg0 ;
-(id)textResourceAtIndex:(NSInteger)arg0 ;
-(void)enumerateTitleTextResourcesForDisplayAssetResourceAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif