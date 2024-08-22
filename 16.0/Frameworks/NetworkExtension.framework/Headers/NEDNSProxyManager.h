// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEDNSPROXYMANAGER_H
#define NEDNSPROXYMANAGER_H

@class NSString, NSUUID;
@protocol NEPrettyDescription, NEDNSProxyManagerDelegate;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEVPNConnection.h"
#import "NEConfiguration.h"
#import "NEDNSProxyProviderProtocol.h"

@interface NEDNSProxyManager : NSObject <NEPrettyDescription>

 {
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (retain) NEConfiguration *configuration; // ivar: _configuration
@property (weak) NSObject<NEDNSProxyManagerDelegate> *delegate; // ivar: _delegate
@property (getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isFromMDM) BOOL isFromMDM;
@property (readonly, nonatomic, getter=isFromProfile) BOOL isFromProfile;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSProxyProviderProtocol *providerProtocol;


+(id)sharedManager;
+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(void)dealloc;
-(void)fetchStatusWithCompletionHandler:(id)arg0 ;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif