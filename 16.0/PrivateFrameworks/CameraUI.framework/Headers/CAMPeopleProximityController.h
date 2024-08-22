// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPEOPLEPROXIMITYCONTROLLER_H
#define CAMPEOPLEPROXIMITYCONTROLLER_H

@class NSString, CNContactStore, NSSet;
@protocol CAMPeopleProximityScannerDelegate, CAMPeopleProximityControllerProtocol, CAMPeopleProximityDelegate, OS_dispatch_queue, CAMPeopleProximityScanner;

#import <Foundation/Foundation.h>


@interface CAMPeopleProximityController : NSObject <CAMPeopleProximityScannerDelegate, CAMPeopleProximityControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMPeopleProximityDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class proximityScannerClass; // ivar: _proximityScannerClass
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CNContactStore *queue_contactStore; // ivar: _queue_contactStore
@property (nonatomic) NSUInteger queue_discoveryState; // ivar: _queue_discoveryState
@property (nonatomic) BOOL queue_hasDiscoveredFirstPerson; // ivar: _queue_hasDiscoveredFirstPerson
@property (nonatomic) BOOL queue_hasDiscoveredFirstPersonNearby; // ivar: _queue_hasDiscoveredFirstPersonNearby
@property (retain, nonatomic) NSSet *queue_identities; // ivar: _queue_identities
@property (retain, nonatomic) NSObject<CAMPeopleProximityScanner> *queue_proximityScanner; // ivar: _queue_proximityScanner
@property (readonly) Class superclass;


-(BOOL)peopleProximityScanner:(id)arg0 shouldDiscoverIdentity:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)_queue_handleFinishedWaitingForScanner:(id)arg0 ;
-(void)_queue_startDiscoveryForIdentities:(id)arg0 ;
-(void)peopleProximityScanner:(id)arg0 didDiscoverIdentity:(id)arg1 distance:(NSUInteger)arg2 rssi:(NSInteger)arg3 ;
-(void)peopleProximityScanner:(id)arg0 didLoseIdentity:(id)arg1 ;
-(void)peopleProximityScannerDidStopDiscovery:(id)arg0 ;
-(void)startDiscoveryForIdentities:(id)arg0 ;
-(void)stopDiscovery;


@end


#endif