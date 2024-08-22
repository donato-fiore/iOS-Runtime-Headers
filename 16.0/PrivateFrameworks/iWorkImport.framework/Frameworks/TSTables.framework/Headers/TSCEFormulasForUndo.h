// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFORMULASFORUNDO_H
#define TSCEFORMULASFORUNDO_H


#import <Foundation/Foundation.h>


@interface TSCEFormulasForUndo : NSObject {
    unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::hash<TSCESubFormulaOwnerIndex>, std::equal_to<TSCESubFormulaOwnerIndex>, std::allocator<std::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>> _formulasForOwnerKind;
    unordered_map<TSCECellRef, NSString *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, NSString *>>> _formulaStringsForCellRefs;
}




-(BOOL)isEmpty;
-(NSUInteger)count;
-(NSUInteger)countForOwnerKind:(unsigned short)arg0 ;
-(id)description;
-(id)formulaStringAtCellRef:(struct TSCECellRef *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)splitIntoChunksForExcessiveSize;
-(id)subsetForOwnerKind:(unsigned short)arg0 ;
-(struct unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> )ownerUIDsForOwnerKind:(unsigned short)arg0 ;
-(struct vector<TSCESubFormulaOwnerIndex, std::allocator<TSCESubFormulaOwnerIndex>> )allOwnerKinds;
-(void)addFormulaObject:(id)arg0 atCellRef:(struct TSCECellRef *)arg1 forOwnerKind:(unsigned short)arg2 ;
-(void)addFormulaString:(id)arg0 atCellRef:(struct TSCECellRef *)arg1 ;
-(void)foreachFormulaInOwnerKind:(unsigned short)arg0 performBlock:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif