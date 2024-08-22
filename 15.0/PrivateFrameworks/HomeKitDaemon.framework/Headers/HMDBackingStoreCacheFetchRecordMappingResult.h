// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORECACHEFETCHRECORDMAPPINGRESULT_H
#define HMDBACKINGSTORECACHEFETCHRECORDMAPPINGRESULT_H

@class HMFObject, NSString, NSUUID;
@protocol HMDBackingStoreRecordMapping;


#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *parentUuid; // ivar: _parentUuid
@property (readonly, nonatomic) NSString *recordName; // ivar: _recordName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithGroup:(id)arg0 recordName:(id)arg1 uuid:(id)arg2 parentUuid:(id)arg3 type:(id)arg4 ;


@end


#endif