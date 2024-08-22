// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAACCESSORYMODEL_H
#define HMDMEDIAACCESSORYMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDAccessoryTransaction.h"

@interface HMDMediaAccessoryModel : HMDAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_getMKFMediaAccessoryFromAccessory:(id)arg0 ;
+(id)cd_getMKFMediaAccessoryFromAccessoryUUID:(id)arg0 ;
+(id)properties;


@end


#endif