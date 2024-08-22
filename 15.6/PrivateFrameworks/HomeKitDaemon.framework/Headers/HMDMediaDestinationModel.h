// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONMODEL_H
#define HMDMEDIADESTINATIONMODEL_H

@class NSUUID, NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable, HMFLogging;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaDestinationModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable, HMFLogging>



@property (retain) NSUUID *audioGroupIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain) NSNumber *supportedOptions;
@property (retain) NSNumber *type;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)logCategory;
+(id)properties;
-(id)attributeDescriptions;
-(id)initWithDestination:(id)arg0 changeType:(NSUInteger)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;


@end


#endif