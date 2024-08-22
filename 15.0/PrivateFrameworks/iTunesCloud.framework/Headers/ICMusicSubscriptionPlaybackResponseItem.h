// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICSUBSCRIPTIONPLAYBACKRESPONSEITEM_H
#define ICMUSICSUBSCRIPTIONPLAYBACKRESPONSEITEM_H

@class NSDictionary, NSDate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICStoreHLSAssetInfo.h"

@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <NSCopying>

 {
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
}


@property (copy, nonatomic) NSDate *assetExpirationDate; // ivar: _assetExpirationDate
@property (readonly, copy, nonatomic) NSArray *fileAssets;
@property (readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property (readonly, nonatomic) NSInteger storeAdamID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileAssetWithFlavorType:(NSInteger)arg0 ;
-(id)initWithItemResponseDictionary:(id)arg0 urlBag:(id)arg1 ;


@end


#endif