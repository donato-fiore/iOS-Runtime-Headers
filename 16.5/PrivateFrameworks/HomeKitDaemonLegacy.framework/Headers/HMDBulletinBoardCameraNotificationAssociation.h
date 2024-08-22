// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBULLETINBOARDCAMERANOTIFICATIONASSOCIATION_H
#define HMDBULLETINBOARDCAMERANOTIFICATIONASSOCIATION_H

@class HMFObject, NSMutableSet;


#import "HMDCameraProfile.h"

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject

@property (readonly, nonatomic) HMDCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, nonatomic) NSMutableSet *notificationGeneratingServicesWithCamera; // ivar: _notificationGeneratingServicesWithCamera


-(id)description;
-(id)initWithCameraProfile:(id)arg0 ;


@end


#endif