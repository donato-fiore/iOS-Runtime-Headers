// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMMANAGER_H
#define VCMEDIASTREAMMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol VCMediaStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate>

 {
    _opaque_pthread_mutex_t stateLock;
    NSMutableArray *streamArray;
    NSObject<OS_dispatch_queue> *xpcQueue;
    NSMutableDictionary *_vcMomentsCollectorDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultManager;
+(void)addNSError:(id)arg0 toXPCArgumentDictionary:(id)arg1 ;
-(BOOL)addSyncSourceToVideoStreamConfig:(id)arg0 sourceStreamToken:(NSInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)retainCount;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(id)textStreamWithStreamToken:(NSInteger)arg0 ;
-(id)videoStreamWithSyncToken:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)pauseStreams:(BOOL)arg0 ;
-(void)registerBlocksForService;
-(void)release;
-(void)stopStream:(id)arg0 ;
-(void)vcMediaStream:(id)arg0 didReceiveDTMFEventWithDigit:(char)arg1 ;
-(void)vcMediaStream:(id)arg0 didReceiveRTCPPackets:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 didReceiveTTYCharacter:(unsigned short)arg1 ;
-(void)vcMediaStream:(id)arg0 didReceiveText:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 didUpdateVideoConfiguration:(BOOL)arg1 error:(id)arg2 dictionary:(id)arg3 ;
-(void)vcMediaStream:(id)arg0 downlinkQualityDidChange:(id)arg1 ;
-(void)vcMediaStream:(id)arg0 updateFrequencyLevel:(id)arg1 isInputMeter:(BOOL)arg2 ;
-(void)vcMediaStream:(id)arg0 uplinkQualityDidChange:(id)arg1 ;
-(void)vcMediaStreamDidInterruptionBegin:(id)arg0 ;
-(void)vcMediaStreamDidInterruptionEnd:(id)arg0 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg0 ;
-(void)vcMediaStreamServerDidDie:(id)arg0 ;


@end


#endif