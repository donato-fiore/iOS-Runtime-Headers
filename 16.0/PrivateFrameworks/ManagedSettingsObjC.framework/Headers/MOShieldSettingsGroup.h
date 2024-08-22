// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOSHIELDSETTINGSGROUP_H
#define MOSHIELDSETTINGSGROUP_H

@class NSSet;


#import "MOSettingsGroup.h"
#import "MOApplicationCategoryShieldPolicy.h"
#import "MOWebDomainCategoryShieldPolicy.h"

@interface MOShieldSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) MOApplicationCategoryShieldPolicy *applicationCategories;
@property (retain, nonatomic) NSSet *applications;
@property (retain, nonatomic) MOWebDomainCategoryShieldPolicy *webDomainCategories;
@property (retain, nonatomic) NSSet *webDomains;


+(id)groupName;


@end


#endif