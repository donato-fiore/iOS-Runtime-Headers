// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXTERNALSTREAMMANAGER_H
#define EXTERNALSTREAMMANAGER_H

@class NSMutableDictionary, AVAudioFormat;

#import <Foundation/Foundation.h>


@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    *void _taskManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    BOOL _enableAudioIssueDetector;
    unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> _controllerPauseStateCallbacks;
    NSUInteger _controllerPauseStateCallbackCounter;
}




-(BOOL)streamIsPaused:(id)arg0 error:(*id)arg1 ;
-(NSInteger)typeForStream:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)addControllerPauseStateDidUpdateCallback:(id)arg0 ;
-(id)formatForStream:(id)arg0 error:(*id)arg1 ;
-(id)initWithTaskManager:(*void)arg0 engineMode:(NSInteger)arg1 engineFormat:(id)arg2 maximumFramesToRender:(unsigned int)arg3 enableAudioIssueDetector:(BOOL)arg4 ;
-(struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> )createRendererForStream:(id)arg0 outputChannelLayout:(unsigned int)arg1 normalize:(BOOL)arg2 error:(*id)arg3 ;
-(unsigned int)sessionIdForStream:(id)arg0 error:(*id)arg1 ;
-(void)abandonControlOfExternalStreamGroupID:(id)arg0 withCallback:(id)arg1 ;
-(void)addExternalInputStreamGroupID:(id)arg0 streamID:(id)arg1 attributedTo:(id)arg2 definition:(id)arg3 isPaused:(BOOL)arg4 ;
// -(void)addExternalOutputStreamGroupID:(id)arg0 streamID:(id)arg1 attributedTo:(id)arg2 definition:(id)arg3 startsPaused:(BOOL)arg4 renderBlock:(id)arg5 withCallback:(unk)arg6  ;
// -(void)claimControlOfExternalStreamGroupID:(id)arg0 attributedTo:(id)arg1 stateChangeBlock:(id)arg2 withCallback:(unk)arg3  ;
-(void)gatherDebugInformation:(id)arg0 ;
-(void)pauseExternalStreamGroupID:(id)arg0 streamID:(id)arg1 ;
-(void)removeAllResourcesAttributedToClientID:(id)arg0 ;
-(void)removeControllerPauseStateDidUpdateCallback:(NSUInteger)arg0 ;
-(void)removeExternalInputStreamGroupID:(id)arg0 streamID:(id)arg1 ;
-(void)removeExternalOutputStreamGroupID:(id)arg0 streamID:(id)arg1 withCallback:(id)arg2 ;
-(void)resumeExternalStreamGroupID:(id)arg0 streamID:(id)arg1 ;
-(void)setMuteExternalInputStreamGroupID:(id)arg0 streamID:(id)arg1 isMuted:(BOOL)arg2 ;
-(void)setPauseExternalInputStreamGroupID:(id)arg0 streamID:(id)arg1 isPaused:(BOOL)arg2 ;
-(void)updateController:(id)arg0 pauseState:(BOOL)arg1 ;


@end


#endif