// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEDNSSETTINGSMANAGER_H
#define NEDNSSETTINGSMANAGER_H

@class NSString, NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEConfigurationManager.h"
#import "NEDNSSettings.h"

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription>



@property (retain) NEConfiguration *configuration; // ivar: _configuration
@property (readonly) NEConfigurationManager *configurationManager; // ivar: _configurationManager
@property (retain) NEDNSSettings *dnsSettings;
@property (getter=isEnabled) BOOL enabled;
@property BOOL hasLoaded; // ivar: _hasLoaded
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *onDemandRules;


+(id)sharedManager;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithGrade:(NSInteger)arg0 ;
-(void)createEmptyConfigurationWithGrade:(NSInteger)arg0 ;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif