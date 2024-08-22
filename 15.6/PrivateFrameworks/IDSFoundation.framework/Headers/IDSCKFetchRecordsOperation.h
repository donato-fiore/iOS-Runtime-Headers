// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCKFETCHRECORDSOPERATION_H
#define IDSCKFETCHRECORDSOPERATION_H

@class NSArray;


#import "IDSCKDatabaseOperation.h"

@interface IDSCKFetchRecordsOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) id *fetchRecordsCompletionBlock; // ivar: _fetchRecordsCompletionBlock
@property (copy, nonatomic) id *perRecordCompletionBlock; // ivar: _perRecordCompletionBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs


+(Class)__class;
+(id)alloc;


@end


#endif