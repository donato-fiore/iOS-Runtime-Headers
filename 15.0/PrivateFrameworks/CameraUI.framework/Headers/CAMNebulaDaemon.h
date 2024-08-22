// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMNEBULADAEMON_H
#define CAMNEBULADAEMON_H

@class NSMutableArray, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate, CAMPersistenceResultDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CAMNebulaIrisBackendController.h"
#import "CAMNebulaKeepAliveController.h"
#import "CAMPersistenceController.h"
#import "CAMTimelapseBackendController.h"

@interface CAMNebulaDaemon : NSObject <NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate, CAMPersistenceResultDelegate>



@property (readonly, nonatomic) NSMutableArray *_connections; // ivar: __connections
@property (readonly, nonatomic) CAMNebulaIrisBackendController *_irisBackendController; // ivar: __irisBackendController
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController; // ivar: __keepAliveController
@property (readonly, nonatomic) NSXPCListener *_listener; // ivar: __listener
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController; // ivar: __persistenceController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: __queue
@property (readonly, nonatomic) CAMTimelapseBackendController *_timelapseBackendController; // ivar: __timelapseBackendController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)allowedProtocolForClientAccess:(id)arg0 ;
-(id)init;
-(void)daemonConnectionManagerHasBeenDisconnected:(id)arg0 ;
-(void)performPendingWorkAfterDelay:(CGFloat)arg0 ;
-(void)persistenceController:(id)arg0 didGenerateVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;


@end


#endif