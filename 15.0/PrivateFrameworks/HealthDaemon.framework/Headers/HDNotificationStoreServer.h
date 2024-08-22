// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDNOTIFICATIONSTORESERVER_H
#define HDNOTIFICATIONSTORESERVER_H

@class NSString;
@protocol HKNotificationStoreServer;


#import "HDStandardTaskServer.h"
#import "HDNotificationManager.h"

@interface HDNotificationStoreServer : HDStandardTaskServer <HKNotificationStoreServer>

 {
    HDNotificationManager *_notificationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchBadgeForDomain:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_postCompanionUserNotificationOfType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_postNotificationWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)remote_setBadge:(id)arg0 forDomain:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif