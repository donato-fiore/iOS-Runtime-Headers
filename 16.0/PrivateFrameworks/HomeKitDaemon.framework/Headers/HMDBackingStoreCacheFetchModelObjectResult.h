// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORECACHEFETCHMODELOBJECTRESULT_H
#define HMDBACKINGSTORECACHEFETCHMODELOBJECTRESULT_H

@class HMFObject, CKRecord;


#import "HMDBackingStoreModelObject.h"

@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject

@property (readonly, nonatomic) HMDBackingStoreModelObject *object; // ivar: _object
@property (readonly, nonatomic) CKRecord *record; // ivar: _record


-(id)initWithRecord:(id)arg0 data:(id)arg1 encoding:(NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif