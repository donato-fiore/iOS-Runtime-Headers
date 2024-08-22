// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSTREAMOUTPUT_H
#define VCSTREAMOUTPUT_H

@class NSString;
@protocol VCStreamSychronizationDelegate, VCRemoteVideoManagerStreamOutputDelegate, OS_dispatch_queue;


#import "VCObject.h"

@interface VCStreamOutput : VCObject <VCStreamSychronizationDelegate, VCRemoteVideoManagerStreamOutputDelegate>

 {
    *opaqueVCRemoteImageQueue _remoteQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    int _clientProcessID;
    *__CFDictionary _attributes;
    id *_synchronizationDelegate;
    id *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _useFigRemoteQueue;
}


@property (readonly) *__CFAllocator backingBufferAllocator; // ivar: _backingBufferAllocator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isClientInProcess; // ivar: _isClientInProcess
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (nonatomic) float synchronizationTimeOffset;


-(BOOL)createRemoteQueue;
-(BOOL)enqueueAttributes:(struct __CFDictionary *)arg0 ;
-(BOOL)initXPCCommandQueue;
-(id)copyXpcSenderQueue;
-(id)initWithStreamToken:(NSInteger)arg0 clientProcessID:(int)arg1 synchronizationDelegate:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)synchronizationDelegate;
-(int)processID;
-(void)dealloc;
-(void)didDegrade:(BOOL)arg0 ;
-(void)didInvalidate;
-(void)didPause:(BOOL)arg0 ;
-(void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)didStall:(BOOL)arg0 ;
-(void)didSuspend:(BOOL)arg0 ;
-(void)didUpdateAttachments:(struct __CFDictionary *)arg0 ;
-(void)invalidate;
-(void)setSynchronizationDelegate:(id)arg0 ;


@end


#endif