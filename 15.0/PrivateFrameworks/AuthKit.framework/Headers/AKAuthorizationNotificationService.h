// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)_configureNotificationService;
-(void)_configureStateBroadcastService;
-(void)startWithNotificationHandler:(id)arg0 ;
-(void)startWithStateBroadcastHandler:(id)arg0 ;


@end


#endif