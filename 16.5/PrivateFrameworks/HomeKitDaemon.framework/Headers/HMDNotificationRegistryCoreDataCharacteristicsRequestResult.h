// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNOTIFICATIONREGISTRYCOREDATACHARACTERISTICSREQUESTRESULT_H
#define HMDNOTIFICATIONREGISTRYCOREDATACHARACTERISTICSREQUESTRESULT_H

@class HMFObject, NSArray;


#import "HMDNotificationRegistryCoreDataCharacteristicsRequest.h"

@interface HMDNotificationRegistryCoreDataCharacteristicsRequestResult : HMFObject

@property (readonly) HMDNotificationRegistryCoreDataCharacteristicsRequest *coreDataRequest; // ivar: _coreDataRequest
@property (readonly) BOOL didModify; // ivar: _didModify
@property (readonly) BOOL didSucceed; // ivar: _didSucceed
@property (readonly) NSArray *modifiedCharacteristics; // ivar: _modifiedCharacteristics


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoreDataRequest:(id)arg0 didSucceed:(BOOL)arg1 didModify:(BOOL)arg2 modifiedCharacteristics:(id)arg3 ;


@end


#endif