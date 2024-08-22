// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDFORMULA_H
#define EDFORMULA_H

@class NSString;
@protocol EDFormulaBuilding;

#import <Foundation/Foundation.h>


@interface EDFormula : NSObject <EDFormulaBuilding>

 {
    *__CFData mPackedData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)formula;
-(*void)xlPtgs;
-(BOOL)addArrayWithCol:(int)arg0 andRow:(int)arg1 ;
-(BOOL)addInfixOperator:(int)arg0 atIndex:(unsigned int)arg1 factor:(CGFloat)arg2 ;
-(BOOL)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 extendedDataCount:(unsigned int)arg2 ;
-(BOOL)convertLastRefsToArea;
-(BOOL)convertToIntersect:(unsigned int)arg0 ;
-(BOOL)convertToList:(unsigned int)arg0 ;
-(BOOL)convertToList:(unsigned int)arg0 withFinalParen:(BOOL)arg1 ;
-(BOOL)convertTokensToSharedAtRow:(unsigned int)arg0 column:(unsigned int)arg1 ;
-(BOOL)copyTokenAtIndex:(unsigned int)arg0 fromFormula:(id)arg1 ;
-(BOOL)copyTokenFromXlPtg:(struct XlPtg *)arg0 ;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)insertExternalName:(NSUInteger)arg0 withLink:(NSUInteger)arg1 atIndex:(unsigned int)arg2 ;
-(BOOL)insertName:(NSUInteger)arg0 atIndex:(unsigned int)arg1 ;
-(BOOL)isBaseFormula;
-(BOOL)isCleaned;
-(BOOL)isCleanedWithEvaluationStack;
-(BOOL)isContainsRelativeReferences;
-(BOOL)isSharedFormula;
-(BOOL)isSupportedFormula;
-(BOOL)removeTokenAtIndex:(unsigned int)arg0 ;
-(BOOL)replaceTokenAtIndex:(unsigned int)arg0 withFormula:(id)arg1 ;
-(BOOL)replaceTokenAtIndex:(unsigned int)arg0 withFormula:(id)arg1 formulaTokenIndex:(unsigned int)arg2 ;
-(BOOL)setupTokensWithTokensCount:(unsigned int)arg0 tokensWithDataCount:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3 ;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg0 ;
-(BOOL)uppercaseArgAtIndex:(unsigned int)arg0 ;
-(BOOL)wrapArgumentsWithOperator:(int)arg0 argumentCount:(unsigned int)arg1 atIndex:(unsigned int)arg2 ;
-(char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 ;
-(char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 numArgs:(int)arg2 ;
-(char *)extendedDataForTokenAtIndex:(unsigned int)arg0 extendedDataIndex:(unsigned int)arg1 length:(*unsigned int)arg2 ;
-(char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg0 length:(*unsigned int)arg1 ;
-(char *)setExtendedDataAtIndex:(unsigned int)arg0 extendedDataIndex:(unsigned int)arg1 length:(unsigned int)arg2 ;
-(char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(id)init;
-(id)initWithFormula:(id)arg0 ;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(*BOOL)arg0 withEDLinks:(id)arg1 ;
-(id)originalFormulaString;
-(id)saveArgs:(unsigned int)arg0 andDelete:(BOOL)arg1 ;
-(id)warning;
-(id)warningParameter;
-(int)tokenTypeAtIndex:(unsigned int)arg0 ;
-(int)warningType;
-(struct EDToken *)tokenAtIndex:(unsigned int)arg0 ;
-(unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg0 ;
-(unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg0 ;
-(unsigned int)tokenCount;
-(void)archiveByAppendingToMutableData:(struct __CFData *)arg0 ;
-(void)dealloc;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg0 withMin:(unsigned short)arg1 andMax:(unsigned short)arg2 ;
-(void)populateXlPtg:(struct XlPtg *)arg0 index:(unsigned int)arg1 ;
-(void)removeAllTokens;
-(void)replaceTokenTypeAtIndex:(unsigned int)arg0 withType:(int)arg1 ;
-(void)setCleaned:(BOOL)arg0 ;
-(void)setOriginalFormulaString:(id)arg0 ;
-(void)setWarning:(int)arg0 ;
-(void)setWarningParameter:(id)arg0 ;
-(void)setupExtendedDataForTokenAtIndex:(unsigned int)arg0 extendedDataLength:(unsigned int)arg1 extendedDataCount:(unsigned int)arg2 ;
-(void)unarchiveFromData:(struct __CFData *)arg0 offset:(*NSUInteger)arg1 ;
-(void)updateCleanedWithEvaluationStack:(BOOL)arg0 ;
-(void)updateContainsRelativeReferences:(BOOL)arg0 ;


@end


#endif