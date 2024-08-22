// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSHAREDFORMULA_H
#define EDSHAREDFORMULA_H



#import "EDFormula.h"
#import "EDReference.h"

@interface EDSharedFormula : EDFormula

@property (nonatomic) NSUInteger baseFormulaIndex; // ivar: _baseFormulaIndex
@property (readonly, nonatomic) EDReference *baseFormulaRange; // ivar: _baseFormulaRange
@property (nonatomic) int columnBaseOrOffset; // ivar: _columnBaseOrOffset
@property (nonatomic) BOOL forceNonBaseFormula; // ivar: _forceNonBaseFormula
@property (nonatomic) int rowBaseOrOffset; // ivar: _rowBaseOrOffset


-(BOOL)convertTokensToShared;
-(BOOL)isBaseFormula;
-(BOOL)isSharedFormula;
-(id)baseFormulaWithRowBlocks:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFormula:(id)arg0 ;
-(id)warningWithRowBlocks:(id)arg0 ;
-(void)archiveByAppendingToMutableData:(struct __CFData *)arg0 ;
-(void)unarchiveFromData:(struct __CFData *)arg0 offset:(*NSUInteger)arg1 ;
-(void)updateBaseFormulaRangeWithRow:(int)arg0 column:(int)arg1 ;


@end


#endif