// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDISPATCHER_H
#define CKVDISPATCHER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, CKVAdminServiceProvider;

#import <Foundation/Foundation.h>

#import "CKVDonateConnectionFactory.h"
#import "CKVSettings.h"
#import "CKVTaskHandler.h"
#import "CKVDonationManager.h"

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CKVDonateConnectionFactory *_donateConnectionFactory;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    CKVSettings *_settings;
    CKVTaskHandler *_taskHandler;
    CKVDonationManager *_donationManager;
}


@property (readonly, nonatomic) NSXPCListener *adminServiceListener; // ivar: _adminServiceListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListener *donateServiceListener; // ivar: _donateServiceListener
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDispatcher;
-(BOOL)_adminServiceShouldAcceptNewConnection:(id)arg0 ;
-(BOOL)_donateServiceShouldAcceptNewConnection:(id)arg0 ;
-(BOOL)handleDarwinNotificationEventWithName:(id)arg0 ;
-(BOOL)handleDistributedNotificationEventWithName:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_listenerWithMachServiceName:(id)arg0 delegate:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 donateConnectionFactory:(id)arg1 adminServiceProvider:(id)arg2 taskHandler:(id)arg3 settings:(id)arg4 ;
-(void)registerXPCActivities;
-(void)runIndexMaintenance:(id)arg0 ;
-(void)runPostOSInstallMigration:(id)arg0 ;
-(void)setupXPCListeners;


@end


#endif