// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONNOTIFICATIONSERVICE_H
#define AKAUTHORIZATIONNOTIFICATIONSERVICE_H

@class NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>

#import "AKAdaptiveService.h"

@interface AKAuthorizationNotificationService : NSObject {
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}




+(id)_sharedService;
+(void)startServiceWithNotificationHandler:(id)arg0 ;
+(void)startServiceWithStateBroadcastHandler:(id)arg0 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(void)_configureNotificationServiceWithCompletion:(id)arg0 ;
-(void)_configureStateBroadcastServiceWithCompletion:(id)arg0 ;
-(void)startWithNotificationHandler:(id)arg0 completion:(id)arg1 ;
-(void)startWithStateBroadcastHandler:(id)arg0 completion:(id)arg1 ;


@end


#endif