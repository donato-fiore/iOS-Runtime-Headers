// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORECACHEFETCHRECORDRESULT_H
#define HMDBACKINGSTORECACHEFETCHRECORDRESULT_H

@class HMFObject, NSData, CKRecord, NSUUID;


#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger encoding; // ivar: _encoding
@property (readonly, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (readonly, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)description;
-(id)initWithGroup:(id)arg0 record:(id)arg1 data:(id)arg2 encoding:(NSUInteger)arg3 uuid:(id)arg4 ;


@end


#endif