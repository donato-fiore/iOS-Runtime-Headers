// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLORDEREXPRESSION_H
#define EFSQLORDEREXPRESSION_H

@class NSString;
@protocol EFSQLValueExpressable, EFSQLExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLOrderExpression : NSObject <EFSQLValueExpressable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *expression; // ivar: _expression
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAscending; // ivar: _isAscending
@property (readonly) Class superclass;


-(id)ef_SQLIsolatedExpression;
-(id)initWithExpression:(id)arg0 ascending:(BOOL)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif