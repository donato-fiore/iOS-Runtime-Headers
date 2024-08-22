// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIUSERACTIONCACHEKEYGENERATOR_H
#define CNUIUSERACTIONCACHEKEYGENERATOR_H


#import <Foundation/Foundation.h>


@interface CNUIUserActionCacheKeyGenerator : NSObject



+(NSUInteger)propertiesForActionType:(id)arg0 ;
+(id)descriptionOfActionType:(id)arg0 ;
+(id)fingerprintOfEmailAddresses:(id)arg0 ;
+(id)fingerprintOfInstantMessageAddresses:(id)arg0 ;
+(id)fingerprintOfPhoneNumbers:(id)arg0 ;
+(id)fingerprintOfPostalAddresses:(id)arg0 ;
+(id)fingerprintOfSocialProfiles:(id)arg0 ;
+(id)handlesForActionType:(id)arg0 contact:(id)arg1 ;
+(id)keyForContact:(id)arg0 actionType:(id)arg1 ;
+(id)os_log;


@end


#endif