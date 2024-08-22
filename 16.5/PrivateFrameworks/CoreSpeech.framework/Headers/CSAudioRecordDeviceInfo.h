// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIORECORDDEVICEINFO_H
#define CSAUDIORECORDDEVICEINFO_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isRemoteDevice; // ivar: _isRemoteDevice
@property (readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // ivar: _remoteDeviceProductIdentifier
@property (readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // ivar: _remoteDeviceUID
@property (readonly, copy, nonatomic) NSString *remoteDeviceUIDString; // ivar: _remoteDeviceUIDString
@property (readonly, copy, nonatomic) NSString *route; // ivar: _route


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAVVCRecordDeviceInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoute:(id)arg0 isRemoteDevice:(BOOL)arg1 remoteDeviceUID:(id)arg2 remoteDeviceProductIdentifier:(id)arg3 ;
-(id)initWithRoute:(id)arg0 isRemoteDevice:(BOOL)arg1 remoteDeviceUID:(id)arg2 remoteDeviceProductIdentifier:(id)arg3 remoteDeviceUIDString:(id)arg4 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)xpcObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif