// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKUSAGENOTIFICATIONSERVER_H
#define PKUSAGENOTIFICATIONSERVER_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface;

#import <Foundation/Foundation.h>


@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface>

 {
    os_unfair_lock_s _lock;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)initializeUsageNotificationServer;
-(void)notifyPassUsed:(id)arg0 fromSource:(NSInteger)arg1 ;
-(void)notifyPaymentPassUsedWithTransactionInfo:(id)arg0 ;
-(void)serviceResumed;
-(void)serviceSuspended;


@end


#endif