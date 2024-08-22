// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASACCOUNTMANAGERTIPMANAGER_H
#define _ASACCOUNTMANAGERTIPMANAGER_H


#import <Foundation/Foundation.h>


@interface _ASAccountManagerTipManager : NSObject



+(BOOL)_hasAcknowledgedTip:(NSInteger)arg0 ;
+(id)_defaultKeyForTipType:(NSInteger)arg0 ;
+(id)_refreshDateForTip:(NSInteger)arg0 ;
+(void)_acknowledgeTip:(NSInteger)arg0 ;
+(void)_checkEligibilityForiCloudKeychainTipWithCompletionHandler:(id)arg0 ;
+(void)fetchTipToShow:(id)arg0 ;
+(void)userDidAcknowledgeTip:(NSInteger)arg0 ;


@end


#endif