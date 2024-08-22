// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSERVICEFACILITY_H
#define FBSSERVICEFACILITY_H

@class NSSet, NSMutableSet, NSString;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "FBSSerialQueue.h"

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable>

 {
    NSSet *_prerequisiteMilestones;
    NSMutableSet *_clients;
    NSSet *_clients_immutable;
    os_unfair_lock_s _clients_immutable_lock;
    BOOL _invalidated;
}


@property (readonly, nonatomic) NSSet *_prerequisiteMilestones;
@property (readonly, nonatomic) NSSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) FBSSerialQueue *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)queue_clientDidConnect:(id)arg0 withMessage:(id)arg1 ;
-(BOOL)shouldAllowClientConnection:(id)arg0 withMessage:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;
-(void)noteClientDidConnect:(id)arg0 withMessage:(id)arg1 ;
-(void)noteClientDidDisconnect:(id)arg0 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;
-(void)queue_clientDidDisconnect:(id)arg0 ;
-(void)queue_handleMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;
-(void)sendMessage:(id)arg0 withType:(NSInteger)arg1 toClients:(id)arg2 ;


@end


#endif