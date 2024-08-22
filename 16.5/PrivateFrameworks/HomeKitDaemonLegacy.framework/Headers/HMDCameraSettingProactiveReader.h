// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASETTINGPROACTIVEREADER_H
#define HMDCAMERASETTINGPROACTIVEREADER_H

@class HMFObject, NSString, HMFMessage, NSSet, HMCameraStreamPreferences;
@protocol HMFLogging, HMDCameraSettingProactiveReaderDelegate, OS_dispatch_queue;


#import "HMDAccessory.h"

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>



@property (weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraSettingProactiveReaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain) HMFMessage *pendingMessage; // ivar: _pendingMessage
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly) NSSet *streamControlMessageHandlers; // ivar: _streamControlMessageHandlers
@property (readonly) HMCameraStreamPreferences *streamPreferences; // ivar: _streamPreferences
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_streamingStatusForResponse:(id)arg0 ;
+(id)logCategory;
-(BOOL)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg0 ;
-(id)_availableStreamControlMessageHandlersForReadResponses:(id)arg0 ;
-(id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 sessionID:(id)arg1 accessory:(id)arg2 message:(id)arg3 streamControlMessageHandlers:(id)arg4 streamPreferences:(id)arg5 logIdentifier:(id)arg6 ;
-(void)_callDidCompleteReadDelegateCallback;
-(void)_handleStreamStatusMultireadResponse:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;
-(void)readSetting;


@end


#endif