// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTFORMULA_H
#define TSTFORMULA_H

@class TSCECalculationEngine, TSCEFormulaObject, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"
#import "TSTExpressionNode.h"

@interface TSTFormula : NSObject <NSCopying>

 {
    TSTTableInfo *_hostInfo;
    TSUModelCellCoord _hostCell;
}


@property (weak, nonatomic) TSCECalculationEngine *calculationEngine; // ivar: _calculationEngine
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) TSTExpressionNode *expressionTree; // ivar: _expressionTree
@property (nonatomic) BOOL fixupFormulas; // ivar: _fixupFormulas
@property (readonly, nonatomic) TSCEFormulaObject *formula;
@property (readonly, nonatomic) BOOL formulaFixupsShouldStick; // ivar: _formulaFixupsShouldStick
@property (readonly, nonatomic) BOOL formulaWasFixable; // ivar: _formulaWasFixable
@property (readonly, nonatomic) TSCEFormulaObject *geometricFormula;
@property (copy, nonatomic) NSString *initialWhitespace; // ivar: _initialWhitespace
@property (nonatomic, getter=isSyntaxError) BOOL syntaxError; // ivar: _syntaxError


+(BOOL)isFormulaEqualsCharacter:(unsigned short)arg0 ;
+(BOOL)storageExceedsMaxFormulaLength:(id)arg0 ;
+(NSUInteger)parenCountAtCharIndex:(NSUInteger)arg0 inStorage:(id)arg1 ;
+(NSUInteger)parenCountAtCharIndex:(NSUInteger)arg0 unmatchedParenCount:(NSUInteger)arg1 quoteContext:(int)arg2 inStorage:(id)arg3 ;
+(id)doubleQuoteCharacters;
+(id)formulaForCell:(id)arg0 atCellID:(struct TSUViewCellCoord )arg1 inTable:(id)arg2 ;
+(id)leadingSingleQuoteEscapeCharacters;
+(id)leftParenCharacters;
+(id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+(id)rightParenCharacters;
+(id)singleQuoteCharacters;
+(int)formulaQuoteContextAtCharIndex:(NSUInteger)arg0 inStorage:(id)arg1 ;
+(int)quoteContextAtCharIndex:(NSUInteger)arg0 previousContext:(int)arg1 inStorage:(id)arg2 ;
-(BOOL)canSimplify;
-(BOOL)hasBareArgumentPlaceholders;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCalculationEngine:(id)arg0 baseHostCell:(struct TSUModelCellCoord )arg1 hostTable:(id)arg2 ;
-(id)initWithCalculationEngine:(id)arg0 expressionTree:(id)arg1 baseHostCell:(struct TSUModelCellCoord )arg2 hostTable:(id)arg3 ;
-(id)initWithCalculationEngine:(id)arg0 viewHostCell:(struct TSUViewCellCoord )arg1 hostTable:(id)arg2 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 baseHostCell:(struct TSUModelCellCoord )arg2 formula:(id)arg3 ownerUID:(struct TSKUIDStruct *)arg4 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 baseHostCell:(struct TSUModelCellCoord )arg2 formula:(id)arg3 ownerUID:(struct TSKUIDStruct *)arg4 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg5 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 viewHostCell:(struct TSUViewCellCoord )arg2 formula:(id)arg3 ownerUID:(struct TSKUIDStruct *)arg4 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 viewHostCell:(struct TSUViewCellCoord )arg2 formula:(id)arg3 ownerUID:(struct TSKUIDStruct *)arg4 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg5 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(id)p_fixFormula:(id)arg0 ;
-(id)p_formulaAsTextReturningTokenValues:(BOOL)arg0 ;
-(id)simplify;
-(void)fixPreserveFlagsForCategoryRefInNode:(id)arg0 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)reparseWithStorage:(id)arg0 ;
-(void)reparseWithStorage:(id)arg0 adjustExpressionTree:(id)arg1 ;
-(void)reset;


@end


#endif