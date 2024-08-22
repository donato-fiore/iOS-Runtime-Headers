// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEQUERYRESULTALLOFTYPERAW_H
#define HMBLOCALZONEQUERYRESULTALLOFTYPERAW_H

@class NSString;


#import "HMBSQLQueryIterator.h"

@interface HMBLocalZoneQueryResultAllOfTypeRaw : HMBSQLQueryIterator

@property (readonly, nonatomic) NSString *modelType; // ivar: _modelType
@property (readonly, nonatomic) int modelTypeBindOffset; // ivar: _modelTypeBindOffset
@property (readonly, nonatomic) NSUInteger returning; // ivar: _returning
@property (readonly, nonatomic) NSUInteger zoneRow; // ivar: _zoneRow
@property (readonly, nonatomic) int zoneRowBindOffset; // ivar: _zoneRowBindOffset


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)fetchRowFromStatement:(struct sqlite3_stmt *)arg0 skip:(*BOOL)arg1 updatedSequence:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithLocalZone:(id)arg0 zoneRow:(NSUInteger)arg1 modelType:(id)arg2 returning:(NSUInteger)arg3 ;


@end


#endif