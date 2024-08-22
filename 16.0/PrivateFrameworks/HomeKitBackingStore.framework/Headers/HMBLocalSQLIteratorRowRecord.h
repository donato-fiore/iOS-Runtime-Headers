// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBLOCALSQLITERATORROWRECORD_H
#define HMBLOCALSQLITERATORROWRECORD_H



#import "HMBSQLQueryIterator.h"

@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator

@property (readonly, nonatomic) NSUInteger returning; // ivar: _returning
@property (readonly, nonatomic) NSUInteger zoneRow; // ivar: _zoneRow
@property (readonly, nonatomic) int zoneRowBindOffset; // ivar: _zoneRowBindOffset


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequence:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithSQLContext:(id)arg0 zoneRow:(NSUInteger)arg1 returning:(NSUInteger)arg2 ;


@end


#endif