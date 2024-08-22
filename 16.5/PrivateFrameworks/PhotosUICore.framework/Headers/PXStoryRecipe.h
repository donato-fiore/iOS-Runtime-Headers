// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRECIPE_H
#define PXSTORYRECIPE_H

@class NSDictionary;
@protocol PXTapToRadarDiagnosticProvider, PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXStoryChapterCollection, PXStorySaliencyDataSource, PXStorySongResource, PXDisplayAsset, PXStoryMovieHighlightsCollection, PFStoryRecipe;

#import <Foundation/Foundation.h>

#import "PXStoryStyleConfigurationList.h"

@interface PXStoryRecipe : NSObject <PXTapToRadarDiagnosticProvider>



@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *allAssets; // ivar: _allAssets
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSDictionary *autoEditDecisionListsBySong; // ivar: _autoEditDecisionListsBySong
@property (readonly, nonatomic) NSObject<PXStoryChapterCollection> *chapterCollection; // ivar: _chapterCollection
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *curatedAssets; // ivar: _curatedAssets
@property (readonly, nonatomic) NSObject<PXStorySaliencyDataSource> *detailedSaliency; // ivar: _detailedSaliency
@property (readonly, nonatomic) NSObject<PXStorySongResource> *initialSongResource; // ivar: _initialSongResource
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlightsCollection> *movieHighlights; // ivar: _movieHighlights
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, nonatomic) NSObject<PFStoryRecipe> *sourcePersistableRecipe; // ivar: _sourcePersistableRecipe
@property (readonly, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList; // ivar: _styleConfigurationList
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *untruncatedCuratedAssets; // ivar: _untruncatedCuratedAssets


-(id)init;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 curatedAssets:(id)arg2 untruncatedCuratedAssets:(id)arg3 allAssets:(id)arg4 movieHighlights:(id)arg5 detailedSaliency:(id)arg6 chapterCollection:(id)arg7 overallDurationInfo:(struct ? )arg8 styleConfigurationList:(id)arg9 sourcePersistableRecipe:(id)arg10 initialSongResource:(id)arg11 autoEditDecisionListsBySong:(id)arg12 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;


@end


#endif