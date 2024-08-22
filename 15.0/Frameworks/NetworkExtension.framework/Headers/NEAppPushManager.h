// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPPUSHMANAGER_H
#define NEAPPPUSHMANAGER_H

@class NSString, NSArray, NSDictionary;
@protocol NEAppPushDelegate;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEConfigurationManager.h"

@interface NEAppPushManager : NSObject

@property (getter=isActive) BOOL active; // ivar: _active
@property (copy) NEConfiguration *configuration; // ivar: _configuration
@property (readonly) NEConfigurationManager *configurationManager; // ivar: _configurationManager
@property (weak) NSObject<NEAppPushDelegate> *delegate; // ivar: _delegate
@property (getter=isEnabled) BOOL enabled;
@property BOOL hasLoaded; // ivar: _hasLoaded
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *matchPrivateLTENetworks;
@property (copy) NSArray *matchSSIDs;
@property *void nesmConnection; // ivar: _nesmConnection
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSDictionary *providerConfiguration;


+(id)loadedManagers;
+(void)deliverIncomingCallPayload:(id)arg0 ;
+(void)initCallKitXPCClient;
+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
-(BOOL)establishSessionManagerConnectionWithConfigurationID:(id)arg0 ;
-(id)init;
-(id)initWithGrade:(NSInteger)arg0 ;
-(void)cancelSessionManagerConnection;
-(void)createEmptyConfigurationWithGrade:(NSInteger)arg0 ;
-(void)dealloc;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif