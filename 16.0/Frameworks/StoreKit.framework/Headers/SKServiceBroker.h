// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)init;
-(id)storeKitService;
-(id)storeKitServiceWithErrorHandler:(id)arg0 ;
-(id)storeKitSynchronousService;
-(id)storeKitSynchronousServiceWithErrorHandler:(id)arg0 ;
-(void)_serviceConnectionInvalidated;


@end


#endif