// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEOWNERUIDMAPPER_H
#define TSCEOWNERUIDMAPPER_H

@class TSKSosBase;



@interface TSCEOwnerUidMapper : TSKSosBase {
    UUIDData<TSP::UUIDData> _tableUID;
    UUIDData<TSP::UUIDData> _nextTableUID;
    UUIDData<TSP::UUIDData> _hiddenStateForRowsOwnerUID;
    UUIDData<TSP::UUIDData> _nextHiddenStateForRowsOwnerUID;
    UUIDData<TSP::UUIDData> _hiddenStateForColumnsOwnerUID;
    UUIDData<TSP::UUIDData> _nextHiddenStateForColumnsOwnerUID;
    UUIDData<TSP::UUIDData> _conditionalStyleOwnerUID;
    UUIDData<TSP::UUIDData> _nextConditionalStyleOwnerUID;
    UUIDData<TSP::UUIDData> _sortRuleReferenceTrackerOwnerUID;
    UUIDData<TSP::UUIDData> _nextSortRuleReferenceTrackerOwnerUID;
    UUIDData<TSP::UUIDData> _mergeOwnerUID;
    UUIDData<TSP::UUIDData> _nextMergeOwnerUID;
    UUIDData<TSP::UUIDData> _pencilAnnotationOwnerUID;
    UUIDData<TSP::UUIDData> _nextPencilAnnotationOwnerUID;
    UUIDData<TSP::UUIDData> _categoryAggregatesOwnerUID;
    UUIDData<TSP::UUIDData> _nextCategoryAggregatesOwnerUID;
    UUIDData<TSP::UUIDData> _groupByUID;
    UUIDData<TSP::UUIDData> _nextGroupByUID;
    TSKUIDStructMap _uidMap;
}


@property (readonly, nonatomic) TSKUIDStruct categoryAggregatesOwnerUID;
@property (readonly, nonatomic) TSKUIDStruct categoryOwnerUID; // ivar: _categoryOwnerUID
@property (readonly, nonatomic) TSKUIDStruct conditionalStyleOwnerUID;
@property (readonly, nonatomic) TSKUIDStruct groupByUID;
@property (readonly, nonatomic) TSKUIDStruct hiddenStateForColumnsOwnerUID;
@property (readonly, nonatomic) TSKUIDStruct hiddenStateForRowsOwnerUID;
@property (readonly, nonatomic) TSKUIDStruct mergeOwnerUID;
@property (nonatomic) TSKUIDStruct nextCategoryAggregatesOwnerUID;
@property (nonatomic) TSKUIDStruct nextCategoryOwnerUID; // ivar: _nextCategoryOwnerUID
@property (nonatomic) TSKUIDStruct nextConditionalStyleOwnerUID;
@property (nonatomic) TSKUIDStruct nextGroupByUID;
@property (nonatomic) TSKUIDStruct nextHiddenStateForColumnsOwnerUID;
@property (nonatomic) TSKUIDStruct nextHiddenStateForRowsOwnerUID;
@property (nonatomic) TSKUIDStruct nextMergeOwnerUID;
@property (nonatomic) TSKUIDStruct nextPencilAnnotationOwnerUID;
@property (nonatomic) TSKUIDStruct nextSortRuleReferenceTrackerOwnerUID;
@property (nonatomic) TSKUIDStruct nextTableUID;
@property (readonly, nonatomic) TSKUIDStruct pbTableUID; // ivar: _pbTableUID
@property (readonly, nonatomic) TSKUIDStruct pencilAnnotationOwnerUID;
@property (readonly, nonatomic) TSKUIDStruct sortRuleReferenceTrackerOwnerUID;
@property (nonatomic) TSKUIDStruct tableUID;


-(*void)ownerUIDMap;
-(BOOL)usesAllSubOwnerUIDs;
-(BOOL)verifySubOwnerUIDsUsed;
-(id)description;
-(id)fullDescription;
-(id)initForPivotDataTableWithMapper:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithFormulaOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(id)initWithIdentityMapping;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 pasteBoardTableUID:(struct TSKUIDStruct *)arg1 hiddenStateOwnerForRowsUID:(struct TSKUIDStruct *)arg2 hiddenStateOwnerForColumnsUID:(struct TSKUIDStruct *)arg3 conditionalStyleOwnerUID:(struct TSKUIDStruct *)arg4 sortRuleReferenceTrackerOwnerUID:(struct TSKUIDStruct *)arg5 mergeOwnerUID:(struct TSKUIDStruct *)arg6 pencilAnnotationOwnerUID:(struct TSKUIDStruct *)arg7 categoryAggregatesOwnerUID:(struct TSKUIDStruct *)arg8 groupByUID:(struct TSKUIDStruct *)arg9 ;
-(id)makeInverse;
-(id)pivotDataTableMapper;
-(void)p_recreateUIDs;
-(void)saveToArchive:(*void)arg0 ;
-(void)setToIdentityMapping;
-(void)setToUpgradeMapping;


@end


#endif