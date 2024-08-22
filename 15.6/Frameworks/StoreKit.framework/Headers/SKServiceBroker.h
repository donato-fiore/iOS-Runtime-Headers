// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSERVICEBROKER_H
#define SKSERVICEBROKER_H

@class NSLock, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}




+(id)_serviceConnectionWithName:(id)arg0 ;
+(id)_storeKitClientInterface;
+(id)_storeKitServiceInterface;
+(id)defaultBroker;
-(id)_serviceConnection;
-(id)asdStoreKitService;
-(id)asdStoreKitServiceWithErrorHandler:(id)arg0 ;
-(id)asdStoreKitSynchronousService;
-(id)asdStoreKitSynchronousServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_serviceConnectionInvalidated;


@end


#endif