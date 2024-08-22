// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSIRIAUDIOPLAYBACKSESSIONIMPLAVPLAYERBASED_H
#define CSSIRIAUDIOPLAYBACKSESSIONIMPLAVPLAYERBASED_H

@class AVPlayer, AVPlayerItem, AVAudioSession, NSString, AFAudioPlaybackRequest;
@protocol CSSiriAudioPlaybackSession, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSiriAudioPlaybackSessionImplAVPlayerBased : NSObject <CSSiriAudioPlaybackSession>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVAudioSession *_audioSession;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) AFAudioPlaybackRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 request:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_finalizeWithError:(id)arg0 ;
-(void)_handleBeginInterruption;
-(void)_handleEndInterruption:(BOOL)arg0 ;
-(void)_prepareWithOptions:(NSUInteger)arg0 audioSession:(id)arg1 completion:(id)arg2 ;
-(void)_resetPlayerItem;
// -(void)_startWithOptions:(NSUInteger)arg0 audioSession:(id)arg1 preparationHandler:(id)arg2 executionHandler:(unk)arg3 finalizationHandler:(id)arg4  ;
-(void)_stop:(BOOL)arg0 ;
-(void)handleBeginInterruption;
-(void)handleEndInterruption:(BOOL)arg0 ;
-(void)playerItemDidPlayToEndTime:(id)arg0 ;
-(void)playerItemFailedToPlayToEndTime:(id)arg0 ;
-(void)prepareWithOptions:(NSUInteger)arg0 audioSession:(id)arg1 completion:(id)arg2 ;
// -(void)startWithOptions:(NSUInteger)arg0 audioSession:(id)arg1 preparationHandler:(id)arg2 executionHandler:(unk)arg3 finalizationHandler:(id)arg4  ;
-(void)stop:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif