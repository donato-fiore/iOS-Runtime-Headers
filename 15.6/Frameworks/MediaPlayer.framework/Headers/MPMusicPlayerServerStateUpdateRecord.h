// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUSICPLAYERSERVERSTATEUPDATERECORD_H
#define MPMUSICPLAYERSERVERSTATEUPDATERECORD_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPMusicPlayerControllerNowPlaying.h"
#import "MPMusicPlayerQueueDescriptor.h"
#import "MPMusicPlayerControllerNowPlayingTimeSnapshot.h"

@interface MPMusicPlayerServerStateUpdateRecord : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *contentItemIDs; // ivar: _contentItemIDs
@property (nonatomic) BOOL hasContentItemIDs; // ivar: _hasContentItemIDs
@property (nonatomic) BOOL hasNowPlaying; // ivar: _hasNowPlaying
@property (nonatomic) BOOL hasQueueDescriptor; // ivar: _hasQueueDescriptor
@property (nonatomic) BOOL hasRepeatMode; // ivar: _hasRepeatMode
@property (nonatomic) BOOL hasShuffleMode; // ivar: _hasShuffleMode
@property (nonatomic) BOOL hasTimeSnapshot; // ivar: _hasTimeSnapshot
@property (nonatomic) BOOL itemDidEnd; // ivar: _itemDidEnd
@property (retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying; // ivar: _nowPlaying
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor; // ivar: _queueDescriptor
@property (nonatomic) BOOL queueDidChange; // ivar: _queueDidChange
@property (nonatomic) BOOL queueDidEnd; // ivar: _queueDidEnd
@property (nonatomic) NSInteger repeatMode; // ivar: _repeatMode
@property (nonatomic) NSInteger shuffleMode; // ivar: _shuffleMode
@property (retain, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *timeSnapshot; // ivar: _timeSnapshot


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif