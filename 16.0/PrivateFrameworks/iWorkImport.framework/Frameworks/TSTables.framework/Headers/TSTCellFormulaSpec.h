// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLFORMULASPEC_H
#define TSTCELLFORMULASPEC_H

@class TSULocale, NSString;
@protocol TSCEFormulaReturning;


#import "TSTCellSpec.h"
#import "TSCEFormulaObject.h"
#import "TSTStockDetails.h"

@interface TSTCellFormulaSpec : TSTCellSpec <TSCEFormulaReturning>

 {
    TSULocale *_locale;
    unsigned int _interactionType;
}


@property (readonly, nonatomic) unsigned char categoryAggregateType; // ivar: _categoryAggregateType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSCEFormulaObject *formulaObject; // ivar: _formulaObject
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSTStockDetails *stockDetails; // ivar: _stockDetails
@property (readonly) Class superclass;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)hasTSCEFormula;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(BOOL)p_mightBeEqual:(id)arg0 ;
-(id)asFormulaSpec;
-(id)cellSpecReplacingFormulaObject:(id)arg0 locale:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithFormulaObject:(id)arg0 fromTableInfo:(id)arg1 fromCellID:(struct TSUCellCoord )arg2 ;
-(id)initWithFormulaObject:(id)arg0 locale:(id)arg1 ;
-(unsigned int)interactionType;
-(void)p_computeinteractionType:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif