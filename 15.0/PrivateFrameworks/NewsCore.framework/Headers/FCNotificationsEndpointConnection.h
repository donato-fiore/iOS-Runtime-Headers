// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCNOTIFICATIONSENDPOINTCONNECTION_H
#define FCNOTIFICATIONSENDPOINTCONNECTION_H

@class NSURL, NSString;
@protocol FCCoreConfigurationObserving, FCBundleSubscriptionManagerType, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>

#import "FCEndpointConnection.h"
#import "FCFileCoordinatedNotificationDropbox.h"
#import "FCAsyncSerialQueue.h"

@interface FCNotificationsEndpointConnection : NSObject <FCCoreConfigurationObserving>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSObject<FCBundleSubscriptionManagerType> *bundleSubscriptionManager; // ivar: _bundleSubscriptionManager
@property (retain, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceOSVersion; // ivar: _deviceOSVersion
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (retain, nonatomic) FCEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (retain, nonatomic) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox; // ivar: _fileCoordinatedNotificationDropbox
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)_deviceInfoWithDeviceToken:(id)arg0 deviceDigestMode:(int)arg1 ;
-(id)_marketingSubscriptionRequestWithType:(int)arg0 action:(int)arg1 dsid:(id)arg2 ;
-(id)_notificationDataInDropbox;
-(id)_notificationEntitiesWithChannelIDs:(id)arg0 isPaid:(BOOL)arg1 paidBundleSubscriptionStatus:(NSUInteger)arg2 editorialChannelID:(id)arg3 ;
-(id)_notificationEntitiyWithChannelIDs:(id)arg0 isPaid:(BOOL)arg1 paidBundleSubscriptionStatus:(NSUInteger)arg2 notificationType:(int)arg3 ;
-(id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg0 paidChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5 ;
-(id)initWithBaseURLString:(id)arg0 ;
-(id)initWithConfigurationManager:(id)arg0 bundleSubscriptionManager:(id)arg1 ;
-(id)initWithEndpointConnection:(id)arg0 configurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2 ;
-(int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(NSUInteger)arg0 ;
-(void)_sendNotificationsSubscriptionRequest:(id)arg0 pathComponent:(id)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(void)_updateNotificationDropboxDataWithBaseURL:(id)arg0 notificationUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4 ;
-(void)configurationManager:(id)arg0 configurationDidChange:(id)arg1 ;
-(void)modifyMarketingSubscriptionWithType:(int)arg0 action:(int)arg1 dsid:(id)arg2 callbackQueue:(id)arg3 completion:(id)arg4 ;
-(void)refreshNotificationsForChannelIDs:(id)arg0 paidChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5 callbackQueue:(id)arg6 completion:(id)arg7 ;
-(void)registerDeviceWithUserID:(id)arg0 deviceToken:(id)arg1 storefrontID:(id)arg2 deviceDigestMode:(int)arg3 callbackQueue:(id)arg4 completion:(id)arg5 ;
-(void)subscribeNotificationsForChannelIDs:(id)arg0 paidChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5 callbackQueue:(id)arg6 completion:(id)arg7 ;
-(void)unregisterDeviceWithUserID:(id)arg0 deviceToken:(id)arg1 storefrontID:(id)arg2 deviceDigestMode:(int)arg3 callbackQueue:(id)arg4 completion:(id)arg5 ;
-(void)unsubscribeNotificationsForChannelIDs:(id)arg0 userID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4 callbackQueue:(id)arg5 completion:(id)arg6 ;
-(void)updateBaseURL:(id)arg0 ;


@end


#endif