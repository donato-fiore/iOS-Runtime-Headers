// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBSQLQUERYITERATOR_H
#define HMBSQLQUERYITERATOR_H

@class NSEnumerator, NSMutableArray, NSNumber, NSError;


#import "HMBSQLQueryStatement.h"

@interface HMBSQLQueryIterator : NSEnumerator

@property (retain, nonatomic) NSMutableArray *cachedResults; // ivar: _cachedResults
@property (retain, nonatomic) NSNumber *currentSequence; // ivar: _currentSequence
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger maximumRowsPerQuery; // ivar: _maximumRowsPerQuery
@property (nonatomic) int sequenceBindOffset; // ivar: _sequenceBindOffset
@property (readonly, nonatomic) HMBSQLQueryStatement *statement; // ivar: _statement


+(NSUInteger)maximumRowsPerSelect;
+(void)setMaximumRowsPerSelect:(NSUInteger)arg0 ;
-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)fetchRow:(id)arg0 error:(*id)arg1 ;
-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequence:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithStatement:(id)arg0 initialSequence:(id)arg1 maximumRowsPerSelect:(NSUInteger)arg2 ;
-(id)initWithStatement:(id)arg0 initialSequence:(id)arg1 maximumRowsPerSelect:(NSUInteger)arg2 error:(id)arg3 ;
-(id)nextObject;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif