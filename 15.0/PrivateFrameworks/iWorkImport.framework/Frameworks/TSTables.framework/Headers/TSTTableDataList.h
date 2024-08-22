// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEDATALIST_H
#define TSTTABLEDATALIST_H

@class TSPObject, NSMutableArray, NSMutableIndexSet;
@protocol TSPCopying, TSTCompatibilityVersionProviding, TSDContainerInfo><TSWPStorageParent;


#import "TSTTableDataListSegment.h"

@interface TSTTableDataList : TSPObject <TSPCopying, TSTCompatibilityVersionProviding>

 {
    NSMutableArray *_segments;
    unordered_map<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, std::allocator<std::pair<NSObject<TSTTableDataPayloadHashing> *const, TSTTableDataObject *>>> _payloadToObjectMap;
    NSMutableIndexSet *_unusedKeySet;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (nonatomic) TSTTableDataListSegment *cachedSegment; // ivar: _cachedSegment
@property (nonatomic) BOOL isNewForBraveNewCell; // ivar: _isNewForBraveNewCell
@property (nonatomic) int listType; // ivar: _listType
@property (nonatomic) unsigned int nextID; // ivar: _nextID
@property (nonatomic) NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // ivar: _richTextParentInfo
@property (readonly, nonatomic) BOOL useReverseMap; // ivar: _useReverseMap


+(Class)classForUnarchiver:(id)arg0 ;
+(id)stringForListType:(int)arg0 ;
-(BOOL)containsControlCellSpecs;
-(BOOL)containsFormulas;
-(BOOL)hasDuplicatedElements;
-(BOOL)p_shouldUseReverseMap;
-(BOOL)repairStyleDatalistStylesheetIfNecessary;
-(NSUInteger)count;
-(NSUInteger)p_objectCount;
-(id)allRichTextStorages;
-(id)cellFormatForKey:(unsigned int)arg0 ;
-(id)commentStorageForKey:(unsigned int)arg0 ;
-(id)conditionalStyleSetForKey:(unsigned int)arg0 ;
-(id)controlCellSpecForKey:(unsigned int)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)formulaErrorForKey:(unsigned int)arg0 ;
-(id)formulaForKey:(unsigned int)arg0 ;
-(id)getRefCountsFromDataList;
-(id)importWarningSetForKey:(unsigned int)arg0 ;
-(id)initWithType:(int)arg0 context:(id)arg1 ;
-(id)multipleChoiceListFormatForKey:(unsigned int)arg0 ;
-(id)p_objectForKey:(unsigned int)arg0 ;
-(id)p_objectForPayload:(id)arg0 ;
-(id)p_segmentForKey:(unsigned int)arg0 ;
-(id)p_setPayload:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(id)packageLocator;
-(id)reassignCustomFormatUIDForPaste:(id)arg0 ;
-(id)richTextForKey:(unsigned int)arg0 ;
-(id)stringForKey:(unsigned int)arg0 ;
-(id)stringForKey:(unsigned int)arg0 shouldWrap:(*BOOL)arg1 ;
-(id)styleForKey:(unsigned int)arg0 ;
-(id)wrappedObjectForPayload:(id)arg0 ;
-(unsigned int)addCellFormat:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addCommentStorage:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addConditionalStyleSet:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addControlCellSpec:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addFormula:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addFormulaError:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addImportWarningSet:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addMultipleChoiceListFormat:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addRichText:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addString:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)addStyle:(id)arg0 atSuggestedKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(unsigned int)p_nextAvailableKey;
-(unsigned int)refCountForKey:(unsigned int)arg0 ;
-(void)dropReferenceForKey:(unsigned int)arg0 callWillModify:(BOOL)arg1 ;
-(void)dropReferences:(unsigned int)arg0 forKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(void)enumerateCustomFormatsUsingBlock:(id)arg0 ;
-(void)enumerateFormatsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndCountsUsingBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_addInitialSegment;
-(void)p_clearReverseMapForObject:(id)arg0 atKey:(unsigned int)arg1 ;
-(void)p_enumerateDataObjectsUsingBlock:(id)arg0 ;
-(void)p_replaceObjectAtKey:(unsigned int)arg0 withObject:(id)arg1 ;
-(void)p_setObject:(id)arg0 atKey:(unsigned int)arg1 updateReverseMap:(BOOL)arg2 ;
-(void)p_setupWithType:(int)arg0 nextKeyID:(unsigned int)arg1 ;
-(void)removeObjectForKey:(unsigned int)arg0 ;
-(void)replaceConditionalStyleSetsUsingBlock:(id)arg0 ;
-(void)replaceFormulasUsingBlock:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)takeReferenceForKey:(unsigned int)arg0 callWillModify:(BOOL)arg1 ;
-(void)takeReferences:(unsigned int)arg0 forKey:(unsigned int)arg1 callWillModify:(BOOL)arg2 ;
-(void)upgradeCellFormatsU2_0;
-(void)upgradeConditionalStylesToLinkedRefWithTableUID:(struct TSKUIDStruct *)arg0 ;


@end


#endif