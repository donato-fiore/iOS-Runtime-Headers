// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTELOGINPROXYDEVICERESPONSE_H
#define HMDREMOTELOGINPROXYDEVICERESPONSE_H

@class NSString, NSDictionary, AKDevice;
@protocol HMRemoteLoginMessageProtocol;


#import "HMRemoteLoginMessage.h"

@interface HMDRemoteLoginProxyDeviceResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (retain, nonatomic) AKDevice *proxyDevice; // ivar: _proxyDevice
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;


+(BOOL)supportsSecureCoding;
+(id)objWithDict:(id)arg0 ;
+(id)objWithMessage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif