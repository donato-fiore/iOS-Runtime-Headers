// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGBULKSENDSESSIONREADER_H
#define HMDCAMERARECORDINGBULKSENDSESSIONREADER_H

@class HMFObject, HMFTimer, NSString;
@protocol HMFTimerDelegate, HMFLogging, OS_dispatch_queue, HMDCameraRecordingBulkSendSessionReaderDelegate, HMDDataStreamBulkSendSession;


#import "HMDDataStreamFragmentAssembler.h"

@interface HMDCameraRecordingBulkSendSessionReader : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_readCallbackTimer;
    HMDDataStreamFragmentAssembler *_fragmentChunkAssembler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraRecordingBulkSendSessionReaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSObject<HMDDataStreamBulkSendSession> *session; // ivar: _session
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 session:(id)arg1 readCallbackTimer:(id)arg2 logIdentifier:(id)arg3 ;
-(id)initWithWorkQueue:(id)arg0 session:(id)arg1 readTimeout:(CGFloat)arg2 logIdentifier:(id)arg3 ;
-(void)start;
-(void)stopWithReason:(unsigned short)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif