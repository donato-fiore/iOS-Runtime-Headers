// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSTOUCHDELIVERYOBSERVATIONSERVICE_H
#define BKSTOUCHDELIVERYOBSERVATIONSERVICE_H

@class BSServiceConnection, NSString, NSHashTable, NSMapTable, BSMutableIntegerMap;
@protocol BKSTouchDeliveryObserving_IPC, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKSTouchDeliveryObservationService : NSObject <BKSTouchDeliveryObserving_IPC>

 {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_touchClientQueue;
}


@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *generalObservers; // ivar: _generalObservers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *observersToTouchIdentifiers; // ivar: _observersToTouchIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) BSMutableIntegerMap *touchIdentifierToObserverLists; // ivar: _touchIdentifierToObserverLists


+(id)sharedInstance;
-(BOOL)_queue_addObserver:(id)arg0 forTouchIdentifier:(unsigned int)arg1 ;
-(BOOL)_queue_removeObserver:(id)arg0 forTouchIdentifier:(unsigned int)arg1 ;
-(id)_queue_observersForTouchIdentifier:(unsigned int)arg0 ;
-(id)init;
-(void)_connectToTouchDeliveryService;
-(void)_queue_removeObserversForTouchIdentifier:(unsigned int)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 forTouchIdentifier:(unsigned int)arg1 ;
-(void)dealloc;
-(void)observeTouchEventDeliveryDidOccur:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif