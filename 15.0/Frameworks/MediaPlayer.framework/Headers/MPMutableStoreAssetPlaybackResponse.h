// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMUTABLESTOREASSETPLAYBACKRESPONSE_H
#define MPMUTABLESTOREASSETPLAYBACKRESPONSE_H

@class NSDictionary, NSDate, NSArray;


#import "MPStoreAssetPlaybackResponse.h"
#import "MPStoreHLSAssetInfo.h"

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (copy, nonatomic) NSDictionary *dialogDictionary;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *fileAssetInfoList;
@property (retain, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (nonatomic, getter=isLiveRadioStream) BOOL liveRadioStream;
@property (nonatomic) BOOL onlineSubscriptionKeysRequired;
@property (copy, nonatomic) NSArray *radioStreamAssetInfoList;
@property (nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (retain, nonatomic) id *suzeLeaseID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif