// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALSQLITERATORROWBLOCK_H
#define HMBLOCALSQLITERATORROWBLOCK_H



#import "HMBSQLQueryIterator.h"

@interface HMBLocalSQLIteratorRowBlock : HMBSQLQueryIterator

@property (readonly, nonatomic, getter=isAscending) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSUInteger zoneRow; // ivar: _zoneRow
@property (readonly, nonatomic) int zoneRowBindOffset; // ivar: _zoneRowBindOffset


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequence:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithSQLContext:(id)arg0 zoneRow:(NSUInteger)arg1 statement:(id)arg2 isAscending:(BOOL)arg3 ;


@end


#endif