// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSAMPLETYPEUPDATECONTROLLER_H
#define HKSAMPLETYPEUPDATECONTROLLER_H

@class HKHealthStore, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HKSampleTypeUpdateController : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_outstandingQueriesByType;
    NSMutableDictionary *_queryStatesByType;
    NSMutableDictionary *_observersByType;
    BOOL _applicationIsInBackground;
}




-(BOOL)_isHighFrequencyDataType:(id)arg0 ;
-(BOOL)_typeRequiresNewQuery:(id)arg0 ;
-(BOOL)isQueryStateRunningForType:(id)arg0 ;
-(NSInteger)_queryStateForType:(id)arg0 ;
-(id)_allObservedTypes;
-(id)_failedQuerySampleTypes;
-(id)_observersForType:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_applicationMovingToBackground:(id)arg0 ;
-(void)_applicationMovingToForeground:(id)arg0 ;
-(void)_callObservers:(id)arg0 withType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;
-(void)_createQueryForType:(id)arg0 ;
-(void)_errorRecoveryCallbacksForType:(id)arg0 ;
-(void)_handleHighFrequencyObserverCallbacksForType:(id)arg0 ;
-(void)_handleQueryCallbackForType:(id)arg0 samplesAdded:(id)arg1 objectsDeleted:(id)arg2 error:(id)arg3 ;
-(void)_handleQueryErrorForType:(id)arg0 error:(id)arg1 ;
-(void)_handleQuerySuccessForType:(id)arg0 samplesAdded:(id)arg1 objectsRemoved:(id)arg2 ;
-(void)_removeQueryForType:(id)arg0 queryState:(NSInteger)arg1 ;
-(void)_resumeFailedQueries;
-(void)_setQueryState:(NSInteger)arg0 forType:(id)arg1 ;
-(void)addObserver:(id)arg0 forType:(id)arg1 ;
-(void)removeObserver:(id)arg0 forType:(id)arg1 ;


@end


#endif