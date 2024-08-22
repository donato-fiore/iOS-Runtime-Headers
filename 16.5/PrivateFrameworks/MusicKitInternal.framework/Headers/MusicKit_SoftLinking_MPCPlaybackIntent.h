// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPCPLAYBACKINTENT_H
#define MUSICKIT_SOFTLINKING_MPCPLAYBACKINTENT_H

@class MPCPlaybackIntent, NSString, NSData;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject {
    MPCPlaybackIntent *_underlyingPlaybackIntent;
}


@property (copy, nonatomic, setter=setPlayActivityFeatureName:) NSString *playActivityFeatureName;
@property (copy, nonatomic, setter=setPlayActivityRecommendationData:) NSData *playActivityRecommendationData;
@property (readonly, nonatomic) id *rawPlaybackIntent;
@property (nonatomic, setter=setRepeatMode:) NSInteger repeatMode;
@property (nonatomic, setter=setShuffleMode:) NSInteger shuffleMode;


-(id)_underlyingPlaybackIntent;
-(id)initWithLegacyLibraryRequest:(id)arg0 startLegacyModelObject:(id)arg1 onlyLibraryContent:(BOOL)arg2 ;
-(id)initWithLegacyModelStationSeeding:(id)arg0 ;
-(id)initWithStoreIDs:(id)arg0 startLegacyModelObject:(id)arg1 ;


@end


#endif