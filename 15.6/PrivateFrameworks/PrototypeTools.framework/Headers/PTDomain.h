// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTDOMAIN_H
#define PTDOMAIN_H

@class NSXPCConnection, NSString, NSMutableDictionary;
@protocol PTDomainClient;

#import <Foundation/Foundation.h>

#import "PTDomainInfo.h"
#import "PTSettings.h"
#import "PTTestRecipe.h"

@interface PTDomain : NSObject <PTDomainClient>

 {
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    BOOL _registrationRequested;
    BOOL _registrationCompleted;
    BOOL _haveSentProxyDefinition;
    CGFloat _delayBeforeRegisteringAfterInterruption;
    BOOL _archiveIsApplied;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)rootSettingsClass;
+(id)_sharedInstance;
+(id)domainGroupName;
+(id)domainName;
+(id)rootSettings;
+(void)registerTestRecipe:(id)arg0 ;
-(id)_domainID;
-(id)_domainInfo;
-(id)_init;
-(id)_rootSettings;
-(void)_applyArchive:(id)arg0 ;
-(void)_applyArchiveValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_createConnection;
-(void)_disableObservationIfNecessary;
-(void)_handleConnectionInterrupted;
-(void)_handleConnectionInvalidated;
-(void)_noteRegistrationCompleted;
-(void)_registerTestRecipe:(id)arg0 ;
-(void)_registerWithServerIfNecessary;
-(void)_restoreDefaultSettings;
-(void)_sendProxyDefinitionIfNecessary;
-(void)_tearDownConnection;
-(void)_updateActiveTestRecipe;
-(void)_updateServerConnectionStatusIfNecessary;
-(void)dealloc;
-(void)invokeOutletAtKeyPath:(id)arg0 ;
-(void)restoreDefaultSettings;
-(void)sendActiveTestRecipeEvent:(NSInteger)arg0 ;
-(void)setArchiveValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)updateSettingsFromArchive:(id)arg0 ;


@end


#endif