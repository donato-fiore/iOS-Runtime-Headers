// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORYINFO_H
#define PXMEMORYINFO_H

@class PHAssetCollection, PHFetchResult, NSString, PHMemory, PHAsset;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXMemoryInfo : NSObject <NSCopying>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // ivar: _keyAssetFetchResult
@property (readonly, nonatomic) NSString *localizedDateText; // ivar: _localizedDateText
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) PHAsset *primaryAsset;
@property (readonly, nonatomic) CGFloat score;


+(id)fastMemoryInfoWithMemory:(id)arg0 ;
+(id)memoryInfoWithAssetCollection:(id)arg0 keyAssetFetchResult:(id)arg1 ;
+(id)memoryInfoWithMemory:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg0 ;


@end


#endif