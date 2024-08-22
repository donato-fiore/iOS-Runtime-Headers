// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKZONEMODIFICATIONSILO_H
#define SCKZONEMODIFICATIONSILO_H

@class NSMutableArray, NSMutableDictionary;
@protocol SCKZoneModifying;

#import <Foundation/Foundation.h>

#import "SCKZoneDiff.h"
#import "SCKZoneSchema.h"

@interface SCKZoneModificationSilo : NSObject <SCKZoneModifying>



@property (retain, nonatomic) NSMutableArray *deletedRecordIDs; // ivar: _deletedRecordIDs
@property (readonly, copy, nonatomic) SCKZoneDiff *diff;
@property (retain, nonatomic) NSMutableDictionary *originalRecordsByID; // ivar: _originalRecordsByID
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // ivar: _recordsToSaveByID
@property (retain, nonatomic) NSMutableDictionary *workingRecordsByID; // ivar: _workingRecordsByID
@property (retain, nonatomic) SCKZoneSchema *zoneSchema; // ivar: _zoneSchema


-(BOOL)_shouldAssertRecordValidity;
-(BOOL)recordExistsWithName:(id)arg0 ;
-(id)initWithZoneSchema:(id)arg0 contents:(id)arg1 ;
-(void)createOrUpdateRecordWithName:(id)arg0 recordType:(id)arg1 modifyBlock:(id)arg2 ;
-(void)deleteRecordWithName:(id)arg0 ;


@end


#endif