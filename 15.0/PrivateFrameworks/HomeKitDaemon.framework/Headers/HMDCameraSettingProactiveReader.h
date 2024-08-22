// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASETTINGPROACTIVEREADER_H
#define HMDCAMERASETTINGPROACTIVEREADER_H

@class HMFObject, NSString, HMFMessage, NSSet;
@protocol HMFLogging, HMDCameraSettingProactiveReaderDelegate, OS_dispatch_queue;


#import "HMDAccessory.h"

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>



@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDCameraSettingProactiveReaderDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain) HMFMessage *pendingMessage; // ivar: _pendingMessage
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly) NSSet *streamControlMessageHandlers; // ivar: _streamControlMessageHandlers
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg0 ;
-(id)_availableStreamControlMessageHandlersForReadResponses:(id)arg0 ;
-(id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg0 ;
-(id)_streamingStatusForResponse:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 message:(id)arg4 streamMessageHandlers:(id)arg5 logID:(id)arg6 ;
-(void)_callDidCompleteReadDelegateCallback;
-(void)_handleStreamStatusMultireadResponse:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;
-(void)readSetting;


@end


#endif