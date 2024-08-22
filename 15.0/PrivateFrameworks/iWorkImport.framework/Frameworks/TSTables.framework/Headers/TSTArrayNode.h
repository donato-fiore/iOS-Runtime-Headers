// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTARRAYNODE_H
#define TSTARRAYNODE_H

@class NSArray, NSString;


#import "TSTExpressionNode.h"

@interface TSTArrayNode : TSTExpressionNode

@property (readonly) TSCEGridDimensions dimensions; // ivar: _dimensions
@property (retain) NSArray *whitespaceAfterDelimiters; // ivar: _whitespaceAfterDelimiters
@property (retain) NSString *whitespaceBeforeFirstChild; // ivar: _whitespaceBeforeFirstChild


-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 firstIndex:(NSUInteger)arg4 lastIndex:(NSUInteger)arg5 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 firstIndex:(NSUInteger)arg1 lastIndex:(NSUInteger)arg2 ;
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