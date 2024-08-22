// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSP2PSERVICE_H
#define CSP2PSERVICE_H

@class NSString;
@protocol CSADCompanionServiceProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSP2PService : NSObject

@property (weak, nonatomic) NSObject<CSADCompanionServiceProvider> *adCompanionServiceProvider; // ivar: _adCompanionServiceProvider
@property (retain, nonatomic) NSString *lastCommunicatedPeer; // ivar: _lastCommunicatedPeer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *voiceIdentificationBatchId; // ivar: _voiceIdentificationBatchId
@property (retain, nonatomic) NSString *voiceTriggerBatchId; // ivar: _voiceTriggerBatchId


+(id)sharedInstance;
-(BOOL)isHeadlessDeviceDataCollectionModeEnabled;
-(BOOL)isInternalWithoutProfile;
-(id)_getContentsOfDirectory:(id)arg0 ;
-(id)_sendGradingData:(id)arg0 withFileName:(id)arg1 toPeerId:(id)arg2 withCompressedFlag:(BOOL)arg3 withUncompressedDataSize:(NSUInteger)arg4 withBatchId:(id)arg5 withRetainFileFlag:(BOOL)arg6 withFilePrefix:(id)arg7 withCompletion:(id)arg8 ;
-(id)_sha1:(id)arg0 ;
-(id)_spIdSiriDebugGradingDataRootDirectory;
-(id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg0 ;
-(id)_spIdSiriDebugVTDataDirectory;
-(id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg0 locale:(id)arg1 ;
-(id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg0 locale:(id)arg1 ;
-(id)_spIdSiriDebugVoiceProfileStoreRootDirectory;
-(id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg0 ;
-(id)_speakerRecognitionAudioLogsGradingDir;
-(id)init;
-(void)_compressFilesInDirectory:(id)arg0 matchingPredicate:(id)arg1 compressedFileAvailable:(id)arg2 ;
-(void)_compressFilesInDirectory:(id)arg0 matchingPredicate:(id)arg1 sortedByCreationDate:(BOOL)arg2 compressedFileAvailable:(id)arg3 ;
-(void)_createDirectoryIfDoesNotExist:(id)arg0 ;
-(void)_getHomeUserIdForSharedSiriId:(id)arg0 withCompletion:(id)arg1 ;
-(void)_processFetchVoiceProfileCommandFromPeerId:(id)arg0 requestInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_processGradingDataFetchCommandWithRequest:(id)arg0 fromSenderID:(id)arg1 withReply:(id)arg2 ;
-(void)_processParallelRecordingCommandWithRequest:(id)arg0 fromSenderID:(id)arg1 withReply:(id)arg2 ;
-(void)_processRemoteHeySiriCommandWithRequest:(id)arg0 fromSenderID:(id)arg1 withReply:(id)arg2 ;
-(void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg0 requestInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_processVoiceProfileDeleteCommandWithRequest:(id)arg0 fromSenderID:(id)arg1 withReply:(id)arg2 ;
-(void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg0 requestInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg0 requestInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_receiveParallelRecordingFromPeerId:(id)arg0 recordingInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_receiveVoiceGradingDataFromPeerId:(id)arg0 requestInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_receiveVoiceProfileFromPeerId:(id)arg0 voiceProfileInfo:(id)arg1 withReply:(id)arg2 ;
-(void)_sendAcousticGradingDataToPeerId:(id)arg0 ;
-(void)_sendCoreSpeechGradingDataToPeerId:(id)arg0 ;
-(void)_sendCoreSpeechMagusGradingDataToPeerId:(id)arg0 ;
-(void)_sendGeckoSpeechLogsToPeerId:(id)arg0 ;
-(void)_sendGradingData:(id)arg0 withFileName:(id)arg1 toPeerId:(id)arg2 withCompressedFlag:(BOOL)arg3 withUncompressedDataSize:(NSUInteger)arg4 withBatchId:(id)arg5 withRetainFileFlag:(BOOL)arg6 withFilePrefix:(id)arg7 ;
-(void)_sendVoiceProfile:(id)arg0 toPeerId:(id)arg1 ;
-(void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg0 forLocale:(id)arg1 ;
-(void)_sendVoiceTriggerGradingDataToPeerId:(id)arg0 ;
-(void)processRemoteCommandWithPayload:(id)arg0 fromPeer:(id)arg1 withReply:(id)arg2 ;
-(void)sendAcousticGradingDataToNearbyPeer;
-(void)sendCoreSpeechGradingDataToNearbyPeer;
-(void)sendGeckoSpeechLogsToCompanion;
-(void)sendVTNearMissGradingDataToCompanion;
-(void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg0 ;


@end


#endif