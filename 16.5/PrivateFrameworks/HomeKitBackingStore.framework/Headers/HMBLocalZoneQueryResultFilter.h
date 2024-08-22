// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEQUERYRESULTFILTER_H
#define HMBLOCALZONEQUERYRESULTFILTER_H

@class NSArray, HMBLocalSQLQueryTableQueryAll;


#import "HMBLocalZoneQueryResultRecordID.h"

@interface HMBLocalZoneQueryResultFilter : HMBLocalZoneQueryResultRecordID

@property (readonly, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMBLocalSQLQueryTableQueryAll *query; // ivar: _query


-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequence:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithLocalZone:(id)arg0 statement:(id)arg1 columns:(id)arg2 filter:(id)arg3 ;


@end


#endif