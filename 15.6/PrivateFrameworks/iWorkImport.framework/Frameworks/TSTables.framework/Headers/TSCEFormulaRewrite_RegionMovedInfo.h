// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEFORMULAREWRITE_REGIONMOVEDINFO_H
#define TSCEFORMULAREWRITE_REGIONMOVEDINFO_H


#import <Foundation/Foundation.h>

#import "TSCEFormulaRewrite_Uids.h"
#import "TSCEFormulaRewrite_RegionInfo.h"

@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject

@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *dstColumnUids;
@property (readonly, nonatomic) TSKUIDStruct dstCondStyleOwnerUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *dstRegion; // ivar: _dstRegion
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *dstRowUids;
@property (readonly, nonatomic) TSKUIDStruct dstTableUID;
@property (readonly, nonatomic) *void dstUidForSrcUid; // ivar: _dstUidForSrcUid
@property (nonatomic) TSKUIDStruct finalDstTableUID; // ivar: _finalDstTableUID
@property (nonatomic) unsigned int finalTopRowIndex; // ivar: _finalTopRowIndex
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcColumnUids;
@property (readonly, nonatomic) TSKUIDStruct originalSrcCondStyleOwnerUID;
@property (retain, nonatomic) TSCEFormulaRewrite_RegionInfo *originalSrcRegion; // ivar: _originalSrcRegion
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcRowUids;
@property (readonly, nonatomic) TSKUIDStruct originalSrcTableUID;
@property (nonatomic) BOOL spanningColumns; // ivar: _spanningColumns
@property (nonatomic) BOOL spanningRows; // ivar: _spanningRows
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *srcColumnUids;
@property (readonly, nonatomic) TSKUIDStruct srcCondStyleOwnerUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *srcRegion; // ivar: _srcRegion
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *srcRowUids;
@property (readonly, nonatomic) TSKUIDStruct srcTableUID;
@property (readonly, nonatomic) *void srcUidForDstUid; // ivar: _srcUidForDstUid


-(BOOL)isForDstTable:(struct TSKUIDStruct *)arg0 ;
-(BOOL)isForSrcTable:(struct TSKUIDStruct *)arg0 ;
-(id)description;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithSrcTableUID:(struct TSKUIDStruct *)arg0 srcTract:(*void)arg1 dstTableUID:(struct TSKUIDStruct *)arg2 destTract:(*void)arg3 ;
-(struct TSKUIDStruct )dstUidForSrcUid:(struct TSKUIDStruct *)arg0 ;
-(struct TSKUIDStruct )srcUidForDstUid:(struct TSKUIDStruct *)arg0 ;
-(void)loadIndexesForSrcTable:(id)arg0 srcUidResolver:(id)arg1 dstTable:(id)arg2 dstUidResolver:(id)arg3 ;
-(void)loadIndexesFromRegions;
-(void)saveToMessage:(*void)arg0 ;
-(void)unloadIndexes;


@end


#endif