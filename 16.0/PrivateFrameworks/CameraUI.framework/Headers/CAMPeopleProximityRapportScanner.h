// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPEOPLEPROXIMITYRAPPORTSCANNER_H
#define CAMPEOPLEPROXIMITYRAPPORTSCANNER_H

@class NSMutableDictionary, RPPeopleDiscovery, NSString;
@protocol CAMPeopleProximityScanner, CAMPeopleProximityScannerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMPeopleProximityRapportScanner : NSObject <CAMPeopleProximityScanner>



@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredIdentities; // ivar: __queue_discoveredIdentities
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredPersons; // ivar: __queue_discoveredPersons
@property (retain, nonatomic) RPPeopleDiscovery *_queue_peopleDiscovery; // ivar: __queue_peopleDiscovery
@property (nonatomic) unsigned int _queue_peopleDiscoverySessionID; // ivar: __queue_peopleDiscoverySessionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CAMPeopleProximityScannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScanning;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)_queue_shouldAdvertisePerson:(id)arg0 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_queue_discoveryActivatedWithError:(id)arg0 timeout:(CGFloat)arg1 peopleDiscoverySessionID:(unsigned int)arg2 ;
-(void)_queue_discoveryInterruptedWithPeopleDiscoverySessionID:(unsigned int)arg0 ;
-(void)_queue_discoveryInvalidatedWithPeopleDiscoverySessionID:(unsigned int)arg0 ;
-(void)_queue_discoveryPersonChanged:(id)arg0 withChangeFlags:(unsigned int)arg1 peopleDiscoverySessionID:(unsigned int)arg2 ;
-(void)_queue_discoveryPersonFound:(id)arg0 peopleDiscoverySessionID:(unsigned int)arg1 ;
-(void)_queue_discoveryPersonLost:(id)arg0 peopleDiscoverySessionID:(unsigned int)arg1 ;
-(void)_queue_discoveryTimeoutForSessionID:(unsigned int)arg0 ;
-(void)dealloc;
-(void)startDiscoveryWithScanRate:(NSUInteger)arg0 timeout:(CGFloat)arg1 ;
-(void)stopDiscovery;


@end


#endif