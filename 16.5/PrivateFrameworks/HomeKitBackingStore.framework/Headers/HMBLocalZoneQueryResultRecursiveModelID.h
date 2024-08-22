// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEQUERYRESULTRECURSIVEMODELID_H
#define HMBLOCALZONEQUERYRESULTRECURSIVEMODELID_H

@class NSMutableOrderedSet, NSUUID, NSMutableSet;


#import "HMBLocalZoneQueryResultRecordColumns.h"

@interface HMBLocalZoneQueryResultRecursiveModelID : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) NSMutableOrderedSet *modelStack; // ivar: _modelStack
@property (retain, nonatomic) NSUUID *parentModelID; // ivar: _parentModelID
@property (readonly, nonatomic) int parentModelIDOffset; // ivar: _parentModelIDOffset
@property (readonly, nonatomic) NSMutableSet *returnedModels; // ivar: _returnedModels


-(BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 modelID:(id)arg1 ;
-(id)nextObject;


@end


#endif