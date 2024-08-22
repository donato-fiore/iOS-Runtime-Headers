// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKREMOTEDEVICEREQUEST_H
#define CRKREMOTEDEVICEREQUEST_H

@class CATTaskRequest, NSString;



@interface CRKRemoteDeviceRequest : CATTaskRequest

@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) CATTaskRequest *remoteRequest; // ivar: _remoteRequest


+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif