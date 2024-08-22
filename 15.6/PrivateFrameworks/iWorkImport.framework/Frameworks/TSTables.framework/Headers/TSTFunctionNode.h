// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTFUNCTIONNODE_H
#define TSTFUNCTIONNODE_H

@class NSString, NSArray;


#import "TSTExpressionNode.h"
#import "TSTFunctionEndNode.h"

@interface TSTFunctionNode : TSTExpressionNode {
    TSTFunctionEndNode *_functionEndNode;
}


@property (retain, nonatomic) TSTFunctionEndNode *functionEndNode;
@property (readonly, nonatomic) unsigned short functionIndex; // ivar: _functionIndex
@property (readonly, nonatomic, getter=isInvalidFunction) BOOL invalidFunction;
@property (retain, nonatomic) NSString *invalidFunctionName; // ivar: _invalidFunctionName
@property (readonly, nonatomic) short maxArguments;
@property (readonly, nonatomic) short minArguments;
@property (readonly, nonatomic) NSUInteger numArguments;
@property (retain, nonatomic) NSArray *whitespaceAfterDelimiters; // ivar: _whitespaceAfterDelimiters
@property (retain, nonatomic) NSString *whitespaceAfterFunctionName; // ivar: _whitespaceAfterFunctionName
@property (retain) NSString *whitespaceAfterLeftParen; // ivar: _whitespaceAfterLeftParen


+(id)newDefaultFunctionNodeWithContext:(id)arg0 functionIndex:(unsigned short)arg1 ;
+(id)newSumNodeWithContext:(id)arg0 children:(id)arg1 ;
-(BOOL)isDescendantOfChild:(id)arg0 ;
-(BOOL)isEmptyFunctionNode;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(BOOL)isFunctionNode;
-(BOOL)isMissingRequiredArgument;
-(NSUInteger)lastIndexOfSubtree;
-(id)exportString;
-(id)formulaPlainText;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 functionIndex:(unsigned short)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4 ;
-(id)mostSpecificNodeContainingIndex:(NSUInteger)arg0 correspondingIndex:(NSUInteger)arg1 ;
-(id)p_functionSpec;
-(id)string;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)addTSTCanvasReferencesToSet:(id)arg0 inRangeContext:(unsigned char)arg1 withColorHelper:(id)arg2 preferringNodesFromStorage:(id)arg3 allVisitedNodes:(id)arg4 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 unwrapped:(BOOL)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_resetArgumentSpecForChildren;
-(void)resurrectModeTokens;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setChildren:(id)arg0 ;


@end


#endif