// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEQUERYRESULT_H
#define HMBLOCALZONEQUERYRESULT_H

@class NSDictionary;


#import "HMBSQLQueryIterator.h"
#import "HMBLocalZone.h"

@interface HMBLocalZoneQueryResult : HMBSQLQueryIterator

@property (readonly, nonatomic) NSDictionary *arguments; // ivar: _arguments
@property (readonly, weak, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, nonatomic) NSUInteger zoneRow; // ivar: _zoneRow
@property (readonly, nonatomic) int zoneRowBindOffset; // ivar: _zoneRowBindOffset


+(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 arguments:(id)arg1 zoneBindRowOffset:(int)arg2 zoneRow:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 statement:(id)arg1 initialSequence:(id)arg2 arguments:(id)arg3 maximumRowsPerSelect:(NSUInteger)arg4 ;


@end


#endif