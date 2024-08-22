// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLTABLESQLQUERYTRANSFORM_H
#define BMDSLTABLESQLQUERYTRANSFORM_H

@class BMDSLBaseCodable, NSString, BMTableSchema, NSArray;
@protocol BMDSLTransform;



@interface BMDSLTableSQLQueryTransform : BMDSLBaseCodable <BMDSLTransform>



@property (readonly, copy, nonatomic) NSString *SQL; // ivar: _SQL
@property (readonly, nonatomic) BMTableSchema *schema; // ivar: _schema
@property (readonly, copy, nonatomic) NSArray *tableNames; // ivar: _tableNames


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 SQL:(id)arg2 tableNames:(id)arg3 schema:(id)arg4 ;
-(id)initWithSQL:(id)arg0 tableNames:(id)arg1 schema:(id)arg2 ;
-(id)transformInput:(id)arg0 combinedState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif