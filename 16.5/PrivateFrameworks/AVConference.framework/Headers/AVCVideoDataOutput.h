// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCVIDEODATAOUTPUT_H
#define AVCVIDEODATAOUTPUT_H

@class NSString;
@protocol AVCStreamOutputDelegate, AVCVideoDataOutputDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVCStreamOutput.h"
#import "AVConferenceXPCClient.h"

@interface AVCVideoDataOutput : NSObject <AVCStreamOutputDelegate>

 {
    AVCStreamOutput *_streamOutput;
    AVConferenceXPCClient *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCVideoDataOutputDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue; // ivar: _internalReceiverQueue
@property (nonatomic) BOOL isMediaStalled; // ivar: _isMediaStalled
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (nonatomic) BOOL isVideoDegraded; // ivar: _isVideoDegraded
@property (nonatomic) BOOL isVideoPaused; // ivar: _isVideoPaused
@property (nonatomic) BOOL isVideoSuspended; // ivar: _isVideoSuspended
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (nonatomic) ? videoAttributes; // ivar: _videoAttributes


-(BOOL)parseVideoAttributes:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithStreamToken:(NSInteger)arg0 delegate:(id)arg1 queue:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)streamOutput:(id)arg0 didDegrade:(BOOL)arg1 ;
-(void)streamOutput:(id)arg0 didPause:(BOOL)arg1 ;
-(void)streamOutput:(id)arg0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)streamOutput:(id)arg0 didStall:(BOOL)arg1 ;
-(void)streamOutput:(id)arg0 didSuspend:(BOOL)arg1 ;
-(void)streamOutputDidBecomeInvalid:(id)arg0 ;
-(void)streamOutputServerDidDie:(id)arg0 ;


@end


#endif