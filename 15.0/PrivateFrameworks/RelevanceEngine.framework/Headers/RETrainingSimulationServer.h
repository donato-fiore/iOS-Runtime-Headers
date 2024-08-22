// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RETRAININGSIMULATIONSERVER_H
#define RETRAININGSIMULATIONSERVER_H

@class NSMutableSet, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, RETrainingSimulationServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REObserverStore.h"

@interface RETrainingSimulationServer : NSObject <NSXPCListenerDelegate, RETrainingSimulationServerInterface>

 {
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    REObserverStore *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_init;
// -(void)_safelyEnumerateObserversWithBlock:(id)arg0 observerAccessBlock:(unk)arg1 completion:(id)arg2  ;
-(void)addObserver:(id)arg0 ;
-(void)availableRelevanceEngines:(id)arg0 ;
-(void)availableRelevanceEnginesDidChange;
-(void)dealloc;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllElementsInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 createElementFromDescription:(id)arg1 completion:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 encodedObjectAtPath:(id)arg1 completion:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 performCommand:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 runActionOfElementWithDescription1:(id)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif