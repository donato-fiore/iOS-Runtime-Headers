// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALZONEQUERYRESULTPARENTMODELIDOFTYPE_H
#define HMBLOCALZONEQUERYRESULTPARENTMODELIDOFTYPE_H

@class NSString, NSUUID;


#import "HMBLocalZoneQueryResultRecordColumns.h"

@interface HMBLocalZoneQueryResultParentModelIDOfType : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) NSString *modelClassName; // ivar: _modelClassName
@property (readonly, nonatomic) int modelClassNameOffset; // ivar: _modelClassNameOffset
@property (readonly, nonatomic) NSUUID *parentModelID; // ivar: _parentModelID
@property (readonly, nonatomic) int parentModelIDOffset; // ivar: _parentModelIDOffset


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 parentModelID:(id)arg1 modelClassName:(id)arg2 ;


@end


#endif