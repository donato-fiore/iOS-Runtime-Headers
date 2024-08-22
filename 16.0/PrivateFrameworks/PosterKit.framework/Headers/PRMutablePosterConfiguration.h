// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRMUTABLEPOSTERCONFIGURATION_H
#define PRMUTABLEPOSTERCONFIGURATION_H



#import "PRPosterConfiguration.h"

@interface PRMutablePosterConfiguration : PRPosterConfiguration



+(id)mutableConfiguration;
-(BOOL)setObject:(id)arg0 forUserInfoKey:(id)arg1 ;
-(BOOL)storeComplicationLayout:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeConfigurableOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeConfiguredProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeFocusConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeHomeScreenConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeSuggestionMetadata:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeTitleStyleConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeUserInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif