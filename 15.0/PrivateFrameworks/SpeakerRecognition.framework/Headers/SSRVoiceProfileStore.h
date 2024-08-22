// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRVOICEPROFILESTORE_H
#define SSRVOICEPROFILESTORE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRVoiceProfileStorePrefs.h"

@interface SSRVoiceProfileStore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) SSRVoiceProfileStorePrefs *storePrefs; // ivar: _storePrefs
@property (retain) NSMutableArray *voiceProfileArray; // ivar: _voiceProfileArray


+(id)sharedInstance;
-(BOOL)_checkIfRetrainingRequiredForProfile:(id)arg0 ;
-(BOOL)checkIfVoiceProfile:(id)arg0 needsUpdatedWith:(id)arg1 withCategory:(NSUInteger)arg2 ;
-(BOOL)cleanupDuplicatedProfiles;
-(BOOL)evaluateImplicitAdditionPolicyWithScores:(id)arg0 forProfile:(id)arg1 withImplicitThreshold:(float)arg2 withDeltaThreshold:(float)arg3 ;
-(id)_deleteUserVoiceProfile:(id)arg0 ;
-(id)_enrolledVoiceProfiles;
-(id)_getTopScoringProfileIdFromScores:(id)arg0 ;
-(id)_retrainVoiceProfile:(id)arg0 withContext:(id)arg1 ;
-(id)_retrainVoiceProfile:(id)arg0 withContext:(id)arg1 withUtterances:(id)arg2 ;
-(id)copyAudioFiles:(id)arg0 toProfile:(id)arg1 forModelType:(NSUInteger)arg2 ;
-(id)deleteUserVoiceProfile:(id)arg0 ;
-(id)initStore;
-(id)updateVoiceProfile:(id)arg0 withUserName:(id)arg1 ;
-(id)userVoiceProfileForVoiceProfileID:(id)arg0 ;
-(id)userVoiceProfilesForAppDomain:(id)arg0 ;
-(id)userVoiceProfilesForAppDomain:(id)arg0 forLocale:(id)arg1 ;
-(id)userVoiceProfilesForLocale:(id)arg0 ;
-(void)_loadVoiceProfiles;
-(void)_logVoiceProfileConfusionWithCleanup:(BOOL)arg0 ;
-(void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg0 withForceRetrain:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_saveTrainedUsers:(id)arg0 ;
-(void)_synchronizeSiriVoiceProfilesWithAssistant;
-(void)_updateTrainedUsersWithAction:(NSUInteger)arg0 UserVoiceProfile:(id)arg1 ;
-(void)addImplicitUtterance:(id)arg0 toVoiceProfile:(id)arg1 withAsset:(id)arg2 withTriggerSource:(id)arg3 withAudioInput:(id)arg4 withCompletion:(id)arg5 ;
-(void)addUserVoiceProfile:(id)arg0 withContext:(id)arg1 withCompletion:(id)arg2 ;
-(void)cleanupVoiceProfileModelFilesForLocale:(id)arg0 ;
-(void)cleanupVoiceProfileStore:(id)arg0 ;
-(void)logVoiceProfileConfusionWithCleanup:(BOOL)arg0 ;
-(void)migrateVoiceProfilesIfNeededWithCompletionBlock:(id)arg0 ;
-(void)retrainVoiceProfile:(id)arg0 withContext:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif