// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDFORMULA_H
#define CHDFORMULA_H



#import "EDFormula.h"
#import "EDReferenceCollection.h"
#import "EDWorkbook.h"

@interface CHDFormula : EDFormula {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}




+(id)formulaWithReference:(id)arg0 ;
+(id)formulaWithReferences:(id)arg0 ;
-(BOOL)isConstantStringFormula;
-(NSUInteger)countOfCellsBeingReferenced;
-(id)constantValuesFromConstantStringFormula;
-(id)initWithReference:(id)arg0 ;
-(id)initWithReferences:(id)arg0 ;
-(id)initWithWorkbook:(id)arg0 ;
-(id)references;
-(id)referencesFromFormula;
-(void)prepareTokens;
-(void)setReferences:(id)arg0 ;
-(void)setWorkbook:(id)arg0 ;


@end


#endif