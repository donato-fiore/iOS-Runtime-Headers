// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFMEDIAPLAYBACKSTATESNAPSHOTMUTATION_H
#define _AFMEDIAPLAYBACKSTATESNAPSHOTMUTATION_H

@class NSDate, NSString;
@protocol AFMediaPlaybackStateSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFMediaPlaybackStateSnapshot.h"

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating>

 {
    AFMediaPlaybackStateSnapshot *_baseModel;
    NSInteger _playbackState;
    NSDate *_nowPlayingTimestamp;
    NSString *_mediaType;
    NSString *_groupIdentifier;
    BOOL _isProxyGroupPlayer;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setGroupIdentifier:(id)arg0 ;
-(void)setIsProxyGroupPlayer:(BOOL)arg0 ;
-(void)setMediaType:(id)arg0 ;
-(void)setNowPlayingTimestamp:(id)arg0 ;
-(void)setPlaybackState:(NSInteger)arg0 ;


@end


#endif