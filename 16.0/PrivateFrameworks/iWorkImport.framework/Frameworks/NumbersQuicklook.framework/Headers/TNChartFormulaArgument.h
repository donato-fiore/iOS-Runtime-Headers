// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNCHARTFORMULAARGUMENT_H
#define TNCHARTFORMULAARGUMENT_H

@class TSCECategoryRef, TSCECellTractRef, TSCEViewTractRef;

#import <Foundation/Foundation.h>


@interface TNChartFormulaArgument : NSObject {
    *void _data;
}


@property (readonly) TSCECategoryRef *categoryReference;
@property (readonly) TSCECellRef cellReference;
@property (readonly) BOOL isBadRef;
@property (readonly) BOOL isCategoryReference;
@property (readonly) BOOL isCellReference;
@property (readonly) BOOL isGeometricReference;
@property (readonly) BOOL isRangeReference;
@property (readonly) BOOL isReference;
@property (readonly) BOOL isStaticValue;
@property (readonly) BOOL isTractReference;
@property (readonly) BOOL isViewTractReference;
@property (readonly) TSCERangeRef rangeReference;
@property (readonly) *TSCEValue staticValue;
@property (readonly) TSCECellTractRef *tractReference;
@property (readonly) NSUInteger type; // ivar: _type
@property (readonly) TSCEViewTractRef *viewTractReference;


-(BOOL)isVisible:(id)arg0 ;
-(NSUInteger)numberOfValuesWithCalcEngine:(id)arg0 plotByRow:(BOOL)arg1 ;
-(id)description;
-(id)initWithBadRef;
-(id)initWithCategoryReference:(id)arg0 ;
-(id)initWithCellReference:(struct TSCECellRef )arg0 ;
-(id)initWithRangeReference:(struct TSCERangeRef )arg0 ;
-(id)initWithStaticValue:(struct TSCEValue *)arg0 ;
-(id)initWithTractReference:(id)arg0 ;
-(id)initWithViewTractReference:(id)arg0 ;
-(struct TSKUIDStruct )tableUID:(id)arg0 ;
-(void)dealloc;


@end


#endif