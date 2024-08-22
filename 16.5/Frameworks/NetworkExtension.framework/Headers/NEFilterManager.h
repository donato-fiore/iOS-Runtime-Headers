// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFILTERMANAGER_H
#define NEFILTERMANAGER_H

@class NSString, NSUUID;
@protocol NEPrettyDescription, NEFilterManagerDelegate;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEVPNConnection.h"
#import "NEConfiguration.h"
#import "NEFilterProviderConfiguration.h"

@interface NEFilterManager : NSObject <NEPrettyDescription>

 {
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (retain) NEConfiguration *configuration; // ivar: _configuration
@property (weak) NSObject<NEFilterManagerDelegate> *delegate; // ivar: _delegate
@property (getter=isEnabled) BOOL enabled;
@property NSInteger grade;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isFromMDM) BOOL isFromMDM;
@property (readonly, nonatomic, getter=isFromProfile) BOOL isFromProfile;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;


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