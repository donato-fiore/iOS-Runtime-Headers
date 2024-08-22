// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAPPPUSHMANAGER_H
#define NEAPPPUSHMANAGER_H

@class NSString, NSArray, NSDictionary;
@protocol NEAppPushDelegate;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEConfiguration.h"

@interface NEAppPushManager : NSObject {
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEConfiguration *_configuration;
    *void _nesmConnection;
}


@property (getter=isActive) BOOL active; // ivar: _active
@property (weak) NSObject<NEAppPushDelegate> *delegate; // ivar: _delegate
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *matchPrivateLTENetworks;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSDictionary *providerConfiguration;


+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif