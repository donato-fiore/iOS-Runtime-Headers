// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLANDEXPRESSION_H
#define EFSQLANDEXPRESSION_H

@class NSString, NSArray;
@protocol EFSQLCompoundExpression;

#import <Foundation/Foundation.h>


@interface EFSQLAndExpression : NSObject <EFSQLCompoundExpression>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly, copy, nonatomic) NSArray *expressions; // ivar: _expressions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)combined:(id)arg0 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithExpressions:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif