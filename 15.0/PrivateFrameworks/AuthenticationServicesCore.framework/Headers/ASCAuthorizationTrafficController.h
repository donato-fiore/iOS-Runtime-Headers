// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCAUTHORIZATIONTRAFFICCONTROLLER_H
#define ASCAUTHORIZATIONTRAFFICCONTROLLER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASCAuthorizationTrafficController : NSObject {
    NSMutableSet *_appsWithActiveRequests;
    NSObject<OS_dispatch_queue> *_clearanceQueue;
    NSObject<OS_dispatch_queue> *_trafficQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)beginAuthorizationForApplicationIdentifier:(id)arg0 withClearanceHandler:(id)arg1 ;
-(void)cancelAuthorizationForAppIdentifierIfNecessary:(id)arg0 ;
-(void)endAuthorizationForAppIdentifier:(id)arg0 clearanceHandler:(id)arg1 ;


@end


#endif