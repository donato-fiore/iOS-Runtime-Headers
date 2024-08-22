// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDBREACHNOTIFICATIONMANAGER_H
#define WBSPASSWORDBREACHNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter, WBSPasswordWarningTopFraudTargetsManager;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
}




+(BOOL)_highLevelDomain:(id)arg0 isIncludedInTopFraudTargets:(id)arg1 ;
+(NSUInteger)_bodyStyleForTopFraudTargetDomains:(id)arg0 sensitiveDomains:(id)arg1 passwordsCount:(NSUInteger)arg2 ;
+(id)_bodyForHighLevelDomains:(id)arg0 deviceClass:(int)arg1 topFraudTargets:(id)arg2 ;
+(id)_bodyForSavedAccounts:(id)arg0 withTopFraudTargets:(id)arg1 ;
-(id)_contentWithSavedAccounts:(id)arg0 topFraudTargets:(id)arg1 ;
-(id)_titleForSavedAccounts:(id)arg0 ;
-(id)init;
-(void)addBreachNotificationForSavedAccounts:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif