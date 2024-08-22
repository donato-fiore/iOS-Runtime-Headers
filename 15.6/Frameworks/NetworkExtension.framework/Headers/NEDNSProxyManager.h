// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEDNSPROXYMANAGER_H
#define NEDNSPROXYMANAGER_H

@class NSString;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEConfigurationManager.h"
#import "NEDNSProxyProviderProtocol.h"

@interface NEDNSProxyManager : NSObject <NEPrettyDescription>



@property (retain) NEConfiguration *configuration; // ivar: _configuration
@property (readonly) NEConfigurationManager *configurationManager; // ivar: _configurationManager
@property (getter=isEnabled) BOOL enabled;
@property BOOL hasLoaded; // ivar: _hasLoaded
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSProxyProviderProtocol *providerProtocol;


+(id)sharedManager;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initDNSProxyManagerWithPluginType:(id)arg0 ;
-(void)createEmptyConfiguration;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif