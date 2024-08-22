// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEUUIDREFERENCEMAP_H
#define TSCEUUIDREFERENCEMAP_H


#import <Foundation/Foundation.h>


@interface TSCEUUidReferenceMap : NSObject {
    unordered_map<TSKUIDStruct, TSCEInternalCellRefSet, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEInternalCellRefSet>>> _cellRefsByUuid;
    unordered_map<TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::unordered_set<TSKUIDStruct>>>> _uuidsByCellRef;
}




+(id)_stringForInternalCellRef:(struct TSCEInternalCellReference *)arg0 ;
-(BOOL)tooManyCellRefsFor31FormatArchive;
-(id)description;
-(id)initFromArchive:(*void)arg0 dependencyTracker:(*void)arg1 ;
-(void)addCellRef:(struct TSCEInternalCellReference *)arg0 forUuid:(struct TSKUIDStruct *)arg1 ;
-(void)encodeToArchive:(*void)arg0 alsoSave31Format:(BOOL)arg1 archiver:(id)arg2 ;
-(void)getCellRefs:(*void)arg0 referringToUuids:(*void)arg1 ;
-(void)removeAllCellRefsInOwner:(unsigned short)arg0 ;
-(void)removeCellRef:(struct TSCEInternalCellReference *)arg0 ;
-(void)removeCellRef:(struct TSCEInternalCellReference *)arg0 forUuid:(struct TSKUIDStruct *)arg1 ;
-(void)upgradeForOwners:(id)arg0 ;


@end


#endif