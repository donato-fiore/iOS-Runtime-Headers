// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLINDEXEDCOLUMNSCHEMA_H
#define EFSQLINDEXEDCOLUMNSCHEMA_H

@class NSString;
@protocol EFSQLExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLIndexedColumnSchema : NSObject

@property (readonly, nonatomic) NSUInteger collation; // ivar: _collation
@property (readonly, copy, nonatomic) NSString *definition;
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *expression; // ivar: _expression
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger orderDirection; // ivar: _orderDirection


-(id)initWithColumnName:(id)arg0 ;
-(id)initWithColumnName:(id)arg0 collation:(NSUInteger)arg1 orderDirection:(NSUInteger)arg2 ;
-(id)initWithColumnName:(id)arg0 orderDirection:(NSUInteger)arg1 ;
-(id)initWithExpression:(id)arg0 ;
-(id)initWithExpression:(id)arg0 collation:(NSUInteger)arg1 orderDirection:(NSUInteger)arg2 ;
-(id)initWithExpression:(id)arg0 orderDirection:(NSUInteger)arg1 ;


@end


#endif