// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORECACHEUPDATERECORDOPERATION_H
#define HMDBACKINGSTORECACHEUPDATERECORDOPERATION_H

@class NSData, CKRecord, NSString;


#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"
#import "HMDBackingStoreModelObject.h"

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation

@property (readonly) NSData *data; // ivar: _data
@property (readonly) NSUInteger encoding; // ivar: _encoding
@property (readonly) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (readonly) HMDBackingStoreModelObject *model; // ivar: _model
@property (readonly) CKRecord *record; // ivar: _record
@property (readonly) NSString *recordName; // ivar: _recordName


-(id)initWithGroup:(id)arg0 name:(id)arg1 model:(id)arg2 resultBlock:(id)arg3 ;
-(id)initWithGroup:(id)arg0 name:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(NSUInteger)arg4 model:(id)arg5 resultBlock:(id)arg6 ;
-(id)initWithGroup:(id)arg0 record:(id)arg1 data:(id)arg2 encoding:(NSUInteger)arg3 resultBlock:(id)arg4 ;
-(id)initWithGroup:(id)arg0 record:(id)arg1 resultBlock:(id)arg2 ;
-(id)mainReturningError;


@end


#endif