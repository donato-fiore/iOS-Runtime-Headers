// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTSASSETCURATIONOBJECT_H
#define PXSEARCHRESULTSASSETCURATIONOBJECT_H

@class PHAsset;

#import <Foundation/Foundation.h>


@interface PXSearchResultsAssetCurationObject : NSObject

@property (readonly, copy, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) float dominantSceneScore;
@property (nonatomic) float preCalculatedDominantSceneScore; // ivar: _preCalculatedDominantSceneScore


+(float)_calculateDominantSceneScoreWithSceneClassifications:(id)arg0 searchQuerySceneIdentifiers:(id)arg1 ;
+(id)_sceneClassificationForSceneIdentifier:(unsigned int)arg0 sceneClassifications:(id)arg1 ;
-(id)initWithAsset:(id)arg0 sceneClassifications:(id)arg1 searchQuerySceneIdentifiers:(id)arg2 ;


@end


#endif