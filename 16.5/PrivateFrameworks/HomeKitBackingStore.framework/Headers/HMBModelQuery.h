// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBMODELQUERY_H
#define HMBMODELQUERY_H

@class HMFObject, NSDictionary, NSNumber, NSMapTable, NSArray, NSString;



@interface HMBModelQuery : HMFObject

@property (readonly, nonatomic) NSDictionary *argumentFields; // ivar: _argumentFields
@property (readonly, nonatomic) NSDictionary *arguments; // ivar: _arguments
@property (readonly, nonatomic) NSDictionary *encodedDefaultValuesByArgumentName; // ivar: _encodedDefaultValuesByArgumentName
@property (readonly, nonatomic) BOOL hasExpectedIndexes;
@property (readonly, nonatomic) NSNumber *initialSequence; // ivar: _initialSequence
@property (readonly, nonatomic) NSUInteger maximumRowsPerSelect; // ivar: _maximumRowsPerSelect
@property (retain, nonatomic) Class modelClass; // ivar: _modelClass
@property (readonly, nonatomic) NSMapTable *preparedQueries; // ivar: _preparedQueries
@property (readonly, nonatomic) NSArray *sqlColumns; // ivar: _sqlColumns
@property (readonly, nonatomic) NSString *sqlPredicate; // ivar: _sqlPredicate
@property (readonly, nonatomic) NSString *sqlSelect; // ivar: _sqlSelect


-(id)description;
-(id)initWithSQLPredicate:(id)arg0 sqlColumns:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(NSUInteger)arg3 arguments:(id)arg4 ;
-(id)performQueryOn:(id)arg0 arguments:(id)arg1 ;
-(id)prepareOnTable:(id)arg0 ;


@end


#endif