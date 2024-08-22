// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCSTREAMINPUT_H
#define AVCSTREAMINPUT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCStreamInput : NSObject {
    AVConferenceXPCClient *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id *_delegate;
    NSString *_description;
    BOOL _isStarted;
    ? _lastSampleBufferTime;
    float _estimatedDataRate;
    ? _lastHealthPrintTime;
    unsigned int _sampleBufferCount;
}


@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription
@property (readonly, nonatomic) NSInteger streamInputID; // ivar: _streamInputID


-(BOOL)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)delegate;
-(id)description;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 options:(id)arg3 error:(*id)arg4 ;
-(int)initializeServerSideInputStream;
-(int)processFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(int)processOptions:(id)arg0 ;
-(int)setupDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(int)setupXPCConnection;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)didServerDie;
-(void)didStart;
-(void)didStop;
-(void)registerBlocksForNotification;
-(void)registerDidServerDieBlock:(id)arg0 ;
-(void)registerService:(char *)arg0 weakSelf:(id)arg1 block:(id)arg2 ;


@end


#endif