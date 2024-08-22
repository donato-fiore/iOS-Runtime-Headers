// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMIROMEMORYCONVERTER_H
#define PXSTORYMIROMEMORYCONVERTER_H

@class NSString, PHMemory;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXStoryMiroMemoryConverter : NSObject

@property (readonly, nonatomic) BOOL containsAnyData;
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *curatedAssets; // ivar: _curatedAssets
@property (readonly, nonatomic) NSString *flexMusicID; // ivar: _flexMusicID
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory


-(id)_fetchMiroCuratedAssetsInMemory:(id)arg0 ;
-(id)createNewRecipeFromMiroMetadataWithError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMemory:(id)arg0 keyAsset:(id)arg1 ;
-(void)_loadSavedMetadataForMemory:(id)arg0 ;


@end


#endif