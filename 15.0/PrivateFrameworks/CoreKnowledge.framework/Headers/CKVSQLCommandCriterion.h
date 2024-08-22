// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSQLCOMMANDCRITERION_H
#define CKVSQLCOMMANDCRITERION_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVSQLCommandCriterion : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *columnName; // ivar: _columnName
@property (readonly, nonatomic) NSArray *columnValues; // ivar: _columnValues
@property (readonly, nonatomic) NSString *comparingColumnName; // ivar: _comparingColumnName
@property (readonly, nonatomic) NSInteger sqlOperator; // ivar: _sqlOperator
@property (readonly, nonatomic) NSArray *subCriteria; // ivar: _subCriteria


+(id)criterionWithANDSubCriteria:(id)arg0 ;
+(id)criterionWithColumnName:(id)arg0 EQUALSColumnValue:(id)arg1 ;
+(id)criterionWithColumnName:(id)arg0 INColumnValues:(id)arg1 ;
+(id)criterionWithColumnName:(id)arg0 LESSTHANColumnValue:(id)arg1 ;
+(id)criterionWithColumnName:(id)arg0 LIKEWildcardPattern:(id)arg1 ;
+(id)criterionWithColumnName:(id)arg0 MATCHSearchPhrase:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithColumnName:(id)arg0 columnValue:(id)arg1 sqlOperator:(NSInteger)arg2 ;
-(id)initWithColumnName:(id)arg0 columnValues:(id)arg1 sqlOperator:(NSInteger)arg2 ;
-(id)initWithSubCriteria:(id)arg0 sqlOperator:(NSInteger)arg1 ;


@end


#endif