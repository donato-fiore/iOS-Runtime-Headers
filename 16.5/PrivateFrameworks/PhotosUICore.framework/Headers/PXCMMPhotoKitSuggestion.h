// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPHOTOKITSUGGESTION_H
#define PXCMMPHOTOKITSUGGESTION_H

@class PHAssetCollection, NSString, PHFetchResult;
@protocol PXMediaTypeAggregating, PXCMMSuggestion, NSCopying, PXPeopleFetchResult, PXDisplayAsset, PXUIImageProvider;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionActionManager.h"

@interface PXCMMPhotoKitSuggestion : NSObject <PXMediaTypeAggregating, PXCMMSuggestion, NSCopying>



@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<PXPeopleFetchResult> *peopleFetchResult;
@property (readonly, nonatomic) PHFetchResult *peopleSuggestionsFetchResult; // ivar: _peopleSuggestionsFetchResult
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // ivar: _previewAssetsFetchResult
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)_fetchPeopleSuggestionsForAssetCollection:(id)arg0 ;
+(id)_fetchPreviewAssetsForAssetCollection:(id)arg0 ;
+(id)fastSuggestionWithAssetCollection:(id)arg0 ;
+(id)sharedCachingImageManager;
+(id)suggestionWithAssetCollection:(id)arg0 ;
-(id)contextForActivityType:(NSUInteger)arg0 sourceType:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diagnosticsItem;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)arg0 ;
-(id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)arg0 ;
-(void)decline;
-(void)markAsActiveIfNeeded;


@end


#endif