// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INTENTSUTILITIES_H
#define INTENTSUTILITIES_H


#import <Foundation/Foundation.h>


@interface IntentsUtilities : NSObject



+(BOOL)isIntentsEnabledForAppId:(id)arg0 ;
+(id)_displayNameForApp:(id)arg0 ;
+(id)fetchEnabledAppIds;
+(void)intentsAppsWithCompletion:(id)arg0 ;
+(void)setAccess:(BOOL)arg0 appID:(id)arg1 ;


@end


#endif