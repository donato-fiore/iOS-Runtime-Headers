// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEVPNMANAGER_H
#define NEVPNMANAGER_H

@class NSString, NSUUID, NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEVPNConnection.h"
#import "NEVPNProtocol.h"

@interface NEVPNManager : NSObject <NEPrettyDescription>

 {
    BOOL _hasLoaded;
    BOOL _notificationSent;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (copy) NEConfiguration *configuration; // ivar: _configuration
@property (readonly) NEVPNConnection *connection; // ivar: _connection
@property (getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isFromMDM) BOOL fromMDM;
@property (readonly, nonatomic, getter=isFromProfile) BOOL fromProfile;
@property (readonly, nonatomic) NSUUID *identifier;
@property (copy) NSString *localizedDescription;
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;


+(id)create;
+(id)sharedManager;
+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
-(BOOL)isProtocolTypeValid:(NSInteger)arg0 ;
-(id)copyCurrentUserStartOptions;
-(id)createL2TPUserPreferencesWithName:(id)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithGrade:(NSInteger)arg0 connection:(id)arg1 tunnelType:(NSInteger)arg2 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeFromPreferencesWithCompletionHandler:(id)arg0 ;
-(void)saveToPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif