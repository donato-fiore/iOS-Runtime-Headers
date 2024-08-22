// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLBITEXPRESSIONGENERATOR_H
#define EFSQLBITEXPRESSIONGENERATOR_H

@protocol EFSQLValueExpressable;


#import "EFSQLExpressionGenerator.h"

@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator

@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *bitExpression; // ivar: _bitExpression


-(id)initWithTableRelationship:(id)arg0 whereExpression:(id)arg1 previousExpressionGenerator:(id)arg2 bitExpression:(id)arg3 ;
-(void)bitExpressionWithKeyColumn:(id)arg0 ;


@end


#endif