// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTMUTABLECELLITERATORDATA_H
#define TSTMUTABLECELLITERATORDATA_H

@class NSString;
@protocol TSTCellIteratorData;

#import <Foundation/Foundation.h>

#import "TSTCell.h"
#import "TSTCellFormulaSpec.h"

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData>



@property (retain, nonatomic) TSTCell *cell; // ivar: _cell
@property (readonly, nonatomic) BOOL cellHasCommentStorage;
@property (readonly, nonatomic) BOOL cellHasConditionalStyle;
@property (readonly, nonatomic) BOOL cellHasCustomFormat;
@property (readonly, nonatomic) BOOL cellHasFormula;
@property (nonatomic) TSUCellCoord cellID; // ivar: _cellID
@property (nonatomic) BOOL cellIDIsValid; // ivar: _cellIDIsValid
@property (readonly, nonatomic) BOOL cellIsEmpty;
@property (nonatomic) BOOL cellIsValid; // ivar: _cellIsValid
@property (readonly, nonatomic) unsigned char cellValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSTCellFormulaSpec *formulaSpec; // ivar: _formulaSpec
@property (nonatomic) BOOL formulaSpecIsValid; // ivar: _formulaSpecIsValid
@property (readonly) NSUInteger hash;
@property (nonatomic) TSUCellRect mergeRange; // ivar: _mergeRange
@property (nonatomic) BOOL mergeRangeIsValid; // ivar: _mergeRangeIsValid
@property (readonly) Class superclass;


-(id)init;
-(void)reset;


@end


#endif