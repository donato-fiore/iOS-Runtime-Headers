// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOEFFECTIVESHIELDSETTINGS_H
#define MOEFFECTIVESHIELDSETTINGS_H


#import <Foundation/Foundation.h>

#import "MOEffectiveCategoryShieldPolicy.h"
#import "MOEffectiveArray.h"

@interface MOEffectiveShieldSettings : NSObject

@property (readonly) MOEffectiveCategoryShieldPolicy *applicationCategoryPolicy;
@property (readonly) MOEffectiveArray *applications;
@property (readonly) MOEffectiveCategoryShieldPolicy *webDomainCategoryPolicy;
@property (readonly) MOEffectiveArray *webDomains;


+(id)configurationForBundleIdentifier:(id)arg0 categoryIdentifier:(id)arg1 categoryName:(id)arg2 error:(*id)arg3 ;
+(id)configurationForCategoryIdentifier:(id)arg0 categoryName:(id)arg1 error:(*id)arg2 ;
+(id)configurationForWebDomain:(id)arg0 categoryIdentifier:(id)arg1 categoryName:(id)arg2 error:(*id)arg3 ;
+(id)xpcConnection;
+(void)handleAction:(NSInteger)arg0 bundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 completionHandler:(id)arg3 ;
+(void)handleAction:(NSInteger)arg0 categoryIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)handleAction:(NSInteger)arg0 webDomain:(id)arg1 categoryIdentifier:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif