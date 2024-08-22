// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGBULKSENDSESSIONINITIATOR_H
#define HMDCAMERARECORDINGBULKSENDSESSIONINITIATOR_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDCameraRecordingBulkSendListenerDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDCameraRecordingBulkSendListener.h"

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDCameraRecordingBulkSendListenerDelegate>



@property (weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (retain) HMDCameraRecordingBulkSendListener *currentListener; // ivar: _currentListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) Class superclass;
@property (getter=isWaitingForAccessory) BOOL waitingForAccessory; // ivar: _waitingForAccessory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 ;
-(id)logIdentifier;
-(void)_registerBulkSendListener;
-(void)configure;
-(void)handleAccessoryDoesSupportBulkSendDataStreamNotification:(id)arg0 ;
-(void)listenerDidReceiveDataStreamClose:(id)arg0 ;
-(void)listenerDidReceiveDataStreamStart:(id)arg0 ;
-(void)openNewSessionWithReason:(id)arg0 completion:(id)arg1 ;
-(void)stop;


@end


#endif