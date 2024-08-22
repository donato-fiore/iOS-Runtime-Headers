// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTIDENTIFIERNODE_H
#define TSTIDENTIFIERNODE_H

@class NSMutableArray, NSString;


#import "TSTExpressionNode.h"

@interface TSTIdentifierNode : TSTExpressionNode {
    NSMutableArray *_components;
}


@property (retain, nonatomic) NSString *aggregateFunction; // ivar: _aggregateFunction
@property (readonly, nonatomic) NSString *fullIdentifier;
@property (readonly, nonatomic) NSString *lastComponentWithWhitespaceAppended;
@property (readonly, nonatomic) NSString *lastIdentifierComponent;
@property (nonatomic) unsigned int symbol; // ivar: _symbol


-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(NSUInteger)componentCount;
-(id)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 baseHostCell:(struct TSUCellCoord )arg2 forceReferenceInterpretation:(BOOL)arg3 symbolTable:(*void)arg4 oldToNewNodeMap:(id)arg5 ;
-(id)detokenizedText;
-(id)formulaPlainText;
-(id)identifierComponents;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 identifier:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)sheetName;
-(id)string;
-(id)tableName;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)addIdentifierComponent:(id)arg0 ;
-(void)appendToLastComponent:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif