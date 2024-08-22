// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYRECIPE_H
#define PXSTORYRECIPE_H

@class NSDictionary;
@protocol PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXStorySongResource, PXDisplayAsset, PXStoryMovieHighlightsCollection, PFStoryRecipe;

#import <Foundation/Foundation.h>

#import "PXStoryStyleConfigurationList.h"

@interface PXStoryRecipe : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *allAssets; // ivar: _allAssets
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSDictionary *autoEditDecisionListsBySong; // ivar: _autoEditDecisionListsBySong
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *curatedAssets; // ivar: _curatedAssets
@property (readonly, nonatomic) NSObject<PXStorySongResource> *initialSongResource; // ivar: _initialSongResource
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlightsCollection> *movieHighlights; // ivar: _movieHighlights
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, nonatomic) NSObject<PFStoryRecipe> *sourcePersistableRecipe; // ivar: _sourcePersistableRecipe
@property (readonly, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList; // ivar: _styleConfigurationList


-(id)init;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 curatedAssets:(id)arg2 allAssets:(id)arg3 movieHighlights:(id)arg4 overallDurationInfo:(struct ? )arg5 styleConfigurationList:(id)arg6 sourcePersistableRecipe:(id)arg7 initialSongResource:(id)arg8 autoEditDecisionListsBySong:(id)arg9 ;


@end


#endif