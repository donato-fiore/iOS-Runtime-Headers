// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALZONEQUERYRESULTRECORDCOLUMNS_H
#define HMBLOCALZONEQUERYRESULTRECORDCOLUMNS_H



#import "HMBLocalZoneQueryResult.h"

@interface HMBLocalZoneQueryResultRecordColumns : HMBLocalZoneQueryResult



-(id)fetchRow:(id)arg0 error:(*id)arg1 ;
-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequence:(*NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif