// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORYINFO_H
#define PXMEMORYINFO_H

@class PHAssetCollection, NSString, PHFetchResult, PHMemory, PHAsset;
@protocol PXSelectionAssetContainer, NSCopying;

#import <Foundation/Foundation.h>


@interface PXMemoryInfo : NSObject <PXSelectionAssetContainer, NSCopying>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // ivar: _keyAssetFetchResult
@property (readonly, nonatomic) NSString *localizedDateText; // ivar: _localizedDateText
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) PHAsset *primaryAsset;
@property (readonly, nonatomic) BOOL px_isEmpty;
@property (readonly, nonatomic) CGFloat score;
@property (readonly) Class superclass;


+(id)fastMemoryInfoWithMemory:(id)arg0 ;
+(id)memoryInfoWithAssetCollection:(id)arg0 keyAssetFetchResult:(id)arg1 ;
+(id)memoryInfoWithMemory:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg0 ;
-(id)px_fetchContainedAssets;


@end


#endif