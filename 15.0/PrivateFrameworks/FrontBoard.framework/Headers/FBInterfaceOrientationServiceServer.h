// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBINTERFACEORIENTATIONSERVICESERVER_H
#define FBINTERFACEORIENTATIONSERVICESERVER_H

@class FBSServiceFacility, NSMutableSet;
@protocol OS_dispatch_queue;



@interface FBInterfaceOrientationServiceServer : FBSServiceFacility {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_interestedClients;
    NSInteger _interfaceOrientation;
    NSUInteger _sequenceNumber;
}




-(id)_prerequisiteMilestones;
-(id)init;
-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 ;
-(void)_queue_handleRegisterOrientationInterest:(id)arg0 fromClient:(id)arg1 ;
-(void)_queue_handleRequestActiveOrientation:(id)arg0 fromClient:(id)arg1 ;
-(void)_queue_updateInterest:(unsigned int)arg0 forClient:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg0 withMessage:(id)arg1 ;
-(void)noteClientDidDisconnect:(id)arg0 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 animationSettings:(id)arg1 direction:(NSInteger)arg2 ;


@end


#endif