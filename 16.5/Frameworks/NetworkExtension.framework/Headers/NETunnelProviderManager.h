// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETUNNELPROVIDERMANAGER_H
#define NETUNNELPROVIDERMANAGER_H

@class NSArray;


#import "NEVPNManager.h"

@interface NETunnelProviderManager : NEVPNManager

@property (copy) NSArray *appRules; // ivar: _appRules
@property (copy) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy) NSArray *calendarDomains; // ivar: _calendarDomains
@property (copy) NSArray *contactsDomains; // ivar: _contactsDomains
@property (copy) NSArray *excludedDomains; // ivar: _excludedDomains
@property (copy) NSArray *mailDomains; // ivar: _mailDomains
@property (readonly) NSInteger routingMethod;
@property (copy) NSArray *safariDomains; // ivar: _safariDomains


+(id)forPerAppVPN;
+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
-(BOOL)isProtocolTypeValid:(NSInteger)arg0 ;
-(id)copyAppRules;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithSessionType:(int)arg0 tunnelType:(NSInteger)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif