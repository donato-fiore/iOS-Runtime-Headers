// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEUUIDREFERENCES_H
#define TSCEUUIDREFERENCES_H


#import <Foundation/Foundation.h>


@interface TSCEUuidReferences : NSObject {
    unordered_map<TSKUIDStruct, TSCECellCoordSet, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> _coordSetsReferringToTable;
    unordered_map<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCECellCoordSet>>>> _coordSetsReferringToUuidInTable;
    unordered_map<TSUCellCoord, std::unordered_set<TSCEUuidPair>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::unordered_set<TSCEUuidPair>>>> _uuidsByCoord;
}


@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID


+(id)_stringForInternalCellRef:(struct TSCEInternalCellReference *)arg0 ;
-(BOOL)getCellRefs:(*void)arg0 referringToOwnerUID:(struct TSKUIDStruct *)arg1 referringToUuids:(*void)arg2 ;
-(id)description;
-(id)initFromArchive:(*void)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(id)initWithOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(void)addCellCoord:(struct TSUCellCoord *)arg0 referringToCategoryRef:(id)arg1 ;
-(void)addCellCoord:(struct TSUCellCoord *)arg0 referringToTableUID:(struct TSKUIDStruct *)arg1 ;
-(void)addCellCoord:(struct TSUCellCoord *)arg0 referringToTableUID:(struct TSKUIDStruct *)arg1 forColumnRowUuid:(struct TSKUIDStruct *)arg2 ;
-(void)clear;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)getAllCellRefs:(*void)arg0 referringToOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(void)getCellRefs:(*void)arg0 referringToOwner:(struct TSKUIDStruct *)arg1 ;
-(void)getCellRefs:(*void)arg0 referringToOwners:(*void)arg1 ;
-(void)removeCellCoord:(struct TSUCellCoord *)arg0 ;
-(void)removeCellCoord:(struct TSUCellCoord *)arg0 referringToCategoryRef:(id)arg1 ;
-(void)removeCellCoord:(struct TSUCellCoord *)arg0 referringToTableUID:(struct TSKUIDStruct *)arg1 ;
-(void)removeCellCoord:(struct TSUCellCoord *)arg0 referringToTableUID:(struct TSKUIDStruct *)arg1 forColumnRowUuid:(struct TSKUIDStruct *)arg2 ;
-(void)unpackAfterUnarchive;


@end


#endif