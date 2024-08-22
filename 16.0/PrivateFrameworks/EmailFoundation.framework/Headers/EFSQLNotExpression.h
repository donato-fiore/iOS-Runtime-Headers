// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLNOTEXPRESSION_H
#define EFSQLNOTEXPRESSION_H

@class NSString;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLNotExpression : NSObject <EFSQLValueExpressable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *expression; // ivar: _expression
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)ef_SQLIsolatedExpression;
-(id)initWithExpression:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif