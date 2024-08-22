// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMETHREADNETWORKMODEL_H
#define HMDHOMETHREADNETWORKMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeThreadNetworkModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *threadNetworkID;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)properties;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif