// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLSECURITY_H
#define RWIPROTOCOLSECURITY_H



#import "RWIProtocolJSONObject.h"
#import "RWIProtocolSecurityCertificate.h"
#import "RWIProtocolSecurityConnection.h"

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolSecurityCertificate *certificate;
@property (retain, nonatomic) RWIProtocolSecurityConnection *connection;




@end


#endif