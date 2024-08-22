// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDANNOUNCEUSERSETTINGSMODEL_H
#define HMDANNOUNCEUSERSETTINGSMODEL_H

@class NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDAnnounceUserSettingsModel : HMDBackingStoreModelObject

@property (copy) NSNumber *announceNotificationModeForCurrentDevice;


+(id)modelIDNamespace;
+(id)properties;
-(id)initWithUserUUID:(id)arg0 ;
-(id)modelIDForUser:(id)arg0 ;


@end


#endif