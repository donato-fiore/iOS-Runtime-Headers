// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGOPENAPPSETTINGS_H
#define SASETTINGOPENAPPSETTINGS_H

@class NSString, NSArray;
@protocol SASettingAppSettingCommand;


#import "SASettingOpenSettings.h"

@interface SASettingOpenAppSettings : SASettingOpenSettings <SASettingAppSettingCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appWithSettingsId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)openAppSettings;
+(id)openAppSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif