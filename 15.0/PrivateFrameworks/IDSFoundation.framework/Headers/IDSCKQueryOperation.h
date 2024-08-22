// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCKQUERYOPERATION_H
#define IDSCKQUERYOPERATION_H



#import "IDSCKDatabaseOperation.h"

@interface IDSCKQueryOperation : IDSCKDatabaseOperation

@property (copy) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock


+(Class)__class;
+(id)alloc;


@end


#endif