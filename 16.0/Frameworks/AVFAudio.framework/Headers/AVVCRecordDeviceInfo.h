// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVVCRECORDDEVICEINFO_H
#define AVVCRECORDDEVICEINFO_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface AVVCRecordDeviceInfo : NSObject

@property (readonly) BOOL isRemoteDevice; // ivar: _isRemoteDevice
@property (readonly, nonatomic) BOOL isUpsamplingSourceAudio; // ivar: _isUpsamplingSourceAudio
@property (readonly, nonatomic) NSString *recordRoute; // ivar: _recordRoute
@property (readonly, nonatomic) unsigned int remoteDeviceCategory; // ivar: _remoteDeviceCategory
@property (readonly, nonatomic) NSUUID *remoteDeviceUID; // ivar: _remoteDeviceUID
@property (readonly, nonatomic) NSString *remoteDeviceUIDString; // ivar: _remoteDeviceUIDString
@property (readonly, nonatomic) NSString *remoteProductIdentifier; // ivar: _remoteProductIdentifier


-(id)initWithRecordingEngine:(struct shared_ptr<AVVCRecordingEngine> )arg0 ;
-(void)dealloc;


@end


#endif