// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMCAMERASTREAM_H
#define _HMCAMERASTREAM_H

@class NSNumber, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;


#import "HMCameraSource.h"

@interface _HMCameraStream : HMCameraSource <HMFMessageReceiver>



@property (nonatomic) NSUInteger audioStreamSetting; // ivar: _audioStreamSetting
@property (retain, nonatomic) NSNumber *audioVolume; // ivar: _audioVolume
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 slotIdentifier:(id)arg1 context:(id)arg2 profileUniqueIdentifier:(id)arg3 aspectRatio:(id)arg4 audioStreamSetting:(NSUInteger)arg5 ;
// -(void)_handleAudioStreamSettingUpdate:(NSUInteger)arg0 completionHandler:(id)arg1 error:(unk)arg2  ;
-(void)_issueUpdateAudioStreamSettingRequest:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_updateAudioStreamSetting:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_updateAudioVolume:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)updateAudioStreamSetting:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateAudioVolume:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif