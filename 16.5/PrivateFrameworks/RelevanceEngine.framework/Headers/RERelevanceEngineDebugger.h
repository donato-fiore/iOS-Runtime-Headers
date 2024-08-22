// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RERELEVANCEENGINEDEBUGGER_H
#define RERELEVANCEENGINEDEBUGGER_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "RESingleton.h"
#import "REObserverStore.h"

@interface RERelevanceEngineDebugger : RESingleton {
    REObserverStore *_observerStore;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSArray *availableEngines;


-(BOOL)_isValidEngine:(id)arg0 ;
-(id)_init;
-(id)allRelevanceProviderValuesForEngine:(id)arg0 ;
-(id)dataSourceElementsForEngine:(id)arg0 ;
-(id)diagnosticLogsForEngine:(id)arg0 ;
-(id)engineWithName:(id)arg0 ;
-(id)firstEngine;
-(id)orderedElementsForEngine:(id)arg0 ;
-(void)_registerEngine:(id)arg0 ;
-(void)_unregisterEngine:(id)arg0 ;
-(void)reloadDataSourceForEngine:(id)arg0 ;


@end


#endif