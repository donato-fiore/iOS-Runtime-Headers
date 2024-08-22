// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLEXPRESSIONGENERATOR_H
#define EFSQLEXPRESSIONGENERATOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "EFSQLExpressionGenerator.h"
#import "EFSQLGeneratorTableRelationship.h"

@interface EFSQLExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *additionalSelectColumns; // ivar: _additionalSelectColumns
@property (copy, nonatomic) NSString *alias; // ivar: _alias
@property (nonatomic) BOOL includeSourceColumn; // ivar: _includeSourceColumn
@property (readonly, nonatomic) EFSQLExpressionGenerator *previousExpressionGenerator; // ivar: _previousExpressionGenerator
@property (readonly, nonatomic) EFSQLGeneratorTableRelationship *tableRelationship; // ivar: _tableRelationship
@property (readonly, nonatomic) NSArray *whereExpression; // ivar: _whereExpression


+(id)tableFromPreviousTable:(id)arg0 propertyMapper:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEFSQLExpressionGenerator:(id)arg0 ;
-(NSUInteger)hash;
-(id)columnAlias;
-(id)initWithTableRelationship:(id)arg0 whereExpression:(id)arg1 previousExpressionGenerator:(id)arg2 ;
-(id)initWithTableRelationship:(id)arg0 whereExpression:(id)arg1 previousExpressionGenerator:(id)arg2 additionalSelectColumns:(id)arg3 includeSourceColumn:(BOOL)arg4 ;
-(id)joinOnGenerator;
-(void)assignAliasWithMap:(id)arg0 ;


@end


#endif