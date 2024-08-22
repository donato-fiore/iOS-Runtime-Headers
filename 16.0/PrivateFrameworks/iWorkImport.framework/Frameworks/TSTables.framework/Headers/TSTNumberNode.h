// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTNUMBERNODE_H
#define TSTNUMBERNODE_H

@class NSString;


#import "TSTExpressionNode.h"

@interface TSTNumberNode : TSTExpressionNode {
    NSString *_string;
}


@property (readonly) TSUDecimal number; // ivar: _number
@property (retain, nonatomic) NSString *string;


-(*void)argumentSpec;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(id)exportString;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 number:(struct TSUDecimal *)arg1 locale:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4 ;
-(id)initWithContext:(id)arg0 number:(struct TSUDecimal *)arg1 string:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4 ;
-(id)initWithContext:(id)arg0 string:(id)arg1 locale:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4 ;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)fixStorageLanguage:(id)arg0 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif