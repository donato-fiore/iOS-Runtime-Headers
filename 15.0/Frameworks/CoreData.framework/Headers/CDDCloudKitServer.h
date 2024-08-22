// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDCLOUDKITSERVER_H
#define CDDCLOUDKITSERVER_H

@class NSError, NSString, NSXPCListener, CKScheduler;
@protocol NSXPCListenerDelegate, CDDCloudKitServerProxy, _PFCoreDataCloudKitServer, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NSPersistentContainer.h"
#import "CDDCloudKitServerConfiguration.h"
#import "PFCloudKitContainerProvider.h"

@interface CDDCloudKitServer : NSObject <NSXPCListenerDelegate, CDDCloudKitServerProxy, _PFCoreDataCloudKitServer>

 {
    BOOL _initialized;
    NSPersistentContainer *_metadataContainer;
    NSObject<OS_dispatch_group> *_initializationGroup;
    NSError *_lastInitializationError;
}


@property (readonly, copy, nonatomic) CDDCloudKitServerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PFCloudKitContainerProvider *containerProvider; // ivar: _containerProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) CKScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithListener:(id)arg0 configuration:(id)arg1 ;
-(void)dealloc;
-(void)finishedActivity:(id)arg0 withResult:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)handleMessage:(id)arg0 reply:(id)arg1 ;
-(void)setUp;
-(void)tearDown;


@end


#endif