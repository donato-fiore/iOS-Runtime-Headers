// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCREMOTEVIDEOMANAGER_H
#define VCREMOTEVIDEOMANAGER_H

@class NSMutableDictionary, NSString;
@protocol VCRemoteVideoManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate>

 {
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultManager;
-(BOOL)doesQueueExistForStreamToken:(id)arg0 ;
-(BOOL)queueExistsForStreamToken:(id)arg0 ;
-(id)contextIdForStreamTokenWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)getQueueForStreamToken:(unsigned int)arg0 videoMode:(int)arg1 ;
-(id)init;
-(id)newQueueForStreamToken:(NSInteger)arg0 videoMode:(int)arg1 ;
-(id)newQueueForStreamToken:(NSInteger)arg0 videoMode:(int)arg1 imageQueueProtected:(BOOL)arg2 ;
-(id)setLayerBoundsForStreamTokenWithArguments:(id)arg0 error:(*id)arg1 ;
-(unsigned int)slotForStreamToken:(NSInteger)arg0 videoMode:(int)arg1 ;
-(void)cleanupDictionaries;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg0 remoteInterfaceType:(id)arg1 streamToken:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didReceiveFirstRemoteFrameForStreamToken:(NSInteger)arg0 ;
-(void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg0 remoteInterfaceType:(id)arg1 streamToken:(NSInteger)arg2 ;
-(void)dispatchedDidReceiveFirstRemoteFrameForStreamToken:(NSInteger)arg0 ;
-(void)dispatchedNotifyCachedStateForStreamToken:(id)arg0 ;
-(void)dispatchedRemoteMediaDidStall:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteScreenAttributesDidChange:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoAttributesDidChange:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoDidDegrade:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoDidPause:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)dispatchedRemoteVideoDidSuspend:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)notifyCachedStateForStreamToken:(id)arg0 ;
-(void)registerBlocksForService;
-(void)releaseQueueForStreamToken:(NSInteger)arg0 ;
-(void)remoteMediaDidStall:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteScreenAttributesDidChange:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoAttributesDidChange:(id)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoDidDegrade:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoDidPause:(BOOL)arg0 streamToken:(NSInteger)arg1 ;
-(void)remoteVideoDidSuspend:(BOOL)arg0 streamToken:(NSInteger)arg1 ;


@end


#endif