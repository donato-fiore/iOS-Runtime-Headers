// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDELECTROCARDIOGRAMFILTERDATAPROVIDER_H
#define WDELECTROCARDIOGRAMFILTERDATAPROVIDER_H

@class NSArray, NSMutableDictionary, NSString;
@protocol HKSampleTypeUpdateControllerObserver, OS_dispatch_queue, WDElectrocardiogramFilterDataProviderDelegate;

#import <Foundation/Foundation.h>

#import "WDProfile.h"

@interface WDElectrocardiogramFilterDataProvider : NSObject <HKSampleTypeUpdateControllerObserver>



@property (nonatomic) NSInteger activeAlgorithmVersion; // ivar: _activeAlgorithmVersion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) NSArray *countQueries; // ivar: _countQueries
@property (retain, nonatomic) NSMutableDictionary *counts; // ivar: _counts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDElectrocardiogramFilterDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger filterTypeCount;
@property (retain, nonatomic) NSArray *filterTypes; // ivar: _filterTypes
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (readonly) Class superclass;


+(id)_atrialFibrillationClassificationPredicateWithClassifications:(id)arg0 ;
+(id)_atrialFibrillationClassificationPredicateWithValue:(NSUInteger)arg0 ;
+(id)_atrialFibrillationClassificationPredicateWithValues:(id)arg0 ;
+(id)cellTitleForType:(NSInteger)arg0 ;
+(id)viewControllerTitleForType:(NSInteger)arg0 ;
-(NSInteger)_rQueue_countForType:(NSInteger)arg0 ;
-(NSInteger)countForType:(NSInteger)arg0 ;
-(id)_atrialFibrillationClassificationsWithActiveAlgorithmVersion:(NSInteger)arg0 ;
-(id)_countQueriesForFilterTypes:(id)arg0 ;
-(id)_countQueryForType:(NSInteger)arg0 ;
-(id)_filterTypesForActiveAlgorithmVersion:(NSInteger)arg0 ;
-(id)_highLowHeartRateClassificationsWithActiveAlgorithmVersion:(NSInteger)arg0 ;
-(id)_inconclusiveClassificationsWithActiveAlgorithmVersion:(NSInteger)arg0 ;
-(id)displayStringCountForType:(NSInteger)arg0 ;
-(id)electrocardiogramPredicateForType:(NSInteger)arg0 ;
-(id)initWithProfile:(id)arg0 delegate:(id)arg1 ;
-(void)_rQueue_notifyDelegateDidUpdateCountForType:(NSInteger)arg0 ;
-(void)_rQueue_setCount:(NSInteger)arg0 forType:(NSInteger)arg1 ;
-(void)_safelyStopQuery:(id)arg0 ;
-(void)_stopQueries;
-(void)start;
-(void)stop;
-(void)updateController:(id)arg0 didReceiveHighFrequencyUpdateForType:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;


@end


#endif