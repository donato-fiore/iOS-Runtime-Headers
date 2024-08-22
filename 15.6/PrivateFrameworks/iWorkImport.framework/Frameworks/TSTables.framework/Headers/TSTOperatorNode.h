// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTOPERATORNODE_H
#define TSTOPERATORNODE_H



#import "TSTExpressionNode.h"

@interface TSTOperatorNode : TSTExpressionNode

@property (nonatomic) unsigned short operatorChar; // ivar: _operatorChar


-(*void)argumentSpec;
-(BOOL)forceReferenceInterpretationOfChildren;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 ;
-(id)initWithContext:(id)arg0 operatorChar:(unsigned short)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4 ;
-(id)string;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif