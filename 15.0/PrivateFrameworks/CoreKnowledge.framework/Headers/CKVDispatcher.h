// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDISPATCHER_H
#define CKVDISPATCHER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, CKVDonateServiceProvider, CKVAdminServiceProvider, CKVDonateTaskProvider;

#import <Foundation/Foundation.h>

#import "CKVSettings.h"
#import "CKVTaskHandler.h"

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonateServiceProvider> *_donateServiceProvider;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    NSObject<CKVDonateTaskProvider> *_donateTaskProvider;
    CKVSettings *_settings;
    CKVTaskHandler *_taskHandler;
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
-(id)initWithQueue:(id)arg0 donateServiceProvider:(id)arg1 adminServiceProvider:(id)arg2 taskHandler:(id)arg3 settings:(id)arg4 ;
-(void)registerXPCActivities;
-(void)runIndexMaintenance:(id)arg0 ;
-(void)runPostOSInstallMigration:(id)arg0 ;
-(void)setupXPCListeners;


@end


#endif