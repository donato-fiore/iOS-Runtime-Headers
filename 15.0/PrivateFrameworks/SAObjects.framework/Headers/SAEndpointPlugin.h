// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAENDPOINTPLUGIN_H
#define SAENDPOINTPLUGIN_H

@class NSString;


#import "SAEndpoint.h"

@interface SAEndpointPlugin : SAEndpoint

@property (copy, nonatomic) NSString *pluginPath;


+(id)endpointPlugin;
+(id)endpointPluginWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif