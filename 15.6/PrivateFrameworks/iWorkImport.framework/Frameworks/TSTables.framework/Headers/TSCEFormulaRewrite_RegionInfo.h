// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEFORMULAREWRITE_REGIONINFO_H
#define TSCEFORMULAREWRITE_REGIONINFO_H


#import <Foundation/Foundation.h>

#import "TSCEFormulaRewrite_Uids.h"

@interface TSCEFormulaRewrite_RegionInfo : NSObject

@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *columnUids; // ivar: _columnUids
@property (readonly, nonatomic) TSKUIDStruct condStyleOwnerUID; // ivar: _condStyleOwnerUID
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *rowUids; // ivar: _rowUids
@property (readonly, nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID


-(id)description;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 columnUids:(*void)arg1 rowUids:(*void)arg2 ;
-(struct TSCERangeCoordinate )mergingRange;
-(struct TSUCellCoord )bottomRightCellCoord;
-(struct TSUCellCoord )topLeftCellCoord;
-(void)loadIndexesForTable:(id)arg0 uidResolver:(id)arg1 ;
-(void)saveToMessage:(*void)arg0 ;
-(void)unloadIndexes;


@end


#endif