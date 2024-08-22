// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUTILITIES_H
#define TSUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSUtilities : NSObject



+(BOOL)inBuddy;
+(BOOL)isBackAllowed:(id)arg0 ;
+(BOOL)isDeviceLocked;
+(BOOL)isOnBootstrap;
+(BOOL)isPad;
+(BOOL)isSecureIntentUIRequired:(id)arg0 ;
+(BOOL)isWifiAvailable;
+(NSUInteger)odaPlans:(id)arg0 ;
+(NSUInteger)transferablePlans:(id)arg0 ;
+(id)_findPPRItem:(id)arg0 ;
+(id)backgroundColorForRemotePlan:(BOOL)arg0 ;
+(id)formattedPhoneNumber:(id)arg0 withCountryCode:(id)arg1 ;
+(id)getErrorTitleDetail:(id)arg0 forCarrier:(id)arg1 ;
+(id)preinstallPPRAlertControllerWithItems:(id)arg0 completion:(id)arg1 ;
+(id)productClass;
+(id)secureIntentAccessControlItem;
+(id)textColorForRemotePlan:(BOOL)arg0 ;
+(void)learnMoreWithURL:(id)arg0 ;


@end


#endif