// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCSTREAMOUTPUT_H
#define AVCSTREAMOUTPUT_H

@class NSString;
@protocol VCRemoteVideoManagerStreamOutputDelegate, AVCStreamOutputDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCStreamOutput : NSObject <VCRemoteVideoManagerStreamOutputDelegate>

 {
    AVConferenceXPCClient *_connection;
    *__CFDictionary _attachments;
    BOOL _isMediaStalled;
    int _processID;
    ? _lastHealthPrintTime;
    ? _lastSampleBufferTime;
    unsigned int _sampleBufferCount;
    float _estimatedDataRate;
    *opaqueVCRemoteImageQueue _receiverQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCStreamOutputDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue; // ivar: _internalReceiverQueue
@property (nonatomic) BOOL isDegraded; // ivar: _isDegraded
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (nonatomic) BOOL isSuspended; // ivar: _isSuspended
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (nonatomic) float synchronizationTimeOffset; // ivar: _synchronizationTimeOffset


-(id)initWithStreamToken:(NSInteger)arg0 delegate:(id)arg1 queue:(id)arg2 error:(*id)arg3 ;
-(int)createReceiverQueue;
-(int)processID;
-(int)setupRemoteQueueWithSenderQueue:(id)arg0 ;
-(int)setupXPCConnection;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)didDegrade:(BOOL)arg0 ;
-(void)didInvalidate;
-(void)didPause:(BOOL)arg0 ;
-(void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)didStall:(BOOL)arg0 ;
-(void)didSuspend:(BOOL)arg0 ;
-(void)didUpdateAttachments:(struct __CFDictionary *)arg0 ;
-(void)registerBlocksForNotification;
-(void)remoteQueueOperationHandlerWithError:(int)arg0 operation:(struct FigRemoteOperation *)arg1 ;
-(void)serviceHandlerDidDegradeWithArguments:(id)arg0 error:(id)arg1 ;
-(void)serviceHandlerDidDieWithArguments:(id)arg0 error:(id)arg1 ;
-(void)serviceHandlerDidPauseWithArguments:(id)arg0 error:(id)arg1 ;
-(void)serviceHandlerDidReleaseOutputQueueWithArguments:(id)arg0 error:(id)arg1 ;
-(void)serviceHandlerDidStallWithArguments:(id)arg0 error:(id)arg1 ;
-(void)serviceHandlerDidSuspendWithArguments:(id)arg0 error:(id)arg1 ;
-(void)setupDelegateQueue:(id)arg0 ;
-(void)terminateConnection;


@end


#endif