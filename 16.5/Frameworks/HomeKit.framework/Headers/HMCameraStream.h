// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERASTREAM_H
#define HMCAMERASTREAM_H

@class NSNumber, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;


#import "HMCameraSource.h"

@interface HMCameraStream : HMCameraSource <HMFMessageReceiver>



@property (readonly, nonatomic) NSUInteger audioStreamSetting;
@property (readonly, nonatomic) NSNumber *audioVolume;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger internalAudioStreamSetting; // ivar: _internalAudioStreamSetting
@property (copy) NSNumber *internalAudioVolume; // ivar: _internalAudioVolume
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithProfileUniqueIdentifier:(id)arg0 sessionID:(id)arg1 slotIdentifier:(id)arg2 aspectRatio:(id)arg3 audioStreamSetting:(NSUInteger)arg4 ;
-(void)_handleAudioStreamSettingUpdate:(NSUInteger)arg0 withError:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)_issueUpdateAudioStreamSettingRequest:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_updateAudioStreamSetting:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_updateAudioVolume:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)updateAudioStreamSetting:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateAudioVolume:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif