// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHRECORDSDAEMONCONNECTION_H
#define HKHEALTHRECORDSDAEMONCONNECTION_H

@class _HKXPCConnection, NSString;
@protocol _HKXPCExportable, HKProxyProviderSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKHealthRecordsDaemonConnection : NSObject <_HKXPCExportable, HKProxyProviderSource>

 {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy, nonatomic) NSString *daemonLaunchDarwinNotificationName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedConnection;
-(id)exportedInterface;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)dealloc;
// -(void)fetchEndpointForServiceIdentifier:(id)arg0 endpointHandler:(id)arg1 errorHandler:(unk)arg2  ;


@end


#endif