// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSDUETDATAPROVIDER_H
#define TPSDUETDATAPROVIDER_H

@class _CDClientContext, NSMutableDictionary;
@protocol _DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSDuetDataProvider : NSObject {
    id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *_systemStore;
    id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *_userStore;
    _CDClientContext *_context;
    NSMutableDictionary *_contextualRegistrations;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}


@property (readonly, nonatomic) NSObject<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *systemStore;
@property (readonly, nonatomic) NSObject<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *userStore;


-(BOOL)deregisterWakingForAllRegistrations;
-(BOOL)deregisterWakingForRegistrationID:(id)arg0 ;
-(BOOL)registerWakingForPredicate:(id)arg0 registrationID:(id)arg1 clientIdentifier:(id)arg2 callback:(id)arg3 ;
-(id)_executeQueryWithPredicate:(id)arg0 streams:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 userStore:(BOOL)arg4 deviceIDs:(id)arg5 error:(*id)arg6 ;
-(id)_executeQueryWithPredicate:(id)arg0 streams:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 userStore:(BOOL)arg4 error:(*id)arg5 ;
-(id)_initWithDirectory:(id)arg0 ;
-(id)_initWithStore:(id)arg0 context:(id)arg1 ;
-(id)init;
-(void)_deregisterWakingDuetRegistration:(id)arg0 ;
-(void)_executeHistogramQueryWithPredicate:(id)arg0 stream:(id)arg1 interval:(id)arg2 groupByKeyPaths:(id)arg3 userStore:(BOOL)arg4 completion:(id)arg5 ;
-(void)_executeQueryWithPredicate:(id)arg0 streams:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 userStore:(BOOL)arg4 deviceIDs:(id)arg5 withCompletion:(id)arg6 ;
-(void)_executeQueryWithPredicate:(id)arg0 streams:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 userStore:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)countsForPredicate:(id)arg0 stream:(id)arg1 interval:(id)arg2 groupByKeyPaths:(id)arg3 userStore:(BOOL)arg4 completion:(id)arg5 ;
-(void)deleteEvents:(id)arg0 userStore:(BOOL)arg1 completion:(id)arg2 ;
-(void)deleteEventsWithPredicate:(id)arg0 streams:(id)arg1 userStore:(BOOL)arg2 completion:(id)arg3 ;
-(void)observationDatesForPredicate:(id)arg0 streams:(id)arg1 limit:(NSUInteger)arg2 userStore:(BOOL)arg3 completion:(id)arg4 ;
-(void)observationDatesForPredicate:(id)arg0 streams:(id)arg1 limit:(NSUInteger)arg2 userStore:(BOOL)arg3 deviceIDs:(id)arg4 completion:(id)arg5 ;
-(void)saveEvents:(id)arg0 userStore:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif