// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSERVICEPROXY_H
#define SKSERVICEPROXY_H

@class NSLock, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SKServiceProxy : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}




+(id)inAppClientInterface;
+(id)inAppServiceInterface;
+(id)serviceProxy;
-(id)inAppService;
-(id)inAppServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)objectProxyWithErrorHandler:(id)arg0 ;
-(id)serviceConnection;
-(void)_serviceConnectionInvalidated;


@end


#endif