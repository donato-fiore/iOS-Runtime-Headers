// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOALLOWEDCLIENTSETTINGSGROUP_H
#define MOALLOWEDCLIENTSETTINGSGROUP_H

@class NSNumber, NSSet;


#import "MOSettingsGroup.h"
#import "MOApplication.h"

@interface MOAllowedClientSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) MOApplication *allowedClient;
@property (retain, nonatomic) NSNumber *denyMDMEnrollment;
@property (retain, nonatomic) NSSet *tokenKeys;


+(id)groupName;


@end


#endif