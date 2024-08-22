// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENTESTRESULTMANAGER_H
#define ENTESTRESULTMANAGER_H

@class NSMutableDictionary, NSURLSession, ENRegion;
@protocol OS_dispatch_queue, ENTestResultManagerDelegate;

#import <Foundation/Foundation.h>

#import "ENChaffTestResultSession.h"
#import "ENXPCTimer.h"
#import "ENConfigurationStore.h"
#import "ENExposureDatabase.h"
#import "ENTemporaryExposureKeyManager.h"

@interface ENTestResultManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ENChaffTestResultSession *_chaffSession;
    NSMutableDictionary *_sessionsByUUID;
    NSURLSession *_URLSession;
    NSURLSession *_URLBackupSession;
    ENXPCTimer *_chaffingTimer;
    ENRegion *_chaffingRegion;
    NSUInteger _maxRetryTime;
}


@property (readonly, nonatomic) ENConfigurationStore *configurationStore; // ivar: _configurationStore
@property (weak, nonatomic) NSObject<ENTestResultManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ENExposureDatabase *exposureDatabase; // ivar: _exposureDatabase
@property (readonly, nonatomic) ENTemporaryExposureKeyManager *temporaryExposureKeyManager; // ivar: _temporaryExposureKeyManager


+(BOOL)checkValidNonce:(id)arg0 size:(NSUInteger)arg1 ;
+(id)generateSecureNonce:(NSUInteger)arg0 ;
-(BOOL)_getRevisionToken:(*id)arg0 forSession:(id)arg1 error:(*id)arg2 ;
-(BOOL)_setRevisionToken:(id)arg0 forSession:(id)arg1 error:(*id)arg2 ;
-(id)_configurationForRegion:(id)arg0 error:(*id)arg1 ;
-(id)_createSessionWithVerificationCode:(id)arg0 proxyEnabled:(BOOL)arg1 region:(id)arg2 maxRetryTime:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)_createURLSessionWithSecondaryIdentifier:(BOOL)arg0 ;
-(id)_existingSessionForVerificationCode:(id)arg0 region:(id)arg1 ;
-(id)_getTemporaryExposureKeysForUpload:(BOOL)arg0 requireConsentForRegion:(id)arg1 error:(*id)arg2 ;
-(id)_metadataForSessionWithUUID:(id)arg0 error:(*id)arg1 ;
-(id)_revisionTokenKeyForSession:(id)arg0 ;
-(id)_serverConfigurationForRegion:(id)arg0 error:(*id)arg1 ;
-(id)_sessionWithUUID:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfigurationStore:(id)arg0 exposureDatabase:(id)arg1 temporaryExposureKeyManager:(id)arg2 queue:(id)arg3 ;
-(id)metadataForSessionWithUUID:(id)arg0 error:(*id)arg1 ;
-(void)_activateAutomatedChaffingWithRegion:(id)arg0 ;
-(void)_deactivateAutomatedChaffing;
-(void)_finishSessionWithUUID:(id)arg0 userDidConsent:(BOOL)arg1 metadata:(id)arg2 completionHandler:(id)arg3 ;
-(void)_invalidate;
-(void)_invalidateSession:(id)arg0 ;
-(void)_startChaffTestVerficationSessionForRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)_startSelfReportWebSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)_startTestVerficationSessionWithCode:(id)arg0 proxyEnabled:(BOOL)arg1 region:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateChaffingTimerBlock;
-(void)activateAutomatedChaffingWithRegion:(id)arg0 ;
-(void)activateWebSession:(id)arg0 verificationTimestamp:(CGFloat)arg1 nonceTimestamp:(CGFloat)arg2 ;
-(void)deactivateAutomatedChaffing;
-(void)deactivateWebSession;
-(void)finishSessionWithUUID:(id)arg0 userDidConsent:(BOOL)arg1 metadata:(id)arg2 completionHandler:(id)arg3 ;
-(void)invalidate;
-(void)setMaxRetryTime:(NSUInteger)arg0 ;
-(void)startChaffTestVerficationSessionForRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)startSelfReportWebSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)startTestVerficationSessionWithCode:(id)arg0 proxyEnabled:(BOOL)arg1 region:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif