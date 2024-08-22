// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCKMODIFYRECORDZONESOPERATION_H
#define IDSCKMODIFYRECORDZONESOPERATION_H

@class NSArray;


#import "IDSCKDatabaseOperation.h"

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) id *modifyRecordZonesCompletionBlock; // ivar: _modifyRecordZonesCompletionBlock
@property NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (copy, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave


+(Class)__class;
+(id)alloc;


@end


#endif