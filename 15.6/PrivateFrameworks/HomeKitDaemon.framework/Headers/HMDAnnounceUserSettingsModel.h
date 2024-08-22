// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDANNOUNCEUSERSETTINGSMODEL_H
#define HMDANNOUNCEUSERSETTINGSMODEL_H

@class NSNumber, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDAnnounceUserSettingsModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy) NSNumber *announceNotificationModeForCurrentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)modelIDNamespace;
+(id)properties;
-(id)initWithUser:(id)arg0 ;
-(id)modelIDForUser:(id)arg0 ;


@end


#endif