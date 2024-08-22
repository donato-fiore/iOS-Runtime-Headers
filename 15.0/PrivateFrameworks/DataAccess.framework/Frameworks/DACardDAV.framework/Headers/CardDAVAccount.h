// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVACCOUNT_H
#define CARDDAVACCOUNT_H

@class DAAccount, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, NSString, DACoreDAVTaskManager;
@protocol CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate;


#import "CardDAVLocalDBHelper.h"

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate>



@property (readonly, nonatomic) int cardDAVAccountVersion; // ivar: _cardDAVAccountVersion
@property (retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup; // ivar: _checkValidityTaskGroup
@property (retain, nonatomic) DACoreDAVLogger *curLogger; // ivar: _curLogger
@property (readonly, nonatomic) CardDAVLocalDBHelper *databaseHelper; // ivar: _databaseHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;


+(id)addressBookConstraintsPlistPath;
-(BOOL)enabledForDADataclass:(NSInteger)arg0 ;
-(BOOL)handleTrustChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)shouldLogTransmittedData;
-(NSUInteger)oauthVariant;
-(id)copyImageContentsAtURL:(id)arg0 outError:(*id)arg1 ;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)logHandle;
-(id)onBehalfOfBundleIdentifier;
-(id)serverComplianceClasses;
-(id)serverRoot;
-(id)spinnerIdentifiers;
-(id)userAgentHeader;
-(id)wellKnownPaths;
-(void)_massageAddedOrModifiedVCard:(id)arg0 ;
-(void)addToCoreDAVLoggingDelegates;
-(void)coreDAVLogTransmittedDataPartial:(id)arg0 ;
-(void)coreDAVTransmittedDataFinished;
-(void)dealloc;
-(void)discoverInitialPropertiesWithConsumer:(id)arg0 ;
-(void)discoveryTask:(id)arg0 gotAccountInfo:(id)arg1 error:(id)arg2 ;
-(void)noteHomeSetOnDifferentHost:(id)arg0 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg0 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)setServerComplianceClasses:(id)arg0 ;


@end


#endif