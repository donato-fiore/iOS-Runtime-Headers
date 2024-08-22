// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPUSHPARSABLEFOLLOWUP_H
#define AMSPUSHPARSABLEFOLLOWUP_H

@class NSString;
@protocol AMSPushParsable, AMSUserNotificationIntentDelegate, AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSPushParsableFollowUp : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate, AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldAllowFollowUp:(id)arg0 bag:(id)arg1 ;
+(BOOL)_shouldClearFollowUpFromPayload:(id)arg0 ;
+(BOOL)isDeviceOfferNotification:(id)arg0 ;
+(BOOL)shouldSkipAccountCheck;
+(id)_createFollowUpItemFromNotification:(id)arg0 ;
+(id)_createFollowUpItemFromPayload:(id)arg0 ;
+(id)_createNotificationFromFollowUpItem:(id)arg0 ;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)sharedISO8601DateFormatter;
+(void)_performClearWithPayload:(id)arg0 ;
+(void)_performPostWithPayload:(id)arg0 bag:(id)arg1 ;
+(void)handleNotificationPayload:(id)arg0 config:(id)arg1 bag:(id)arg2 ;
+(void)removeDeviceOfferWithPayload:(id)arg0 logKey:(id)arg1 bag:(id)arg2 ;
+(void)userNotification:(id)arg0 selectedButtonAction:(id)arg1 bag:(id)arg2 ;


@end


#endif