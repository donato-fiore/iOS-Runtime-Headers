// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTGROUPNODE_H
#define TSTGROUPNODE_H

@class TSPObject, NSMutableDictionary, NSUUID;


#import "TSTGroupValueTuple.h"
#import "TSTGroupNodeFormatManager.h"
#import "TSCEMutableUIDSet.h"
#import "TSCEUIDSet.h"
#import "TSTGroupBy.h"
#import "TSCECellValue.h"
#import "TSTGroupNode.h"

@interface TSTGroupNode : TSPObject {
    TSTGroupValueTuple *_cachedGroupValueTuple;
    unordered_map<TSKUIDStruct, TSTAggNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTAggNode *>>> _aggNodes;
    NSMutableDictionary *_children;
    os_unfair_lock_s _childrenLock;
    ? _rowUidsIndexSet;
    ? _pivotOnlyRowIndexes;
    TSTGroupNodeFormatManager *_formatManager;
    unordered_map<TSKUIDStruct, TSTGroupNode *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTGroupNode *>>> _childNodesByRowUid;
    TSCEMutableUIDSet *_disconnectedRowUids;
    vector<TSUCellCoord, std::allocator<TSUCellCoord>> _aggNodeCoordsToUnpack;
}


@property (readonly, nonatomic) *void aggNodes;
@property (readonly, nonatomic) TSCEUIDSet *childGroupUids;
@property (readonly, nonatomic) TSCEUIDSet *directChildGroupUids;
@property (nonatomic) TSTGroupBy *groupBy; // ivar: _groupBy
@property (readonly, nonatomic) TSCECellValue *groupCellValue; // ivar: _groupCellValue
@property (readonly, nonatomic) unsigned char groupLevel; // ivar: _groupLevel
@property (readonly) TSKUIDStruct groupUid; // ivar: _groupUid
@property (readonly) NSUUID *groupUuid;
@property (readonly, nonatomic) TSTGroupValueTuple *groupValueTuple;
@property (readonly) TSKUIDStruct groupValueUid;
@property (readonly) NSUUID *groupValueUuid;
@property (readonly, nonatomic) BOOL hasUnfilteredRows;
@property (readonly, nonatomic) BOOL isBlankNode;
@property (readonly, nonatomic) BOOL isErrorNode;
@property (readonly, nonatomic) BOOL isLeaf;
@property (readonly) TSKUIDStruct labelUid;
@property (nonatomic) TSTGroupNode *parentNode; // ivar: _parentNode
@property (readonly, nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) TSCEUIDSet *unfilteredChildGroupUids;
@property (readonly, nonatomic) TSCEUIDSet *unfilteredDirectChildGroupUids;


+(BOOL)needFormulasForAggregateType:(unsigned char)arg0 ;
+(id)localizedStringForCellValue:(id)arg0 categoryLevel:(unsigned char)arg1 groupBy:(id)arg2 ;
+(id)normalizedStringForCompare:(id)arg0 ;
-(BOOL)containsAnyRowUidInRowUidSet:(id)arg0 ;
-(BOOL)containsRowUid:(struct TSKUIDStruct *)arg0 ;
-(BOOL)updateGroupCellValueIfKeyMatches:(id)arg0 ;
-(id)aggNodeForColumnUid:(struct TSKUIDStruct *)arg0 ;
-(id)aggregateRefForType:(unsigned char)arg0 atLevel:(unsigned char)arg1 forColumnUid:(struct TSKUIDStruct *)arg2 ;
-(id)canonicalKeyStringAtLevel:(unsigned char)arg0 ;
-(id)computedGroupValueTuple;
-(id)findGroupNodeForDisplayValuesFromSplitter:(id)arg0 atLevel:(unsigned char)arg1 startAtComponent:(NSUInteger)arg2 startAtWord:(NSUInteger)arg3 preserveFlags:(struct TSUPreserveFlags *)arg4 ;
-(id)findGroupNodeForValue:(id)arg0 atLevel:(unsigned char)arg1 locale:(id)arg2 ;
-(id)groupHierarchyTreeAsFiltered:(BOOL)arg0 usingOrder:(id)arg1 forDimension:(NSInteger)arg2 ;
-(id)groupNodeForGroupUid:(struct TSKUIDStruct *)arg0 ;
-(id)groupNodeForRowUid:(struct TSKUIDStruct *)arg0 atLevel:(unsigned char)arg1 ;
-(id)groupValueAtLevel:(unsigned char)arg0 ;
-(id)groupValueCellValue;
-(id)groupValueCellValueForGroupBySet:(id)arg0 aggIndex:(unsigned short)arg1 appendAggregateName:(BOOL)arg2 ;
-(id)groupValueHierarchyForChart:(BOOL)arg0 ;
-(id)groupValueHierarchyForChart:(BOOL)arg0 groupBySet:(id)arg1 aggIndex:(unsigned short)arg2 appendAggregateName:(BOOL)arg3 ;
-(id)groupValueHierarchyRefAtLevel:(unsigned char)arg0 ;
-(id)groupValueHierarchyStringWithDelimiterString:(id)arg0 ;
-(id)groupValueHierarchyStringWithDelimiterString:(id)arg0 namingContext:(id)arg1 ;
-(id)groupValueRefAtLevel:(unsigned char)arg0 ;
-(id)initAsRootNodeForContext:(id)arg0 ;
-(id)initAsRootNodeForGroupBy:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 forGroupBy:(id)arg1 ;
-(id)initWithGroupCellValue:(id)arg0 context:(id)arg1 atLevel:(unsigned char)arg2 groupUid:(struct TSKUIDStruct )arg3 children:(id)arg4 ;
-(id)initWithGroupCellValue:(id)arg0 groupBy:(id)arg1 atLevel:(unsigned char)arg2 groupUid:(struct TSKUIDStruct )arg3 children:(id)arg4 ;
-(id)insertRowUid:(struct TSKUIDStruct *)arg0 atRowIndex:(unsigned int)arg1 forGroupValueTuple:(id)arg2 atLevel:(unsigned char)arg3 withLocale:(id)arg4 createdGroupNodeCount:(*NSUInteger)arg5 ;
-(id)rawGroupValueCellValue;
-(id)safeChildren;
-(struct TSKUIDStruct )firstVisibleNodeUsingColumnRowUIDMap:(id)arg0 forDimension:(NSInteger)arg1 leafLevel:(unsigned char)arg2 pivotTableHiddenExtent:(id)arg3 ;
-(struct TSKUIDStruct )uidReturn;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )nodePath;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )rowUidsAsVector;
-(struct TSUIndexSet )pivotOnlyRowIndexes;
-(void)addAggNode:(id)arg0 ;
-(void)addChangesTo:(id)arg0 forDemotingValueAtLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2 ;
-(void)addChangesTo:(id)arg0 forPromotingValueAtLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2 ;
-(void)addChangesTo:(id)arg0 forRemovingValueAtLevel:(unsigned char)arg1 ;
-(void)addChangesTo:(id)arg0 forReplacingValue:(id)arg1 atLevel:(unsigned char)arg2 ;
-(void)addChild:(id)arg0 withKey:(id)arg1 ;
-(void)addRowUid:(struct TSKUIDStruct *)arg0 ;
-(void)clearAllGroupNodes;
-(void)clearEmptyNodes;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 backwardCompatOptions:(NSUInteger)arg1 archiver:(id)arg2 ;
-(void)enumerateAllGroupsWithStop:(*BOOL)arg0 withBlock:(id)arg1 ;
-(void)enumerateDirectChildren:(id)arg0 ;
-(void)enumerateGroupsAtLevel:(unsigned char)arg0 withBlock:(id)arg1 ;
-(void)enumerateGroupsAtLevel:(unsigned char)arg0 withStop:(*BOOL)arg1 withBlock:(id)arg2 ;
-(void)enumerateGroupsBetweenLevel:(unsigned char)arg0 andLevel:(unsigned char)arg1 withBlock:(id)arg2 ;
-(void)enumerateGroupsBetweenLevel:(unsigned char)arg0 andLevel:(unsigned char)arg1 withStop:(*BOOL)arg2 withBlock:(id)arg3 ;
-(void)enumerateRowUidsWithBlock:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 forGroupBy:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)markAsDirtyWithCalcEngine:(id)arg0 ;
-(void)markDependentsAsDirtyWithCalcEngine:(id)arg0 ;
-(void)p_addChildGroupUidsIntoSet:(id)arg0 recursively:(BOOL)arg1 skipFiltered:(BOOL)arg2 ;
-(void)p_refreshGroupValue;
-(void)rebuildFormulasForAggNode:(id)arg0 ;
-(void)removeAllRowUids;
-(void)removeChildForKey:(id)arg0 ;
-(void)removeRowUid:(struct TSKUIDStruct *)arg0 forGroupValueTuple:(id)arg1 atLevel:(unsigned char)arg2 withLocale:(id)arg3 ;
-(void)removeRowUids:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setupWithGroupCellValue:(id)arg0 groupBy:(id)arg1 atLevel:(unsigned char)arg2 groupUid:(struct TSKUIDStruct )arg3 children:(id)arg4 ;
-(void)unpackAfterUnarchiveForGroupBy:(id)arg0 atLevel:(unsigned char)arg1 ;
-(void)updateWithDocumentRoot:(id)arg0 ;


@end


#endif