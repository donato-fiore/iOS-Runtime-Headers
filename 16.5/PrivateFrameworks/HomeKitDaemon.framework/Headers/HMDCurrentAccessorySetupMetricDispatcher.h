// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCURRENTACCESSORYSETUPMETRICDISPATCHER_H
#define HMDCURRENTACCESSORYSETUPMETRICDISPATCHER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMMLogEventSubmitting;



@interface HMDCurrentAccessorySetupMetricDispatcher : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    BOOL _submitted;
    id *_currentUpTicksFactory;
    id<HMMLogEventSubmitting> *_logEventSubmitter;
}


@property (readonly) NSUInteger addAccessoryFinishTime; // ivar: _addAccessoryFinishTime
@property (readonly) NSUInteger coreDataFirstCloudImportCompleteTime; // ivar: _coreDataFirstCloudImportCompleteTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger pairingIdentityCreationTime; // ivar: _pairingIdentityCreationTime
@property (readonly) NSUInteger settingsCreationTime; // ivar: _settingsCreationTime
@property (readonly) NSUInteger setupSessionEndTime; // ivar: _setupSessionEndTime
@property (readonly) NSUInteger setupSessionStartTime; // ivar: _setupSessionStartTime
@property (readonly) NSUInteger siriReadyTime; // ivar: _siriReadyTime
@property (readonly) BOOL submitted;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSetupSessionStartTime:(NSUInteger)arg0 setupSessionEndTime:(NSUInteger)arg1 logEventSubmitter:(id)arg2 ;
-(id)initWithSetupSessionStartTime:(NSUInteger)arg0 setupSessionEndTime:(NSUInteger)arg1 logEventSubmitter:(id)arg2 currentUpTicksFactory:(id)arg3 ;
-(void)markCoreDataFirstImportComplete;
-(void)markCurrentAccessoryAddComplete;
-(void)markPairingIdentityCreated;
-(void)markSettingsCreated;
-(void)markSiriReady;


@end


#endif