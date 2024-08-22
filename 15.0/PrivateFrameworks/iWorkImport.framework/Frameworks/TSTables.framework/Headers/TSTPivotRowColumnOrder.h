// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTPIVOTROWCOLUMNORDER_H
#define TSTPIVOTROWCOLUMNORDER_H

@class TSPObject;


#import "TSTGroupBy.h"
#import "TSTTableInfo.h"
#import "TSTColumnRowUIDMap.h"

@interface TSTPivotRowColumnOrder : TSPObject

@property (readonly, retain) TSTGroupBy *groupBy; // ivar: _groupBy
@property BOOL isColumnOrderTemporary; // ivar: _isColumnOrderTemporary
@property BOOL isRowOrderTemporary; // ivar: _isRowOrderTemporary
@property (weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain) TSTColumnRowUIDMap *uidMap; // ivar: _uidMap


+(void)initialGroupOrderForGroupBy:(id)arg0 baseLevel:(unsigned char)arg1 outAllUids:(*void)arg2 outBaseUids:(*void)arg3 outSummaryUids:(*void)arg4 ;
-(*void)orderForDimension:(NSInteger)arg0 ;
-(*void)setOrderUsingViewOrderForDimension:(NSInteger)arg0 ;
-(?)groupUidsGivenUids:(?)arg0 selectedLevelsforDimension;
-(?)orderedUidsForDimension;
-(?)orderedUidsFromUidsforDimension;
-(BOOL)hasValidInfo;
-(BOOL)hasValidUidMap;
-(NSUInteger)_numberOfLevels:(BOOL)arg0 ;
-(id)_groupBy:(BOOL)arg0 ;
-(id)columnRowUIDMap;
-(id)copyWithContext:(id)arg0 tableInfo:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 tableInfo:(id)arg1 rowUids:(*void)arg2 columnUids:(*void)arg3 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)initWithTableInfo:(id)arg0 rowUids:(*void)arg1 columnUids:(*void)arg2 ;
-(id)sortedArrayFromArray:(id)arg0 forDimension:(NSInteger)arg1 ;
-(id)targetGroupFromIndex:(unsigned int)arg0 minSourceLevel:(unsigned char)arg1 templateUID:(struct TSKUIDStruct *)arg2 forDimension:(NSInteger)arg3 ;
-(unsigned char)_maxLevel:(BOOL)arg0 ;
-(unsigned char)minimumCategoryLevelInRange:(struct _NSRange )arg0 forDimension:(NSInteger)arg1 ;
-(void)insertUids:(*void)arg0 beforeUid:(struct TSKUIDStruct *)arg1 forDimension:(NSInteger)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeUids:(*void)arg0 forDimension:(NSInteger)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setOrder:(*void)arg0 forDimension:(NSInteger)arg1 ;
-(void)setTemporaryOrder:(*void)arg0 forDimension:(NSInteger)arg1 ;


@end


#endif