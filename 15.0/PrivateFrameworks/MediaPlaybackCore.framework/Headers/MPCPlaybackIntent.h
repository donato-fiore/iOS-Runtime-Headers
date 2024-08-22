// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKINTENT_H
#define MPCPLAYBACKINTENT_H

@class NSDictionary, NSString, NSData;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPCPlaybackSharedListeningProperties.h"

@interface MPCPlaybackIntent : NSObject {
    id<MPCPlaybackIntentDataSource> *_resolvedTracklistDataSource;
}


@property (nonatomic) NSInteger actionAfterQueueLoad; // ivar: _actionAfterQueueLoad
@property (copy, nonatomic) NSDictionary *endTimeModifications; // ivar: _endTimeModifications
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSString *playActivityFeatureName; // ivar: _playActivityFeatureName
@property (copy, nonatomic) NSData *playActivityRecommendationData; // ivar: _playActivityRecommendationData
@property (nonatomic) BOOL prefersEnqueuingUsingAirPlay; // ivar: _prefersEnqueuingUsingAirPlay
@property (copy, nonatomic) NSString *queueGroupingID; // ivar: _queueGroupingID
@property (nonatomic) NSInteger repeatMode; // ivar: _repeatMode
@property (readonly, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (nonatomic) NSInteger shuffleMode; // ivar: _shuffleMode
@property (copy, nonatomic) NSString *siriAssetInfo; // ivar: _siriAssetInfo
@property (copy, nonatomic) NSString *siriReferenceIdentifier; // ivar: _siriReferenceIdentifier
@property (copy, nonatomic) NSDictionary *startTimeModifications; // ivar: _startTimeModifications
@property (readonly, nonatomic) NSObject<MPCPlaybackIntentDataSource> *tracklistDataSource;
@property (nonatomic) NSInteger tracklistSource; // ivar: _tracklistSource
@property (retain, nonatomic) NSObject<NSSecureCoding> *tracklistToken; // ivar: _tracklistToken


+(id)continueListeningRadioPlaybackIntent;
+(id)intentFromQueueDescriptor:(id)arg0 ;
+(id)radioPlaybackIntentFromAlbum:(id)arg0 ;
+(id)radioPlaybackIntentFromArtist:(id)arg0 ;
+(id)radioPlaybackIntentFromReference:(id)arg0 ;
+(id)radioPlaybackIntentFromSong:(id)arg0 ;
+(id)radioPlaybackIntentWithStation:(id)arg0 ;
+(id)radioPlaybackIntentWithStationStringID:(id)arg0 ;
+(id)radioPlaybackIntentWithStationURL:(id)arg0 ;
+(id)sharedSessionIntentWithProperties:(id)arg0 identity:(id)arg1 ;
+(id)tracklistDataSourceForSource:(NSInteger)arg0 ;
+(void)buildSharedSessionIntentWithIntent:(id)arg0 identity:(id)arg1 extendedStatusCompletion:(id)arg2 ;
-(id)artworkCatalogForMetadataModelObject:(id)arg0 ;
-(id)description;
-(id)generateNowPlayingContentItemWithMetadataObject:(id)arg0 ;
-(id)init;
-(void)getArchiveWithConfiguration:(id)arg0 completion:(id)arg1 ;
// -(void)getNowPlayingInfoWithArtworkCatalogConfiguration:(id)arg0 artworkHandler:(unk)arg1 completion:(id)arg2  ;
-(void)getPlaybackContextWithCompletion:(id)arg0 ;
-(void)getRemotePlaybackQueueDataWithCompletion:(id)arg0 ;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg0 completion:(id)arg1 ;
-(void)getRepresentativeObjectWithProperties:(id)arg0 completion:(id)arg1 ;


@end


#endif