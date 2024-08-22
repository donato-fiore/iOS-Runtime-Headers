// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLBETWEENEXPRESSION_H
#define EFSQLBETWEENEXPRESSION_H

@class NSString;
@protocol EFSQLBitExpressable, EFSQLValueExpressable, EFSQLExpressable;


#import "EFPair.h"

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLValueExpressable>



@property (readonly, nonatomic) BOOL between; // ivar: _between
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *left; // ivar: _left
@property (readonly) Class superclass;


-(id)ef_SQLIsolatedExpression;
-(id)initWithLeft:(id)arg0 firstValue:(id)arg1 secondValue:(id)arg2 between:(BOOL)arg3 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)setColumnExpression:(id)arg0 ;


@end


#endif