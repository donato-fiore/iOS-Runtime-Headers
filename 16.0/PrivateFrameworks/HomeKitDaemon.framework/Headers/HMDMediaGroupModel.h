// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPMODEL_H
#define HMDMEDIAGROUPMODEL_H

@class NSString;
@protocol HMFLogging;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaGroupModel : HMDBackingStoreModelObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *name;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)properties;
-(id)attributeDescriptions;
-(id)initWithUUID:(id)arg0 parentUUID:(id)arg1 name:(id)arg2 changeType:(NSUInteger)arg3 ;
-(id)logIdentifier;
-(id)privateDescription;


@end


#endif