// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDCONCEPTSUMMARY_H
#define WDMEDICALRECORDCONCEPTSUMMARY_H

@class NSArray, NSMutableOrderedSet, HKConceptStore, NSString, HKHealthRecordsStore;
@protocol WDMedicalRecordSummarizable, WDMedicalRecordSummaryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WDMedicalRecordConceptSummary : NSObject <WDMedicalRecordSummarizable>



@property (retain, nonatomic) NSArray *allDisplayItems; // ivar: _allDisplayItems
@property (retain, nonatomic) NSMutableOrderedSet *allRecords; // ivar: _allRecords
@property (retain, nonatomic) HKConceptStore *conceptStore; // ivar: _conceptStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDMedicalRecordSummaryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (readonly, copy, nonatomic) NSArray *displayItems;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *summaryQueue; // ivar: _summaryQueue
@property (readonly, copy, nonatomic) NSString *summarySortString;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 delegate:(id)arg1 ;
-(void)_displayItemsForGenericMedicalRecord:(id)arg0 completion:(id)arg1 ;
-(void)_displayItemsForObservation:(id)arg0 completion:(id)arg1 ;
-(void)_displayItemsForRecord:(id)arg0 completion:(id)arg1 ;
-(void)_rqueue_recomputeIfNeeded;
-(void)_rqueue_setNeedsCompute;
-(void)_updatePlacementForDisplayItems:(id)arg0 ofRecord:(id)arg1 ;
-(void)addMedicalRecord:(id)arg0 ;
-(void)recomputeIfNeeded;
-(void)setNeedsRecompute;
-(void)showTruncatedRecords;


@end


#endif