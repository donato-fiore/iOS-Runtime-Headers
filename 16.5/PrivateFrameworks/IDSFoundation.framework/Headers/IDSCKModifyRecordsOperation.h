// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCKMODIFYRECORDSOPERATION_H
#define IDSCKMODIFYRECORDSOPERATION_H



#import "IDSCKDatabaseOperation.h"

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) id *modifyRecordsCompletionBlock; // ivar: _modifyRecordsCompletionBlock
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy


+(Class)__class;
+(id)alloc;


@end


#endif