// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMUTABLECONFIGURATIONSECURERECORD_H
#define DNDSMUTABLECONFIGURATIONSECURERECORD_H

@class NSDictionary, NSSet;


#import "DNDSConfigurationSecureRecord.h"
#import "DNDSSenderConfigurationRecord.h"

@interface DNDSMutableConfigurationSecureRecord : DNDSConfigurationSecureRecord

@property (copy, nonatomic) NSDictionary *allowedApplications;
@property (copy, nonatomic) NSSet *allowedWebApplications;
@property (copy, nonatomic) NSSet *deniedApplications;
@property (copy, nonatomic) NSSet *deniedWebApplications;
@property (copy, nonatomic) DNDSSenderConfigurationRecord *senderConfiguration;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif