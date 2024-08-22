// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSTREAMOUTPUTMANAGER_H
#define VCSTREAMOUTPUTMANAGER_H

@class NSMutableDictionary, NSString;
@protocol VCRemoteVideoManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCStreamOutputManager : NSObject <VCRemoteVideoManagerDelegate>

 {
    NSMutableDictionary *_streamOutputSourceForStreamToken;
    NSMutableDictionary *_streamOutputs;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
    BOOL _useFigRemoteQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)sourceExistsForStreamToken:(NSInteger)arg0 ;
-(id)allocDispatchedStreamOutputWithStreamToken:(NSInteger)arg0 clientPid:(int)arg1 options:(id)arg2 errorCode:(*int)arg3 ;
-(id)allocStreamOutputWithStreamToken:(NSInteger)arg0 clientPid:(int)arg1 options:(id)arg2 errorCode:(*int)arg3 ;
-(id)init;
-(id)serviceHandlerStreamOutputInitializeWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerStreamOutputSetTimeSyncOffsetWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerStreamOutputTerminateWithArguments:(id)arg0 error:(*id)arg1 ;
-(void)cleanupStreamOutput:(id)arg0 ;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg0 remoteInterfaceType:(id)arg1 streamToken:(NSInteger)arg2 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)deregisterStreamOutputSourceForStreamToken:(NSInteger)arg0 ;
-(void)didReceiveFirstRemoteFrameForStreamToken:(NSInteger)arg0 ;
-(void)dispatchedCleanupStreamOutput:(id)arg0 ;
-(void)dispatchedDeregisterStreamOutputSourceForStreamToken:(NSInteger)arg0 ;
-(void)dispatchedRegisterStreamOutputSource:(id)arg0 forStreamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteMediaDidStall:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoDidDegrade:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoDidPause:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoDidSuspend:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)registerBlocksForService;
-(void)registerStreamOutputSource:(id)arg0 forStreamToken:(NSInteger)arg1 ;
-(void)releaseQueueForStreamToken:(NSInteger)arg0 ;
-(void)remoteMediaDidStall:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteScreenAttributesDidChange:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoAttributesDidChange:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoDidDegrade:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoDidPause:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoDidSuspend:(BOOL)arg0 streamToken:(NSInteger)arg1 ;


@end


#endif