// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWIDGETCACHE_H
#define WFWIDGETCACHE_H

@class NSString, NSMutableDictionary;
@protocol WFObservableResultObserver, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFWidgetWorkflowRequestQueue.h"

@interface WFWidgetCache : NSObject <WFObservableResultObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) WFWidgetWorkflowRequestQueue *requestQueue; // ivar: _requestQueue
@property (readonly, nonatomic) NSMutableDictionary *resultsByIdentifier; // ivar: _resultsByIdentifier
@property (readonly) Class superclass;


+(id)sharedCache;
-(id)init;
-(id)widgetWorkflowWithIdentifier:(id)arg0 ;
-(id)widgetWorkflowsInCollectionWithIdentifier:(id)arg0 limit:(NSUInteger)arg1 ;
-(void)addDefaultShortcutsIfNecessary:(id)arg0 ;
-(void)observableResultDidChange:(id)arg0 ;
-(void)queue_getWidgetWorkflowWithIdentifier:(id)arg0 ;
-(void)queue_getWidgetWorkflowsInCollectionWithIdentifier:(id)arg0 limit:(NSUInteger)arg1 ;
-(void)queue_notifyObserversOfChange:(id)arg0 forIdentifier:(id)arg1 ;
-(void)queue_storeAndNotifyWithResult:(id)arg0 forIdentifier:(id)arg1 resultsLimit:(NSUInteger)arg2 ;


@end


#endif