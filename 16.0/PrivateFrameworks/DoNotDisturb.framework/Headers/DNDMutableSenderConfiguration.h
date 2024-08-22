// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMUTABLESENDERCONFIGURATION_H
#define DNDMUTABLESENDERCONFIGURATION_H

@class NSMutableSet;


#import "DNDSenderConfiguration.h"
#import "DNDBypassSettings.h"

@interface DNDMutableSenderConfiguration : DNDSenderConfiguration

@property (copy, nonatomic) NSMutableSet *allowedContactGroups;
@property (copy, nonatomic) NSMutableSet *allowedContactTypes;
@property (copy, nonatomic) NSMutableSet *allowedContacts;
@property (copy, nonatomic) NSMutableSet *deniedContactGroups;
@property (copy, nonatomic) NSMutableSet *deniedContactTypes;
@property (copy, nonatomic) NSMutableSet *deniedContacts;
@property (copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;


-(void)removeAllowedContactMatchingContact:(id)arg0 ;
-(void)removeDeniedContactMatchingContact:(id)arg0 ;


@end


#endif