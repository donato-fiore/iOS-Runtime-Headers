// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLJOINONEXPRESSIONGENERATOR_H
#define EFSQLJOINONEXPRESSIONGENERATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EFSQLJoinOnExpressionGenerator : NSObject

@property (readonly, nonatomic) NSString *columns; // ivar: _columns
@property (readonly, nonatomic) NSString *table; // ivar: _table
@property (readonly, nonatomic) NSString *tableAlias; // ivar: _tableAlias


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToJoinOnExpressonGenerator:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTable:(id)arg0 tableAlias:(id)arg1 columns:(id)arg2 ;
-(id)joinOnExpression;


@end


#endif