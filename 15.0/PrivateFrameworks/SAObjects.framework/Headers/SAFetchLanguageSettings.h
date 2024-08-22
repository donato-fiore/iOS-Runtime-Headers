// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFETCHLANGUAGESETTINGS_H
#define SAFETCHLANGUAGESETTINGS_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAFetchLanguageSettings : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idiom;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemBuildPrefix;


+(id)fetchLanguageSettings;
+(id)fetchLanguageSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif