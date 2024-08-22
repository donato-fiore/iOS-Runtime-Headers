// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGBULKSENDLISTENER_H
#define HMDCAMERARECORDINGBULKSENDLISTENER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMDDataStreamBulkSendListener, OS_dispatch_queue, HMDCameraRecordingBulkSendListenerDelegate;



@interface HMDCameraRecordingBulkSendListener : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_pendingOpenSessionReason;
    id *_pendingOpenSessionCallback;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraRecordingBulkSendListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithWorkQueue:(id)arg0 ;
-(id)logIdentifier;
-(void)accessory:(id)arg0 didReceiveBulkSessionCandidate:(id)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg0 ;
-(void)accessoryDidStartListening:(id)arg0 ;
-(void)addPendingBulkSendSessionOpenReason:(id)arg0 pendingBulkSendSessionCallback:(id)arg1 ;
-(void)openBulkSendSessionWithAccessory:(id)arg0 reason:(id)arg1 callback:(id)arg2 ;


@end


#endif