// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONSECTIONSETTINGS_H
#define NCNOTIFICATIONSECTIONSETTINGS_H

@class NSString, NSDictionary, UIImage, NSSet;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying, NCNotificationMuteAssertion;

#import <Foundation/Foundation.h>


@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasProvisionalAuthorization; // ivar: _hasProvisialAuthorization
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAppClip; // ivar: _isAppClip
@property (readonly, nonatomic) BOOL isDeliveredQuietly; // ivar: _isDeliveredQuietly
@property (readonly, nonatomic) NSObject<NCNotificationMuteAssertion> *muteAssertion; // ivar: _muteAssertion
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, copy, nonatomic) NSDictionary *settings; // ivar: _settings
@property (readonly, nonatomic) UIImage *settingsIcon; // ivar: _settingsIcon
@property (readonly, nonatomic) BOOL showsCustomSettingsLink; // ivar: _showsCustomSettingsLink
@property (readonly, copy, nonatomic) NSString *subSectionIdentifier; // ivar: _subSectionIdentifier
@property (readonly, copy, nonatomic) NSSet *subSectionSettings; // ivar: _subSectionSettings
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserConfigurable) BOOL userConfigurable; // ivar: _userConfigurable


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationSectionSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif