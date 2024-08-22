// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPLOCALMEDIAQUERYREMOTEPLAYBACKQUEUE_H
#define MPLOCALMEDIAQUERYREMOTEPLAYBACKQUEUE_H



#import "MPRemotePlaybackQueue.h"
#import "MPMediaItem.h"
#import "MPMediaQuery.h"

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) MPMediaItem *firstItem; // ivar: _firstItem
@property (readonly, nonatomic) MPMediaQuery *mediaQuery; // ivar: _mediaQuery
@property (readonly, nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType


+(BOOL)supportsSecureCoding;
-(BOOL)verifyWithError:(*id)arg0 ;
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0 options:(id)arg1 ;
-(id)playbackItemMetadataForMediaItem:(id)arg0 ;


@end


#endif