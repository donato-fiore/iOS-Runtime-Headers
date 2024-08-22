// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NACENDPOINTOBSERVER_H
#define NACENDPOINTOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_NACAVRoutingDiscoverySession.h"

@interface NACEndpointObserver : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    _NACAVRoutingDiscoverySession *_nacDiscoverySession;
}




+(id)sharedObserver;
-(id)init;
-(void)fetchRouteForOriginIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)invalidateDiscoverySession;


@end


#endif