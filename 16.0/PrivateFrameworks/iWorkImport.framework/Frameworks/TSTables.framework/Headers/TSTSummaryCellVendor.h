// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSUMMARYCELLVENDOR_H
#define TSTSUMMARYCELLVENDOR_H

@class TSPObject;


#import "TSTTableInfo.h"

@interface TSTSummaryCellVendor : TSPObject

@property (readonly, nonatomic) NSUInteger cellCount;
@property (readonly, nonatomic) *void cellUIDMap; // ivar: _cellUIDMap
@property (nonatomic) BOOL hasCustomFormatsToPaste; // ivar: _hasCustomFormatsToPaste
@property (readonly, weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (nonatomic) BOOL upgradingToSubOwnerUIDs; // ivar: _upgradingToSubOwnerUIDs


+(BOOL)canBeVendorStorageUid:(struct TSKUIDStructCoord *)arg0 ;
-(id)cellAtCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(id)cellMapForWildcardCells;
-(id)cellSpecForAggregateType:(unsigned char)arg0 forColumnUID:(struct TSKUIDStruct )arg1 atGroupLevel:(unsigned char)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 tableInfo:(id)arg1 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)mapReassigningPasteboardCustomFormatKeys:(id)arg0 ;
-(int)getCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(struct TSKUIDStructCoord )p_resolveCellUIDToVendorCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
-(void)enumerateCellsUsingBlock:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeCellsInColumnUid:(struct TSKUIDStruct *)arg0 ;
-(void)runChange:(id)arg0 withSummaryCellMap:(id)arg1 migrationHelper:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setAggregateType:(unsigned char)arg0 forColumnUID:(struct TSKUIDStruct )arg1 atGroupLevel:(unsigned char)arg2 ;
-(void)setCell:(id)arg0 atCellUID:(struct TSKUIDStructCoord *)arg1 ;


@end


#endif