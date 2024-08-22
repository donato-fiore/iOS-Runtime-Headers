// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPUINOWPLAYINGSNAPSHOT_H
#define CPUINOWPLAYINGSNAPSHOT_H

@class NSString, MPArtworkCatalog, NSNumber, MPCPlayerResponse, MPCPlayerResponseItem, MPModelSong, MPCPlayerResponseTracklist;

#import <Foundation/Foundation.h>


@interface CPUINowPlayingSnapshot : NSObject

@property (readonly, nonatomic) NSString *album; // ivar: _album
@property (readonly, nonatomic) NSString *artist; // ivar: _artist
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) ? durationSnapshot; // ivar: _durationSnapshot
@property (readonly, nonatomic) BOOL isRadioPlayback; // ivar: _isRadioPlayback
@property (readonly, nonatomic) NSNumber *jumpBackInterval;
@property (readonly, nonatomic) NSNumber *jumpForwardInterval;
@property (readonly, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly, nonatomic) MPCPlayerResponseItem *responseItem; // ivar: _responseItem
@property (readonly, nonatomic) BOOL shouldEnableBackButton;
@property (readonly, nonatomic) BOOL shouldEnableNextButton;
@property (readonly, nonatomic) MPModelSong *song; // ivar: _song
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist; // ivar: _tracklist


+(id)knownJumpIntervals;
-(id)commandWithType:(NSUInteger)arg0 ;
-(id)initWithResponse:(id)arg0 ;


@end


#endif