// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSXPCSERVICECONNECTIONPEER_H
#define BSXPCSERVICECONNECTIONPEER_H

@class NSMutableDictionary, NSMutableSet, BSProcessHandle, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_entitlements;
    NSMutableSet *_lock_connections;
    NSUInteger _lock_lastConnectedGenerationCount;
    BSProcessHandle *_processHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif