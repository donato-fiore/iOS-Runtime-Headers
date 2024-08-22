// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EFSQLALIASEDEXPRESSION_H
#define _EFSQLALIASEDEXPRESSION_H

@class NSString;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface _EFSQLAliasedExpression : NSObject <EFSQLValueExpressable>



@property (readonly, copy, nonatomic) NSString *alias; // ivar: _alias
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *expression; // ivar: _expression
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)ef_SQLIsolatedExpression;
-(id)initWithExpression:(id)arg0 alias:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif