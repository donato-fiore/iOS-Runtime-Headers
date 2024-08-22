// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMUTABLESENDERCONFIGURATIONRECORD_H
#define DNDSMUTABLESENDERCONFIGURATIONRECORD_H

@class NSSet;


#import "DNDSSenderConfigurationRecord.h"
#import "DNDSBypassSettingsRecord.h"

@interface DNDSMutableSenderConfigurationRecord : DNDSSenderConfigurationRecord

@property (copy, nonatomic) NSSet *allowedContactGroups;
@property (copy, nonatomic) NSSet *allowedContactTypes;
@property (copy, nonatomic) NSSet *allowedContacts;
@property (copy, nonatomic) NSSet *deniedContactGroups;
@property (copy, nonatomic) NSSet *deniedContactTypes;
@property (copy, nonatomic) NSSet *deniedContacts;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif