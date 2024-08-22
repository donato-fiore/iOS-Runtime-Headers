// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDBUILDABLEFORMULA_H
#define EDBUILDABLEFORMULA_H

@class NSString;
@protocol EDFormulaBuilding;

#import <Foundation/Foundation.h>


@interface EDBuildableFormula : NSObject <EDFormulaBuilding>

 {
    ? mTree;
    int mWarning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)convertRefsInListtoType;
-(?)fixTableOfConstantsRef;
-(?)shrinkSpanningRef;
-(?)tokenAtIndexpreviousToken;
-(BOOL)addArrayWithCol:(int)arg0 andRow:(int)arg1 ;
-(BOOL)addInfixOperator:(int)arg0 atIndex:(unsigned int)arg1 factor:(CGFloat)arg2 ;
-(BOOL)argTokenIsDurationAtIndex:(unsigned int)arg0 ;
-(BOOL)convertLastRefsToArea;
-(BOOL)convertRefs:(unsigned int)arg0 toType:(int)arg1 ;
-(BOOL)convertRefs:(unsigned int)arg0 toTypes:(*int)arg1 ;
-(BOOL)convertToIntersect:(unsigned int)arg0 ;
-(BOOL)convertToList:(unsigned int)arg0 ;
-(BOOL)convertToList:(unsigned int)arg0 withFinalParen:(BOOL)arg1 ;
-(BOOL)copyToken:(unsigned int)arg0 from:(id)arg1 ;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)insertExternalName:(NSUInteger)arg0 withLink:(NSUInteger)arg1 atIndex:(unsigned int)arg2 ;
-(BOOL)insertName:(NSUInteger)arg0 atIndex:(unsigned int)arg1 ;
-(BOOL)insertName:(NSUInteger)arg0 link:(NSUInteger)arg1 external:(BOOL)arg2 atIndex:(unsigned int)arg3 ;
-(BOOL)insertVariableFunction:(unsigned short)arg0 afterIndex:(unsigned int)arg1 numArgs:(unsigned int)arg2 ;
-(BOOL)isConstantList:(unsigned int)arg0 ;
-(BOOL)isSupportedFormula;
-(BOOL)makeArrayForLastToken:(NSUInteger)arg0 ;
-(BOOL)replaceArgPtgAtIndex:(unsigned int)arg0 withFormula:(id)arg1 ;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg0 ;
-(BOOL)uppercaseArgAtIndex:(unsigned int)arg0 ;
-(BOOL)wrapArgumentsWithOperator:(int)arg0 argumentCount:(unsigned int)arg1 atIndex:(unsigned int)arg2 ;
-(char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 ;
-(char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 numArgs:(int)arg2 ;
-(char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(id)formula;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(*BOOL)arg0 withEDLinks:(id)arg1 ;
-(id)stringFromStringTokenAtIndex:(NSUInteger)arg0 ;
-(int)argTokenTypeAtIndex:(unsigned int)arg0 ;
-(int)tokenTypeAtIndex:(NSUInteger)arg0 ;
-(int)warningType;
-(struct EDBuildablePtg *)tokenAtIndex:(NSUInteger)arg0 ;
-(unsigned int)removeOptionalPtgArgs:(unsigned int)arg0 minArgs:(unsigned int)arg1 ;
-(void)copyToFormula:(id)arg0 ;
-(void)dealloc;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg0 withMin:(unsigned short)arg1 andMax:(unsigned short)arg2 ;
-(void)removeTokenAtIndex:(NSUInteger)arg0 ;
-(void)replaceStringInStringTokenAtIndex:(NSUInteger)arg0 content:(id)arg1 ;
-(void)setWarning:(int)arg0 ;


@end


#endif