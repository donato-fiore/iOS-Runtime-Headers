// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APENDPOINTSTREAMSCREENAVCWRAPPER_H
#define APENDPOINTSTREAMSCREENAVCWRAPPER_H

@class AVCVideoStream, AVCMediaStreamNegotiator, AVCMediaStreamConfig, NSString;
@protocol AVCVideoStreamDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface APEndpointStreamScreenAVCWrapper : NSObject <AVCVideoStreamDelegate>

 {
    int _clientPID;
    AVCVideoStream *_avcVideoStream;
    AVCMediaStreamNegotiator *_avcMediaStreamNegotiator;
    AVCMediaStreamNegotiator *_avcMediaStreamNegotiatorHDR;
    AVCMediaStreamConfig *_videoStreamConfig;
    AVCMediaStreamConfig *_videoStreamConfigHDR;
    int _didStartStatus;
    *void _eventWeakContext;
    *unk _eventHandleStart;
    *unk _eventHandleStop;
    *unk _eventHandleFailed;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    unsigned char _isSubFrameEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)convertHDRMode:(struct __CFString *)arg0 ;
-(id)initWithClientPID:(struct __CFNumber *)arg0 hdrMode:(struct __CFString *)arg1 presentationMode:(BOOL)arg2 eventHandlers:(struct ? )arg3 error:(*int)arg4 ;
-(id)negotiationDataForPresentationMode:(unsigned char)arg0 ;
-(int)createVideoStreamConfig:(*id)arg0 withDirection:(NSInteger)arg1 screenOptions:(struct ? *)arg2 previousConfig:(id)arg3 ;
-(int)getClientUPID:(*NSUInteger)arg0 ;
-(int)initializeNegotiatorWithMode:(struct __CFString *)arg0 presentationMode:(BOOL)arg1 ;
-(int)restartWithScreenOptions:(struct ? *)arg0 negotiatedBlob:(id)arg1 ;
-(int)start;
-(int)startWithNWConnectionClientID:(unsigned char)arg0 negotiatedBlob:(id)arg1 screenOptions:(struct ? *)arg2 completion:(struct ? *)arg3 ;
-(int)stop;
-(unsigned char)isConfigPresentForPresentationMode:(unsigned char)arg0 ;
-(void)dealloc;
-(void)getVideoResolutionFromOptions:(struct ? *)arg0 width:(*NSUInteger)arg1 height:(*NSUInteger)arg2 ;
-(void)handleFailureWithError:(int)arg0 reason:(struct __CFString *)arg1 ;
-(void)stopWithCompletion:(struct ? *)arg0 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif