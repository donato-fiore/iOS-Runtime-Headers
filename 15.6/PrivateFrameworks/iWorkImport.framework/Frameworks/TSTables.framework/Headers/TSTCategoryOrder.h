// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCATEGORYORDER_H
#define TSTCATEGORYORDER_H

@class TSPObject;


#import "TSTTableInfo.h"
#import "TSTColumnRowUIDMap.h"

@interface TSTCategoryOrder : TSPObject

@property BOOL isRowOrderTemporary; // ivar: _isRowOrderTemporary
@property (readonly, weak) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain) TSTColumnRowUIDMap *uidMap; // ivar: _uidMap


+(struct TSKUIDStruct )categoryColumnUID;
-(?)groupUidsGivenRowUidsselectedLevels;
-(?)orderedRowUidsFromUids;
-(BOOL)hasValidInfo;
-(BOOL)hasValidUidMap;
-(id)columnRowUIDMap;
-(id)copyWithContext:(id)arg0 tableInfo:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 tableInfo:(id)arg1 rowUids:(*void)arg2 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)initWithTableInfo:(id)arg0 rowUids:(*void)arg1 ;
-(id)sortedArrayFromArray:(id)arg0 ;
-(id)targetGroupFromRowIndex:(unsigned int)arg0 minSourceLevel:(unsigned char)arg1 templateRowUID:(struct TSKUIDStruct *)arg2 ;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )orderedRowUidsWithLabels;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )rowOrder;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )setRowOrderUsingViewOrder;
-(unsigned char)minimumCategoryLevelInRowRange:(struct _NSRange )arg0 ;
-(void)insertRowUids:(*void)arg0 beforeUid:(struct TSKUIDStruct *)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeRowUids:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setRowOrder:(*void)arg0 ;
-(void)setTemporaryRowOrder:(*void)arg0 ;


@end


#endif