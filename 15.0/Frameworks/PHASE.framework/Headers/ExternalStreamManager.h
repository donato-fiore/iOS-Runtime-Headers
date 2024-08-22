// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXTERNALSTREAMMANAGER_H
#define EXTERNALSTREAMMANAGER_H

@class NSMutableDictionary, AVAudioFormat;

#import <Foundation/Foundation.h>


@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    NSMutableDictionary *_inputStreams;
    *void _taskManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> _controllerPauseStateCallbacks;
    NSUInteger _controllerPauseStateCallbackCounter;
}




-(BOOL)streamIsPaused:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)addControllerPauseStateDidUpdateCallback:(id)arg0 ;
-(id)formatForStream:(id)arg0 error:(*id)arg1 ;
-(id)initWithTaskManager:(*void)arg0 engineMode:(NSInteger)arg1 engineFormat:(id)arg2 maximumFramesToRender:(unsigned int)arg3 ;
-(struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> )createRendererForStream:(id)arg0 outputChannelLayout:(unsigned int)arg1 normalize:(BOOL)arg2 error:(*id)arg3 ;
-(unsigned int)sessionIdForStream:(id)arg0 error:(*id)arg1 ;
-(void)abandonControlOfExternalStreamGroupID:(id)arg0 withCallback:(id)arg1 ;
-(void)addExternalInputStreamID:(id)arg0 definition:(id)arg1 isPaused:(BOOL)arg2 ;
// -(void)addExternalOutputStreamGroupID:(id)arg0 streamID:(id)arg1 definition:(id)arg2 startsPaused:(BOOL)arg3 renderBlock:(id)arg4 withCallback:(unk)arg5  ;
// -(void)claimControlOfExternalStreamGroupID:(id)arg0 stateChangeBlock:(id)arg1 withCallback:(unk)arg2  ;
-(void)pauseExternalStreamGroupID:(id)arg0 streamID:(id)arg1 ;
-(void)removeControllerPauseStateDidUpdateCallback:(NSUInteger)arg0 ;
-(void)removeExternalInputStreamID:(id)arg0 ;
-(void)removeExternalOutputStreamGroupID:(id)arg0 streamID:(id)arg1 withCallback:(id)arg2 ;
-(void)resumeExternalStreamGroupID:(id)arg0 streamID:(id)arg1 ;
-(void)setMuteExternalInputStreamID:(id)arg0 isMuted:(BOOL)arg1 ;
-(void)setPauseExternalInputStreamID:(id)arg0 isPaused:(BOOL)arg1 ;
-(void)updateController:(id)arg0 pauseState:(BOOL)arg1 ;


@end


#endif