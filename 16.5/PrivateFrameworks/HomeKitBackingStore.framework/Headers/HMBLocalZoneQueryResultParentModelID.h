// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEQUERYRESULTPARENTMODELID_H
#define HMBLOCALZONEQUERYRESULTPARENTMODELID_H

@class NSUUID;


#import "HMBLocalZoneQueryResultRecordColumns.h"

@interface HMBLocalZoneQueryResultParentModelID : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) NSUUID *parentModelID; // ivar: _parentModelID
@property (readonly, nonatomic) int parentModelIDOffset; // ivar: _parentModelIDOffset


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 parentModelID:(id)arg1 ;


@end


#endif