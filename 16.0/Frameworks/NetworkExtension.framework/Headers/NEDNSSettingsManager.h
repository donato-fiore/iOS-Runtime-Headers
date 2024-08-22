// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEDNSSETTINGSMANAGER_H
#define NEDNSSETTINGSMANAGER_H

@class NSString, NSUUID, NSArray;
@protocol NEPrettyDescription, NEDNSSettingsManagerDelegate;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEVPNConnection.h"
#import "NEConfiguration.h"
#import "NEDNSSettings.h"

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription>

 {
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
    NEConfiguration *_configuration;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (weak) NSObject<NEDNSSettingsManagerDelegate> *delegate; // ivar: _delegate
@property (retain) NEDNSSettings *dnsSettings;
@property (getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isFromProfile) BOOL fromProfile;
@property (readonly, nonatomic) NSUUID *identifier;
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *onDemandRules;


+(id)sharedManager;
+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(void)fetchStatusWithCompletionHandler:(id)arg0 ;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif