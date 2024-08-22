// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTURLACCESSPROVIDER_H
#define GTURLACCESSPROVIDER_H

@class NSMutableDictionary, NSUUID;
@protocol GTURLAccessProvider, OS_os_log, GTRemoteConnectionProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GTURLAccessProvider : NSObject <GTURLAccessProvider>

 {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_registeredURLs;
    NSUUID *_deviceUUID;
    id<GTRemoteConnectionProvider> *_remoteConnectionProvider;
    NSObject<OS_dispatch_queue> *_urlProviderQueue;
}




-(id)initWithDeviceUUID:(id)arg0 remoteConnectionProvider:(id)arg1 ;
-(id)makeURL:(id)arg0 ;
-(id)urlForPath:(id)arg0 ;
-(void)securityScopedURLFromSandboxID:(id)arg0 completionHandler:(id)arg1 ;
-(void)transferIdentifier:(id)arg0 fromDevice:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif