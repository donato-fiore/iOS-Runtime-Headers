// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLSECURITYCONNECTION_H
#define RWIPROTOCOLSECURITYCONNECTION_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolSecurityConnection : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *cipher;
@property (copy, nonatomic) NSString *protocol;




@end


#endif