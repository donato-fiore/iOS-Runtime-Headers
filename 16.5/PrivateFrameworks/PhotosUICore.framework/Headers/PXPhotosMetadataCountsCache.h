// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSMETADATACOUNTSCACHE_H
#define PXPHOTOSMETADATACOUNTSCACHE_H


#import <Foundation/Foundation.h>


@interface PXPhotosMetadataCountsCache : NSObject

@property (readonly, nonatomic) ? assetCounts; // ivar: _assetCounts
@property (readonly, nonatomic) ? guestAssetCounts; // ivar: _guestAssetCounts


-(id)initWithAssetCounts:(struct ? )arg0 guestAssetCounts:(struct ? )arg1 ;


@end


#endif