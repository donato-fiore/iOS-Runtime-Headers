// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUSERNOTIFICATION_H
#define AMSUSERNOTIFICATION_H

@class ACAccount, NSURL, NSArray, NSString, NSDictionary, NSDate, NSSet, NSMutableDictionary;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>

#import "AMSUserNotificationAction.h"

@interface AMSUserNotification : NSObject <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL anonymizeMetrics; // ivar: _anonymizeMetrics
@property (retain, nonatomic) NSURL *artworkUrl; // ivar: _artworkUrl
@property (retain, nonatomic) NSArray *buttonActions; // ivar: _buttonActions
@property (retain, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (retain, nonatomic) NSString *centerBundleIdentifier; // ivar: _centerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AMSUserNotificationAction *defaultAction; // ivar: _defaultAction
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL explicitContent; // ivar: _explicitContent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (nonatomic) NSInteger intent; // ivar: _intent
@property (nonatomic) NSUInteger interruptionLevel; // ivar: _interruptionLevel
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSDictionary *metricsEvent; // ivar: _metricsEvent
@property (retain, nonatomic) NSDate *scheduledTime; // ivar: _scheduledTime
@property (nonatomic) BOOL shouldSuppressDefaultAction; // ivar: _shouldSuppressDefaultAction
@property (retain, nonatomic) NSSet *subsections; // ivar: _subsections
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSURL *videoUrl; // ivar: _videoUrl


+(BOOL)_canParseNotificationWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
+(BOOL)shouldDeleteNotificationForPayload:(id)arg0 outIdentifier:(*id)arg1 scheduledOnly:(*BOOL)arg2 ;
+(BOOL)shouldHandleNotificationResponse:(id)arg0 ;
+(BOOL)shouldHandleServiceExtensionNotificationRequest:(id)arg0 ;
+(NSInteger)explicitEnabledForCenterBundleID:(id)arg0 ;
+(id)_cachedImagePathForIdentifier:(id)arg0 assetURL:(id)arg1 ;
+(id)_downloadAssetAtUrl:(id)arg0 withIdentifier:(id)arg1 logKey:(id)arg2 bag:(id)arg3 ;
+(id)_identifierFromPayload:(id)arg0 ;
+(id)_serverFriendlyFormatter;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)handleNotificationResponse:(id)arg0 bag:(id)arg1 ;
+(id)handleNotificationResponse:(id)arg0 bagContract:(id)arg1 ;
+(id)notificationCenter:(id)arg0 didChangeSettings:(id)arg1 bag:(id)arg2 ;
+(id)notificationCenter:(id)arg0 openSettingsForNotification:(id)arg1 bag:(id)arg2 ;
+(id)notificationWithPayload:(id)arg0 andConfig:(id)arg1 ;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;
+(void)handleServiceExtensionNotificationRequest:(id)arg0 bag:(id)arg1 withContentHandler:(id)arg2 ;
+(void)openAppUsingBundleIdentifier:(id)arg0 ;
-(id)_generatePayloadWithBase:(id)arg0 ;
-(id)createNSUserNotification;
-(id)createUNNotificationActions;
-(id)createUNNotificationContent;
-(id)createUNNotificationRequestFromContent:(id)arg0 ;
-(id)determineSelectedActionFromResponse:(id)arg0 error:(*id)arg1 ;
-(id)handleSelectedButton:(id)arg0 bag:(id)arg1 ;
-(id)handleSelectedButton:(id)arg0 bagContract:(id)arg1 ;
-(id)init;
-(id)initWithNSUserNotification:(id)arg0 ;
-(id)initWithPayload:(id)arg0 andConfig:(id)arg1 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 intent:(NSInteger)arg1 ;
-(id)initWithUNNotification:(id)arg0 ;
-(void)addButtonAction:(id)arg0 ;


@end


#endif