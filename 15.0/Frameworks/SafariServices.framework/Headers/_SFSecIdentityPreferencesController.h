// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSECIDENTITYPREFERENCESCONTROLLER_H
#define _SFSECIDENTITYPREFERENCESCONTROLLER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _SFSecIdentityPreferencesController : NSObject {
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}




+(id)ephemeralSecIdentityPreferencesController;
+(id)sharedPersistentSecIdentityPreferencesController;
-(BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg0 ;
-(id)_initUsingEphemeralStorage:(BOOL)arg0 ;
-(void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)arg0 forDomainAndPort:(id)arg1 ;


@end


#endif