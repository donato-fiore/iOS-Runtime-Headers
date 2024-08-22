// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAAPPSQUITAPP_H
#define SAAPPSQUITAPP_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAppsQuitApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *sceneId;


+(id)quitApp;
+(id)quitAppWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif