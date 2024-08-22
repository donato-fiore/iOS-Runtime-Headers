// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLSECURITYCERTIFICATE_H
#define RWIPROTOCOLSECURITYCERTIFICATE_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *dnsNames;
@property (copy, nonatomic) NSArray *ipAddresses;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) CGFloat validFrom;
@property (nonatomic) CGFloat validUntil;




@end


#endif