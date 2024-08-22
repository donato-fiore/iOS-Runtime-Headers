// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONCONTROLLERMODEL_H
#define HMDMEDIADESTINATIONCONTROLLERMODEL_H

@class NSArray, NSString, NSUUID, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable, HMFLogging;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaDestinationControllerModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable, HMFLogging>



@property (copy) NSArray *availableDestinationModelIdentifierStrings;
@property (retain) NSArray *availableDestinationModelIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain) NSUUID *destinationModelIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain) NSNumber *type;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)logCategory;
+(id)properties;
-(id)attributeDescriptions;
-(id)initWithData:(id)arg0 changeType:(NSUInteger)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;


@end


#endif