// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALANGUAGESETTINGS_H
#define SALANGUAGESETTINGS_H

@class NSDictionary;


#import "SABaseClientBoundCommand.h"

@interface SALanguageSettings : SABaseClientBoundCommand

@property (copy, nonatomic) NSDictionary *configuredLocales;


+(id)languageSettings;
+(id)languageSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif