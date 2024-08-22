// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLOBJECTPROPERTYMAPPER_H
#define EFSQLOBJECTPROPERTYMAPPER_H

@class NSArray, NSDictionary, NSString;
@protocol EFObjectPropertyMapper, EFSQLValueExpressable;

#import <Foundation/Foundation.h>

#import "EFSQLColumnSchema.h"
#import "EFSQLTableSchema.h"

@interface EFSQLObjectPropertyMapper : NSObject <EFObjectPropertyMapper>



@property (readonly, nonatomic) NSArray *additionalColumns; // ivar: _additionalColumns
@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *bitExpression; // ivar: _bitExpression
@property (copy, nonatomic) NSDictionary *children; // ivar: _children
@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // ivar: _sourceColumn
@property (readonly) Class superclass;
@property (readonly, nonatomic) EFSQLTableSchema *table; // ivar: _table


-(id)childForKey:(id)arg0 ;
-(id)initPlaceholderMapperWithChildren:(id)arg0 ;
-(id)initWithChildren:(id)arg0 sourceColumn:(id)arg1 ;
-(id)initWithChildren:(id)arg0 sourceColumn:(id)arg1 additionalColumns:(id)arg2 ;
-(id)initWithChildren:(id)arg0 sourceColumn:(id)arg1 condition:(id)arg2 ;
-(id)initWithChildren:(id)arg0 sourceColumn:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 ;
-(id)initWithChildren:(id)arg0 table:(id)arg1 ;
-(id)initWithChildren:(id)arg0 table:(id)arg1 additionalColumns:(id)arg2 ;
-(id)initWithChildren:(id)arg0 table:(id)arg1 condition:(id)arg2 ;
-(id)initWithChildren:(id)arg0 table:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 ;
-(id)initWithColumn:(id)arg0 ;
-(id)initWithColumn:(id)arg0 additionalColumns:(id)arg1 ;
-(id)initWithColumn:(id)arg0 bitExpression:(id)arg1 ;
-(id)initWithColumn:(id)arg0 condition:(id)arg1 ;
-(id)initWithColumn:(id)arg0 condition:(id)arg1 additionalColumns:(id)arg2 bitExpression:(id)arg3 ;


@end


#endif