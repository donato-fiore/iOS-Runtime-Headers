// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISEVENTBULLETINNOTIFICATIONREGISTRATIONREMOTE_H
#define HMDAUDIOANALYSISEVENTBULLETINNOTIFICATIONREGISTRATIONREMOTE_H

@class HMFObject;


#import "HMDAudioAnalysisEventBulletinNotificationRegistration.h"
#import "HMDBulletinNotificationRegistrationSource.h"

@interface HMDAudioAnalysisEventBulletinNotificationRegistrationRemote : HMFObject

@property (readonly, copy) HMDAudioAnalysisEventBulletinNotificationRegistration *registration; // ivar: _registration
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source; // ivar: _source


-(id)attributeDescriptions;
-(id)initWithAudioAnalysisEventBulletinNotificationRegistration:(id)arg0 source:(id)arg1 ;


@end


#endif