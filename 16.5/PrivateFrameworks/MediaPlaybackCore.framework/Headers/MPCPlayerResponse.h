// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERRESPONSE_H
#define MPCPLAYERRESPONSE_H

@class MPResponse, NSArray, UIView<MPCVideoView>;
@protocol MPCPlayerResponseBuilder, MPCVideoOutput;


#import "MPCMediaRemoteController.h"
#import "MPCPlayerPath.h"
#import "MPCPlayerResponseTracklist.h"

@interface MPCPlayerResponse : MPResponse

@property (readonly, nonatomic) NSObject<MPCPlayerResponseBuilder> *builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller; // ivar: _controller
@property (readonly, nonatomic) NSArray *participants; // ivar: _participants
@property (retain, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic, getter=isSharedListeningSession) BOOL sharedListeningSession; // ivar: _sharedListeningSession
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist; // ivar: _tracklist
@property (retain, nonatomic) NSObject<MPCVideoOutput> *videoOutput; // ivar: _videoOutput
@property (retain, nonatomic) UIView<MPCVideoView> *videoView; // ivar: _videoView


-(id)_commandRequestForMediaRemoteCommand:(unsigned int)arg0 ;
-(id)createSharedSessionWithIdentity:(id)arg0 intentHandler:(id)arg1 ;
-(id)createSharedSessionWithIntentHandler:(id)arg0 ;
-(id)description;
-(id)initWithRequest:(id)arg0 middleware:(id)arg1 ;
-(id)leaveSession;
-(id)pause;
-(id)play;
-(id)stop;


@end


#endif