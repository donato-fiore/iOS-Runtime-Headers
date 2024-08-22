// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLDISQUALIFIEDCOLUMNEXPRESSION_H
#define EFSQLDISQUALIFIEDCOLUMNEXPRESSION_H

@class NSString;
@protocol EFCacheable;


#import "EFSQLColumnExpression.h"

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable>



@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression; // ivar: _columnExpression
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)cachedSelf;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif