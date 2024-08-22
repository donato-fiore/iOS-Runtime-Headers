// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIORECORDDEVICEINDICATOR_H
#define CSAUDIORECORDDEVICEINDICATOR_H

@class NSString, CSAudioRecordContext;

#import <Foundation/Foundation.h>


@interface CSAudioRecordDeviceIndicator : NSObject

@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) CSAudioRecordContext *recordContext; // ivar: _recordContext
@property (readonly, nonatomic) BOOL shouldUseRemoteRecorder; // ivar: _shouldUseRemoteRecorder
@property (readonly, nonatomic) NSUInteger streamHandleId; // ivar: _streamHandleId


-(id)initWithRecordContext:(id)arg0 deviceId:(id)arg1 shouldUseRemoteRecorder:(BOOL)arg2 streamHandleId:(NSUInteger)arg3 ;
-(void)updateDeviceId:(id)arg0 ;
-(void)updateWithLatestRecordContext:(id)arg0 ;


@end


#endif