// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRADIOSTATIONTRACK_H
#define ICRADIOSTATIONTRACK_H

@class NSDictionary, NSDate, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "ICRadioStationTrack.h"
#import "ICStoreHLSAssetInfo.h"
#import "ICStorePlatformMetadata.h"

@interface ICRadioStationTrack : NSObject {
    NSDictionary *_responseDictionary;
    NSInteger _responseVersion;
}


@property (readonly, nonatomic) ICRadioStationTrack *afterPromoContentTrack;
@property (readonly, nonatomic) ICRadioStationTrack *beforePromoContentTrack;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSArray *fileAssets;
@property (readonly, nonatomic) BOOL hasStartTime;
@property (readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property (readonly, nonatomic) NSInteger likeState;
@property (readonly, nonatomic) ICRadioStationTrack *parentTrack; // ivar: _parentTrack
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;
@property (readonly, copy, nonatomic) NSArray *radioStreamAssets;
@property (readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property (readonly, nonatomic, getter=isSkippable) BOOL skippable;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly, nonatomic) NSInteger storeAdamID;
@property (readonly, copy, nonatomic) ICStorePlatformMetadata *storePlatformMetadata;
@property (readonly, nonatomic) NSInteger trackType;


+(id)flattenedTracksWithTracks:(id)arg0 ;
-(id)_hlsAssetFromAssetDictionary:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 responseVersion:(NSInteger)arg1 expirationDate:(id)arg2 ;


@end


#endif