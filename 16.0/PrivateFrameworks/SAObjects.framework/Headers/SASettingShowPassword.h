// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSHOWPASSWORD_H
#define SASETTINGSHOWPASSWORD_H

@class NSString, NSNumber;


#import "SASettingCommand.h"

@interface SASettingShowPassword : SASettingCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appOrWebsiteName;
@property (copy, nonatomic) NSNumber *shouldPromptForAuthentication;
@property (copy, nonatomic) NSString *spokenAppOrWebsiteName;


+(id)showPassword;
+(id)showPasswordWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif