// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGINCOMPANIONAUTHENTICATIONREQUEST_H
#define HMDREMOTELOGINCOMPANIONAUTHENTICATIONREQUEST_H

@class ACAccount, AKDevice, NSString, NSDictionary;
@protocol HMRemoteLoginMessageProtocol;


#import "HMDRemoteLoginAuthenticationRequest.h"

@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) AKDevice *companionDevice; // ivar: _companionDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;


+(BOOL)supportsSecureCoding;
+(id)objWithDict:(id)arg0 ;
+(id)objWithMessage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif