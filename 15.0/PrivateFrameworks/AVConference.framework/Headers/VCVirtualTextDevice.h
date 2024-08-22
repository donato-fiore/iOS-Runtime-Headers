// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIRTUALTEXTDEVICE_H
#define VCVIRTUALTEXTDEVICE_H

@class NSString;
@protocol VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate, OS_dispatch_queue, VCMediaStreamDelegate;

#import <Foundation/Foundation.h>


@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate>

 {
    int _clientPid;
    NSInteger _state;
    NSObject<OS_dispatch_queue> *_queue;
    id *_sendDelegate;
    id *_mediaStreamDelegate;
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) Class superclass;


-(BOOL)setStreamConfig:(id)arg0 withError:(*id)arg1 ;
-(id)initWithSendDelegate:(id)arg0 clientPid:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)pause;
-(id)resume;
-(id)sendDelegate;
-(id)setPause:(BOOL)arg0 ;
-(id)start;
-(id)stop;
-(void)dealloc;
-(void)didReceiveText:(id)arg0 ;
-(void)sendCharacter:(unsigned short)arg0 ;
-(void)sendText:(id)arg0 ;


@end


#endif