// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMCUICLOUDNOTIFICATIONACCOUNTDATASOURCE_H
#define NMCUICLOUDNOTIFICATIONACCOUNTDATASOURCE_H

@class NSNumber, NPSDomainAccessor, NSArray, NSMutableSet, NPSManager;
@protocol NMCUIAccountDataSource;

#import <Foundation/Foundation.h>


@interface NMCUICloudNotificationAccountDataSource : NSObject

@property (retain, nonatomic) NSObject<NMCUIAccountDataSource> *accountDataSource; // ivar: _accountDataSource
@property (nonatomic) BOOL cloudNotificationsEnabled;
@property (retain, nonatomic) NSNumber *deviceSupportsPCC; // ivar: _deviceSupportsPCC
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (retain) NSArray *notificationSubsections; // ivar: _notificationSubsections
@property (retain, nonatomic) NSMutableSet *pendingAccountIds; // ivar: _pendingAccountIds
@property (nonatomic) BOOL showsAlerts; // ivar: _showsAlerts
@property (retain, nonatomic) NPSManager *syncManager; // ivar: _syncManager


+(BOOL)accountHasCredentials:(id)arg0 ;
+(BOOL)accountSupportsNotifications:(id)arg0 ;
+(BOOL)accountSupportsNotifications:(id)arg0 forceEnabled:(BOOL)arg1 ;
-(BOOL)accountIsPending:(id)arg0 ;
-(BOOL)accountShowsAlerts:(id)arg0 ;
-(BOOL)deviceSupportsCloudNotifications;
-(BOOL)shouldPromptToEnableNotifications:(id)arg0 ;
-(id)_emailAddressFromJWTToken:(id)arg0 error:(*id)arg1 ;
-(id)_ensureValidBase64String:(id)arg0 ;
-(id)_getValueForKey:(id)arg0 ;
-(id)accounts;
-(id)accountsRequiringCredentials;
-(id)initWithAccountDataSource:(id)arg0 ;
-(void)_displayFailedToSaveAlertShouldDismiss:(BOOL)arg0 viewController:(id)arg1 ;
-(void)_handleDidUnpair;
-(void)_handlePairedDeviceChanged;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)handleAccountAuthenication:(id)arg0 viewController:(id)arg1 stateUpdateHandler:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)saveCredential:(id)arg0 emailAddress:(id)arg1 forAccount:(id)arg2 completion:(id)arg3 ;
-(void)savePCCCredentialForAccount:(id)arg0 identity:(id)arg1 viewController:(id)arg2 stateUpdateHandler:(id)arg3 ;


@end


#endif