// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERMANAGER_H
#define NEFILTERMANAGER_H

@class NSString;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEConfigurationManager.h"
#import "NEFilterProviderConfiguration.h"

@interface NEFilterManager : NSObject <NEPrettyDescription>



@property (retain) NEConfiguration *configuration; // ivar: _configuration
@property (readonly) NEConfigurationManager *configurationManager; // ivar: _configurationManager
@property (getter=isEnabled) BOOL enabled;
@property NSInteger grade;
@property BOOL hasLoaded; // ivar: _hasLoaded
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;


+(id)sharedManager;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFilterManagerWithPluginType:(id)arg0 ;
-(void)createEmptyConfiguration;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif