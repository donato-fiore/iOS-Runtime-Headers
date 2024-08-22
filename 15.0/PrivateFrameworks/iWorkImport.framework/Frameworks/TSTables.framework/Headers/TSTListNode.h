// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLISTNODE_H
#define TSTLISTNODE_H

@class NSArray, NSString;


#import "TSTExpressionNode.h"

@interface TSTListNode : TSTExpressionNode

@property (retain, nonatomic) NSArray *whitespaceAfterDelimiters; // ivar: _whitespaceAfterDelimiters
@property (retain) NSString *whitespaceAfterLeftParen; // ivar: _whitespaceAfterLeftParen


-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(id)description;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 firstIndex:(NSUInteger)arg1 lastIndex:(NSUInteger)arg2 ;
-(id)mostSpecificNodeContainingIndex:(NSUInteger)arg0 correspondingIndex:(NSUInteger)arg1 ;
-(id)string;
-(int)tokenType;
-(struct TSCEFunctionArgSpec *)argumentSpec;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif