// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDMEDICALRECORDCATEGORYSUMMARY_H
#define WDMEDICALRECORDCATEGORYSUMMARY_H

@class NSMutableArray, NSMutableOrderedSet, NSString, NSArray, NSMutableDictionary;
@protocol WDMedicalRecordSummarizable, WDMedicalRecordSummaryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HRProfile.h"

@interface WDMedicalRecordCategorySummary : NSObject <WDMedicalRecordSummarizable>



@property (retain, nonatomic) NSMutableArray *allDisplayItems; // ivar: _allDisplayItems
@property (retain, nonatomic) NSMutableOrderedSet *allRecords; // ivar: _allRecords
@property (retain, nonatomic) NSMutableOrderedSet *allStandaloneRecords; // ivar: _allStandaloneRecords
@property (nonatomic) NSInteger categoryType; // ivar: _categoryType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDMedicalRecordSummaryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (readonly, copy, nonatomic) NSArray *displayItems;
@property (nonatomic) BOOL displayingTruncatedRecords; // ivar: _displayingTruncatedRecords
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *panels; // ivar: _panels
@property (retain, nonatomic) NSMutableDictionary *panelsToRecords; // ivar: _panelsToRecords
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (nonatomic) BOOL showCategoryTitle; // ivar: _showCategoryTitle
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *summaryQueue; // ivar: _summaryQueue
@property (readonly, copy, nonatomic) NSString *summarySortString;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *truncatedDisplayItems; // ivar: _truncatedDisplayItems
@property (nonatomic) NSInteger truncatedMedicalRecordCount; // ivar: _truncatedMedicalRecordCount
@property (nonatomic) NSUInteger truncationDisplayItemOffset; // ivar: _truncationDisplayItemOffset
@property (retain, nonatomic) NSMutableArray *visibleDisplayItems; // ivar: _visibleDisplayItems


-(BOOL)_shouldConsiderRecordTruncation:(id)arg0 ;
-(NSInteger)additionalDisplayItemCount;
-(NSInteger)additionalRecordCount;
-(id)_appendixItemForCount:(NSInteger)arg0 ;
-(id)_displayItemsForGenericRecord:(id)arg0 previous:(id)arg1 next:(id)arg2 ;
-(id)initWithProfile:(id)arg0 categoryType:(NSInteger)arg1 showCategoryTitle:(BOOL)arg2 delegate:(id)arg3 ;
-(void)_displayItemsForObservation:(id)arg0 previous:(id)arg1 next:(id)arg2 completion:(id)arg3 ;
-(void)_displayItemsForPanel:(id)arg0 completion:(id)arg1 ;
-(void)_displayItemsForRecord:(id)arg0 previous:(id)arg1 next:(id)arg2 completion:(id)arg3 ;
-(void)_displayItemsForUnknownRecord:(id)arg0 completion:(id)arg1 ;
-(void)_rqueue_determinStandaloneRecords;
-(void)_rqueue_recomputeIfNeeded;
-(void)_rqueue_setNeedsCompute;
-(void)addMedicalRecord:(id)arg0 ;
-(void)recomputeIfNeeded;
-(void)setNeedsRecompute;
-(void)showTruncatedRecords;


@end


#endif