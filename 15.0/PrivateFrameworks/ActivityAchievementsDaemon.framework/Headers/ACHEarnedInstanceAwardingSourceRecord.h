// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHEARNEDINSTANCEAWARDINGSOURCERECORD_H
#define ACHEARNEDINSTANCEAWARDINGSOURCERECORD_H

@class NSOperationQueue, NSDateInterval, NSDictionary, NSArray, NSString, NSDate;
@protocol ACHDataStorePropertyProviding, OS_dispatch_queue, ACHEarnedInstanceAwarding;

#import <Foundation/Foundation.h>

#import "ACHDataStore.h"
#import "ACHEarnedInstanceStore.h"

@interface ACHEarnedInstanceAwardingSourceRecord : NSObject <ACHDataStorePropertyProviding>

 {
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDateInterval *_lastScheduledEvaluationInterval;
    NSDateInterval *_lastCompletedEvaluationInterval;
}


@property (retain, nonatomic) NSDictionary *dataStoreProperties;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateInterval *lastCompletedEvaluationInterval;
@property (readonly, nonatomic) NSDateInterval *lastScheduledEvaluationInterval;
@property (readonly, nonatomic) NSDate *registrationDate; // ivar: _registrationDate
@property (readonly, nonatomic) NSObject<ACHEarnedInstanceAwarding> *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithSource:(id)arg0 earnedInstanceStore:(id)arg1 dataStore:(id)arg2 registrationDate:(id)arg3 ;
// -(void)addEvaluationOperationWithDateInterval:(id)arg0 databaseContext:(id)arg1 evaluationBlock:(id)arg2 completion:(unk)arg3  ;
-(void)cancelAllEvaluationOperations;
-(void)dataStoreDidClearAllProperties:(id)arg0 completion:(id)arg1 ;


@end


#endif