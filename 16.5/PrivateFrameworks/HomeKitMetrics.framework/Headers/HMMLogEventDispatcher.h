// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMLOGEVENTDISPATCHER_H
#define HMMLOGEVENTDISPATCHER_H

@class NSString, NSMapTable;
@protocol HMMLogEventDispatching, OS_dispatch_queue, HMMLogEventDispatchingDataSource;

#import <Foundation/Foundation.h>


@interface HMMLogEventDispatcher : NSObject <HMMLogEventDispatching>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (weak) NSObject<HMMLogEventDispatchingDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *observersByClass; // ivar: _observersByClass
@property (readonly, nonatomic) NSMapTable *observersByProtocol; // ivar: _observersByProtocol
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(id)_getOrCreateObserversForEventClass:(Class)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 forEventClass:(Class)arg1 ;
-(void)addObserver:(id)arg0 forEventClasses:(id)arg1 ;
-(void)addObserver:(id)arg0 forProtocol:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;


@end


#endif