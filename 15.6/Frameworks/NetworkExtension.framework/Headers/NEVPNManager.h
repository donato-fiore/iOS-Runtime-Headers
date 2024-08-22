// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEVPNMANAGER_H
#define NEVPNMANAGER_H

@class NSString, NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEVPNConnection.h"
#import "NEVPNProtocol.h"

@interface NEVPNManager : NSObject <NEPrettyDescription>



@property (copy) NEConfiguration *configuration; // ivar: _configuration
@property (readonly) NEVPNConnection *connection; // ivar: _connection
@property (getter=isEnabled) BOOL enabled;
@property BOOL hasLoaded; // ivar: _hasLoaded
@property (copy) NSString *localizedDescription;
@property BOOL notificationSent; // ivar: _notificationSent
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;


+(id)loadedManagers;
+(id)mapError:(id)arg0 ;
+(id)sharedManager;
-(BOOL)isProtocolTypeValid:(NSInteger)arg0 ;
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