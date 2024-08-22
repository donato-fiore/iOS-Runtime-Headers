// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLCOLUMNEXPRESSION_H
#define EFSQLCOLUMNEXPRESSION_H

@class NSString;
@protocol EFCacheable, EFSQLValueExpressable;

#import <Foundation/Foundation.h>

#import "EFSQLDisqualifiedColumnExpression.h"

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLValueExpressable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFSQLDisqualifiedColumnExpression *disqualified;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName


+(id)allColumns;
+(id)column:(id)arg0 ;
+(id)table:(id)arg0 column:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)beginsWith:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)between:(id)arg0 ;
-(id)cachedSelf;
-(id)concatenate:(id)arg0 ;
-(id)contains:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)doesNotContain:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)doesNotMatchMask:(id)arg0 ;
-(id)ef_SQLIsolatedExpression;
-(id)endsWith:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)equalTo:(id)arg0 ;
-(id)expressionForPredicateOperatorType:(NSUInteger)arg0 constValue:(id)arg1 ;
-(id)glob:(id)arg0 ;
-(id)greaterThan:(id)arg0 ;
-(id)greaterThanEqualTo:(id)arg0 ;
-(id)in:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 table:(id)arg1 ;
-(id)is:(id)arg0 ;
-(id)isNot:(id)arg0 ;
-(id)isNotNull;
-(id)isNull;
-(id)lessThan:(id)arg0 ;
-(id)lessThanEqualTo:(id)arg0 ;
-(id)like:(id)arg0 ;
-(id)like:(id)arg0 patternType:(NSUInteger)arg1 ;
-(id)matchesMask:(id)arg0 ;
-(id)minus:(id)arg0 ;
-(id)notBetween:(id)arg0 ;
-(id)notEqualTo:(id)arg0 ;
-(id)notGlob:(id)arg0 ;
-(id)notIn:(id)arg0 ;
-(id)notLike:(id)arg0 ;
-(id)notLike:(id)arg0 patternType:(NSUInteger)arg1 ;
-(id)plus:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif