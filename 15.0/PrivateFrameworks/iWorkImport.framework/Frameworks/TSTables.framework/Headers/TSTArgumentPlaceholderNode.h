// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTARGUMENTPLACEHOLDERNODE_H
#define TSTARGUMENTPLACEHOLDERNODE_H

@class NSString;


#import "TSTExpressionNode.h"

@interface TSTArgumentPlaceholderNode : TSTExpressionNode {
    NSString *_detokenizedText;
}


@property (nonatomic) short mode; // ivar: _mode


+(*void)argumentSpecForFunctionIndex:(unsigned short)arg0 argumentIndex:(int)arg1 ;
-(BOOL)hasMenu;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(id)argumentName;
-(id)bakedValue;
-(id)copyIntoContext:(id)arg0 bakeModes:(BOOL)arg1 children:(id)arg2 ;
-(id)detokenizedText;
-(id)exportString;
-(id)formulaPlainText;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 argumentSpec:(*void)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 firstIndex:(NSUInteger)arg1 lastIndex:(NSUInteger)arg2 ;
-(id)string;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_invalidate;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setArgumentSpec:(*void)arg0 ;


@end


#endif