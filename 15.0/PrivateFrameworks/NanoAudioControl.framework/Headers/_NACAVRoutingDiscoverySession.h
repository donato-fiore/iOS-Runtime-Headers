// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NACAVROUTINGDISCOVERYSESSION_H
#define _NACAVROUTINGDISCOVERYSESSION_H

@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NACAVRoutingDiscoverySession : NSObject {
    *void _discoverySession;
    *void _callbackToken;
    NSObject<OS_dispatch_group> *_initialFetchGroup;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _initialFetchCompleted;
}




-(id)init;
-(void)dealloc;
-(void)fetchRouteForOriginIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif