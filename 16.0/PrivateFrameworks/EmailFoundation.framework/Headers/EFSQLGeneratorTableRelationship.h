// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLGENERATORTABLERELATIONSHIP_H
#define EFSQLGENERATORTABLERELATIONSHIP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EFSQLColumnSchema.h"
#import "EFSQLTableSchema.h"

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger relationship; // ivar: _relationship
@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // ivar: _sourceColumn
@property (readonly, nonatomic) EFSQLTableSchema *table; // ivar: _table
@property (readonly, nonatomic) EFSQLTableSchema *targetTable; // ivar: _targetTable


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTableRelationship:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPropertyMapper:(id)arg0 previousTable:(id)arg1 ;


@end


#endif