// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBLOCALZONEQUERYRESULTALLOFTYPE_H
#define HMBLOCALZONEQUERYRESULTALLOFTYPE_H

@class NSString;


#import "HMBLocalZoneQueryResultRecordColumns.h"

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) NSString *modelClassName; // ivar: _modelClassName
@property (readonly, nonatomic) int modelClassNameOffset; // ivar: _modelClassNameOffset


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 modelClassName:(id)arg1 ;


@end


#endif