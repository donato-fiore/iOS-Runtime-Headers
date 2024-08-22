// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALZONEQUERYRESULTRECORDIDSEQUENCE_H
#define HMBLOCALZONEQUERYRESULTRECORDIDSEQUENCE_H

@class NSData, NSMutableSet;


#import "HMBLocalZoneQueryResult.h"

@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult

@property (retain, nonatomic) NSData *currentSequenceAsData; // ivar: _currentSequenceAsData
@property (retain, nonatomic) NSData *lastReturnedSequence; // ivar: _lastReturnedSequence
@property (retain, nonatomic) NSMutableSet *returnedIDs; // ivar: _returnedIDs


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 currentSequence:(id)arg1 error:(*id)arg2 ;
-(id)fetchRow:(id)arg0 error:(*id)arg1 ;
-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequenceColumn:(*id)arg2 error:(*id)arg3 ;
-(id)initWithLocalZone:(id)arg0 statement:(id)arg1 initialSequence:(id)arg2 sequenceBindOffset:(NSUInteger)arg3 arguments:(id)arg4 maximumRowsPerSelect:(NSUInteger)arg5 ;
-(id)nextObject;


@end


#endif