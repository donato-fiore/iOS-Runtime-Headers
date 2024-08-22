// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDBREACHNOTIFICATIONMANAGER_H
#define WBSPASSWORDBREACHNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter;

#import <Foundation/Foundation.h>

#import "WBSPasswordWarningTopFraudTargetsManager.h"

@interface WBSPasswordBreachNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
}




+(BOOL)_highLevelDomain:(id)arg0 isIncludedInTopFraudTargets:(id)arg1 ;
+(NSUInteger)_bodyStyleForTopFraudTargetDomains:(id)arg0 sensitiveDomains:(id)arg1 passwordsCount:(NSUInteger)arg2 ;
+(id)_bodyForHighLevelDomains:(id)arg0 deviceClass:(int)arg1 topFraudTargets:(id)arg2 ;
+(id)_bodyForSavedPasswords:(id)arg0 withTopFraudTargets:(id)arg1 ;
-(id)_contentWithSavedPasswords:(id)arg0 topFraudTargets:(id)arg1 ;
-(id)_titleForSavedPasswords:(id)arg0 ;
-(id)init;
-(void)addBreachNotificationForSavedPasswords:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif