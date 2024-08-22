// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ELSWHITELISTENTRY_H
#define ELSWHITELISTENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ELSWhitelistEntry : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *descriptionLocalizationKey; // ivar: _descriptionLocalizationKey
@property (retain, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (retain, nonatomic) NSString *parameterName; // ivar: _parameterName
@property (readonly, nonatomic) BOOL requiresFollowup; // ivar: _requiresFollowup
@property (readonly, nonatomic) BOOL retry; // ivar: _retry
@property (readonly, nonatomic) NSString *sensitiveInformationLocalizationKey; // ivar: _sensitiveInformationLocalizationKey


-(id)initWithBundleIdentifier:(id)arg0 parameterName:(id)arg1 baseLocalizationKey:(id)arg2 needsWAPIKeys:(BOOL)arg3 requiresFollowup:(BOOL)arg4 retry:(BOOL)arg5 ;
-(id)initWithBundleIdentifier:(id)arg0 parameterName:(id)arg1 displayNameLocalizationKey:(id)arg2 descriptionLocalizationKey:(id)arg3 sensitiveInformationLocalizationKey:(id)arg4 needsWAPIKeys:(BOOL)arg5 requiresFollowup:(BOOL)arg6 retry:(BOOL)arg7 ;


@end


#endif