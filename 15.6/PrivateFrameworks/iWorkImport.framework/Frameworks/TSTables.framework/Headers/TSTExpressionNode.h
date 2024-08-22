// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTEXPRESSIONNODE_H
#define TSTEXPRESSIONNODE_H

@class TSPObject, NSArray, UIViewController, NSString;
@protocol TSTFormulaToken;


#import "TSTWPTokenAttachment.h"

@interface TSTExpressionNode : TSPObject <TSTFormulaToken>

 {
    NSArray *_children;
    *void _argumentSpec;
}


@property (nonatomic) *void argumentSpec;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) NSUInteger firstIndex; // ivar: _firstIndex
@property (readonly, nonatomic) BOOL isOptional;
@property (nonatomic) NSUInteger lastIndex; // ivar: _lastIndex
@property (readonly, nonatomic) UIViewController *popover;
@property (readonly, nonatomic) NSString *string;
@property (weak, nonatomic) TSTWPTokenAttachment *tokenAttachment; // ivar: _tokenAttachment
@property (readonly, nonatomic) int tokenType;
@property (retain, nonatomic) NSString *whitespaceAfter; // ivar: _whitespaceAfter
@property (retain, nonatomic) NSString *whitespaceBefore; // ivar: _whitespaceBefore


-(BOOL)canEliminateLargestCommonSubexpressionWithSymbolTable:(*void)arg0 ;
-(BOOL)forceReferenceInterpretationOfChildren;
-(BOOL)hasMenu;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(BOOL)isFunctionNode;
-(BOOL)subtreeContainsIndex:(NSUInteger)arg0 ;
-(NSInteger)compareFirstLastIndices:(id)arg0 ;
-(id)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 baseHostCell:(struct TSUCellCoord )arg2 forceReferenceInterpretation:(BOOL)arg3 symbolTable:(*void)arg4 oldToNewNodeMap:(id)arg5 ;
-(id)copyIntoContext:(id)arg0 bakeModes:(BOOL)arg1 children:(id)arg2 ;
-(id)deepCopyIntoContext:(id)arg0 bakeModes:(BOOL)arg1 withTokenDict:(id)arg2 ;
-(id)description;
-(id)detokenizedText;
-(id)eliminateLargestCommonSubexpression:(id)arg0 withSymbolTable:(*void)arg1 newIdentifierOut:(*id)arg2 ;
-(id)eliminateLargestCommonSubexpressionWithSymbolTable:(*void)arg0 newIdentifierOut:(*id)arg1 ;
-(id)exportString;
-(id)formulaPlainText;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 firstIndex:(NSUInteger)arg1 lastIndex:(NSUInteger)arg2 ;
-(id)largestCommonSubexpression;
-(id)largestCommonSubexpressionExcludingExisting:(id)arg0 cseData:(id)arg1 ;
-(id)lowestCommonAncestor:(id)arg0 ;
-(id)mostSpecificNodeContainingIndex:(NSUInteger)arg0 correspondingIndex:(NSUInteger)arg1 ;
-(id)p_eliminateLargestCommonSubexpressionWithLCA:(id)arg0 expressions:(id)arg1 withSymbolTable:(*void)arg2 newIdentifierOut:(*id)arg3 ;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(struct _NSRange )range;
-(struct _NSRange )rangeEncompassingExpressionNodesInRange:(struct _NSRange )arg0 ;
-(unsigned int)symbol;
-(void)addAllIdentifiersToSymbolTable:(*void)arg0 ;
-(void)addTSTCanvasReferencesToSet:(id)arg0 inRangeContext:(unsigned char)arg1 withColorHelper:(id)arg2 preferringNodesFromStorage:(id)arg3 allVisitedNodes:(id)arg4 ;
-(void)addVariablesMatchingPrefix:(id)arg0 forFormulaIndex:(NSUInteger)arg1 toDictionary:(id)arg2 symbolTable:(*void)arg3 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)enumerateExpressionNodesUsingBlock:(id)arg0 ;
-(void)fixStorageLanguage:(id)arg0 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)replaceOccurrencesOfChildrenInSet:(id)arg0 withIdentifier:(id)arg1 symbol:(unsigned int)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif