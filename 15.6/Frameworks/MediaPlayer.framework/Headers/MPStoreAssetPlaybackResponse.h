// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREASSETPLAYBACKRESPONSE_H
#define MPSTOREASSETPLAYBACKRESPONSE_H

@class NSDictionary, NSDate, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "MPStoreHLSAssetInfo.h"

@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSDictionary *dialogDictionary; // ivar: _dialogDictionary
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSArray *fileAssetInfoList; // ivar: _fileAssetInfoList
@property (readonly, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo; // ivar: _hlsAssetInfo
@property (readonly, nonatomic, getter=isLiveRadioStream) BOOL liveRadioStream; // ivar: _liveRadioStream
@property (readonly, nonatomic) BOOL onlineSubscriptionKeysRequired; // ivar: _onlineSubscriptionKeysRequired
@property (readonly, copy, nonatomic) NSArray *radioStreamAssetInfoList; // ivar: _radioStreamAssetInfoList
@property (readonly, nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired; // ivar: _subscriptionRequired
@property (readonly, nonatomic) id *suzeLeaseID; // ivar: _suzeLeaseID


-(id)_copyWithPlaybackResponseClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif