// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPERSITEPREFERENCEDISPLAYINFORMATION_H
#define _SFPERSITEPREFERENCEDISPLAYINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SFPerSitePreferenceDisplayInformation : NSObject

@property (readonly, nonatomic) NSUInteger displayOption; // ivar: _displayOption
@property (readonly, copy, nonatomic) NSString *localizedAllWebsiteSettingsTitle; // ivar: _localizedAllWebsiteSettingsTitle
@property (readonly, copy, nonatomic) NSString *localizedClearAllSettingsPrompt; // ivar: _localizedClearAllSettingsPrompt
@property (readonly, copy, nonatomic) NSString *localizedSiteSpecificSettingsTitle; // ivar: _localizedSiteSpecificSettingsTitle


+(id)displayInformationForPerSitePreference:(id)arg0 ;
+(void)_buildMapIfNeeded;
-(id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg0 localizedAllWebsiteSettingsTitle:(id)arg1 localizedClearAllSettingsPrompt:(id)arg2 displayOption:(NSUInteger)arg3 ;


@end


#endif