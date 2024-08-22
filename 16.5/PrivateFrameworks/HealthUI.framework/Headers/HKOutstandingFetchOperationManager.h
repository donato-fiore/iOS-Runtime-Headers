// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOUTSTANDINGFETCHOPERATIONMANAGER_H
#define HKOUTSTANDINGFETCHOPERATIONMANAGER_H

@class NSMutableArray, NSString;
@protocol HKFetchOperationDelegate;

#import <Foundation/Foundation.h>


@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate>

 {
    BOOL _needsRebalanceFetchOperations;
    NSMutableArray *_pendingNormalPriorityFetchOperations;
    NSMutableArray *_pendingHighPriorityFetchOperations;
    NSMutableArray *_activeFetchOperations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxConcurrentFetchOperations; // ivar: _maxConcurrentFetchOperations
@property (readonly) Class superclass;


+(id)sharedOperationManager;
+(void)setSharedOperationManager:(id)arg0 ;
-(BOOL)_noHighPriorityActiveOperations;
-(BOOL)_removeFetchOperationFromActiveOperations:(id)arg0 ;
-(BOOL)_removeFetchOperationFromPendingOperations:(id)arg0 ;
-(id)initWithMaxConcurrentFetchOperations:(NSInteger)arg0 ;
-(void)_executeFetchOperation:(id)arg0 ;
-(void)_fillActiveFetchOperations;
-(void)_logOperationCompletion:(id)arg0 ;
-(void)_logOperationStart:(id)arg0 ;
-(void)_rebalanceFetchOperations;
-(void)_setNeedsRebalanceFetchOperations;
-(void)addFetchOperation:(id)arg0 ;
-(void)addFetchOperations:(id)arg0 ;
-(void)fetchOperationDidUpdatePriority:(id)arg0 ;
-(void)removeFetchOperation:(id)arg0 ;
-(void)removeFetchOperations:(id)arg0 ;


@end


#endif