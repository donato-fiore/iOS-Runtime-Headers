// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTELOGINAUTHENTICATIONREQUEST_H
#define HMDREMOTELOGINAUTHENTICATIONREQUEST_H



#import "HMRemoteLoginMessage.h"

@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) NSUInteger targetedAccountType; // ivar: _targetedAccountType


+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg0 ;
+(id)objWithMessage:(id)arg0 ;
+(id)xpcMessageName;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)messageName;
-(id)messagePayload;
-(id)xpcMessageName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif