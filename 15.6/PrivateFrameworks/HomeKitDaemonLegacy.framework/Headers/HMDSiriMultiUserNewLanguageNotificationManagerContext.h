// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIRIMULTIUSERNEWLANGUAGENOTIFICATIONMANAGERCONTEXT_H
#define HMDSIRIMULTIUSERNEWLANGUAGENOTIFICATIONMANAGERCONTEXT_H

@class HMFObject, NSString, NSArray;
@protocol HMFLogging, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate, OS_dispatch_queue;


#import "HMDUser.h"

@interface HMDSiriMultiUserNewLanguageNotificationManagerContext : HMFObject <HMFLogging>



@property (readonly, getter=isRMVEnabledForCurrentUser) BOOL RMVEnabledForCurrentUser;
@property BOOL cachedHasCurrentUserSeenNotification; // ivar: _cachedHasCurrentUserSeenNotification
@property (readonly) NSString *currentDeviceSiriLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasCurrentUserSeenNotification;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *mediaAccessories;
@property (readonly) Class superclass;
@property (readonly, weak) HMDUser *user; // ivar: _user
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)userReadableLanguageFromCode:(id)arg0 ;
-(id)initWithUser:(id)arg0 workQueue:(id)arg1 ;
-(id)siriLanguageForMediaAccessory:(id)arg0 ;
-(id)siriLanguagesRequiringNotificationForVersion:(id)arg0 ;
-(void)configure;
-(void)handleMediaAccessorySoftwareVersionUpdated:(id)arg0 ;
-(void)setCurrentUserHasSeenNotification;
-(void)showNotificationForNewlySupportedLanguage:(id)arg0 ;
-(void)submitLogEventForShownNotificationWithLanguage:(id)arg0 ;


@end


#endif