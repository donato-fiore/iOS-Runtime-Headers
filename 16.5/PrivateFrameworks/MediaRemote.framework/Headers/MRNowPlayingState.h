// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOWPLAYINGSTATE_H
#define MRNOWPLAYINGSTATE_H

@class NSData, NSString, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRPlaybackQueue.h"
#import "MRPlayerPath.h"
#import "_MRSetStateMessageProtobuf.h"
#import "MRPlaybackQueueRequest.h"

@interface MRNowPlayingState : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL containsArtwork;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *displayID; // ivar: _displayID
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasPlaybackState; // ivar: _hasPlaybackState
@property (nonatomic) BOOL hasPlaybackStateTimestamp; // ivar: _hasPlaybackStateTimestamp
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue; // ivar: _playbackQueue
@property (nonatomic) NSUInteger playbackQueueCapabilities; // ivar: _playbackQueueCapabilities
@property (nonatomic) unsigned int playbackState; // ivar: _playbackState
@property (nonatomic) CGFloat playbackStateTimestamp; // ivar: _playbackStateTimestamp
@property (copy, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic) _MRSetStateMessageProtobuf *protobuf;
@property (copy, nonatomic) MRPlaybackQueueRequest *request; // ivar: _request
@property (copy, nonatomic) NSArray *supportedCommands; // ivar: _supportedCommands


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutArtwork;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif