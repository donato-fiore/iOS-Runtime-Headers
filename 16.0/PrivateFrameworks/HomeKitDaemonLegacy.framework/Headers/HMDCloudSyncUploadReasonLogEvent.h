// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDSYNCUPLOADREASONLOGEVENT_H
#define HMDCLOUDSYNCUPLOADREASONLOGEVENT_H

@class HMMLogEvent, NSString;



@interface HMDCloudSyncUploadReasonLogEvent : HMMLogEvent

@property (readonly) NSInteger homeManagerPushCount; // ivar: _homeManagerPushCount
@property (readonly) NSInteger homeZonePushCount; // ivar: _homeZonePushCount
@property (readonly) NSInteger legacyPushCount; // ivar: _legacyPushCount
@property (readonly, nonatomic) NSString *saveReason; // ivar: _saveReason


+(id)uploadReason:(id)arg0 acceptedHomeManagerZonePush:(BOOL)arg1 ;
+(id)uploadReason:(id)arg0 acceptedHomeZonePush:(BOOL)arg1 ;
+(id)uploadReason:(id)arg0 acceptedLegacyPush:(BOOL)arg1 ;
-(id)initWithUploadReason:(id)arg0 legacyPushCount:(NSInteger)arg1 homeZonePushCount:(NSInteger)arg2 homeManagerPushCount:(NSInteger)arg3 ;


@end


#endif