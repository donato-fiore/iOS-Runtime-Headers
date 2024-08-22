// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDUETEVENTMANAGER_H
#define HMDDUETEVENTMANAGER_H

@class HMFObject, NSNotificationCenter;
@protocol _CDAsyncLocalContext, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving, OS_dispatch_queue;



@interface HMDDuetEventManager : HMFObject

@property (readonly) NSObject<_CDAsyncLocalContext> *context; // ivar: _context
@property (readonly) NSObject<_DKKnowledgeEventStreamDeleting> *deleteStore; // ivar: _deleteStore
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<_DKKnowledgeQuerying> *queryStore; // ivar: _queryStore
@property (readonly) NSObject<_DKKnowledgeSaving> *saveStore; // ivar: _saveStore
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)eventStreamForType:(NSUInteger)arg0 ;
+(id)eventTypeAsString:(NSUInteger)arg0 ;
+(id)identifierForType:(NSUInteger)arg0 eventValue:(id)arg1 ;
-(id)dumpAllEvents;
-(id)dumpEventsOfType:(NSUInteger)arg0 fromDate:(id)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithSaveStore:(id)arg0 queryStore:(id)arg1 deleteStore:(id)arg2 clientContext:(id)arg3 notificationCenter:(id)arg4 workQueue:(id)arg5 ;
-(id)queryEventsOfType:(NSUInteger)arg0 fromDate:(id)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 ;
-(void)_handleAccessoryRemovedNotification:(id)arg0 ;
-(void)_handleActionSetEmptiedNotification:(id)arg0 ;
-(void)_handleHomeRemovedNotification:(id)arg0 ;
-(void)_handleServiceRemovedNotification:(id)arg0 ;
-(void)deleteEventsOfType:(NSUInteger)arg0 fromDate:(id)arg1 ;
-(void)resetAllEvents;


@end


#endif