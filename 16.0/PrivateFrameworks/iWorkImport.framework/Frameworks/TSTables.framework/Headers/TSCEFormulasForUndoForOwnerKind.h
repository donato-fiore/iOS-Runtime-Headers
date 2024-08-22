// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFORMULASFORUNDOFOROWNERKIND_H
#define TSCEFORMULASFORUNDOFOROWNERKIND_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEFormulasForUndoForOwnerKind : NSObject <NSCopying>

 {
    unordered_map<TSCECellRef, TSCEFormulaObject *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSCEFormulaObject *>>> _formulas;
    unordered_set<TSCECellRef, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<TSCECellRef>> _nonFormulaCells;
    unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> _formulaOwnerUIDs;
}


@property (nonatomic) unsigned short ownerKind; // ivar: _ownerKind


-(*void)formulaOwnerUIDs;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)addFormula:(id)arg0 atCellRef:(struct TSCECellRef *)arg1 ;
-(void)foreachFormula:(id)arg0 ;


@end


#endif