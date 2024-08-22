// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONAPPSIGNINDISCOVERY_H
#define AKAUTHORIZATIONAPPSIGNINDISCOVERY_H


#import <Foundation/Foundation.h>

#import "AKAuthorizationDaemonConnection.h"

@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection *_daemonConnection;
}




-(id)init;
-(void)dealloc;
-(void)startDiscoveryWithCompletion:(id)arg0 ;


@end


#endif