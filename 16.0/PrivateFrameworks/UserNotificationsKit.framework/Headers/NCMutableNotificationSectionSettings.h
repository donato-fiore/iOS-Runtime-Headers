// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMUTABLENOTIFICATIONSECTIONSETTINGS_H
#define NCMUTABLENOTIFICATIONSECTIONSETTINGS_H

@class NSString, NSDictionary, UIImage, NSSet;
@protocol NCNotificationMuteAssertion;


#import "NCNotificationSectionSettings.h"

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasProvisionalAuthorization;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) BOOL isDeliveredQuietly;
@property (nonatomic) NSObject<NCNotificationMuteAssertion> *muteAssertion;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) UIImage *settingsIcon;
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (copy, nonatomic) NSString *subSectionIdentifier;
@property (copy, nonatomic) NSSet *subSectionSettings;
@property (nonatomic, getter=isUserConfigurable) BOOL userConfigurable;




@end


#endif