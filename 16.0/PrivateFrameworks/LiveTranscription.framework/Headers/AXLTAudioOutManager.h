// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTAUDIOOUTMANAGER_H
#define AXLTAUDIOOUTMANAGER_H

@class AVSystemController, NSString, NSMapTable;
@protocol AXLTTranscriberProtocol, OS_dispatch_queue, AXLTTranscriberDelegateProtocol;

#import <Foundation/Foundation.h>


@interface AXLTAudioOutManager : NSObject <AXLTTranscriberProtocol>



@property (retain, nonatomic) AVSystemController *avSystemController; // ivar: _avSystemController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue; // ivar: _bufferQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXLTTranscriberDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTranscribing; // ivar: _isTranscribing
@property (readonly) NSMapTable *processToTranscriberMap; // ivar: _processToTranscriberMap
@property BOOL subscribed; // ivar: _subscribed
@property (readonly) Class superclass;


+(BOOL)isExcludedAppID:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_pidSupportsCoreMediaNotifications:(int)arg0 ;
-(BOOL)_startTranscriptionForPID:(int)arg0 appID:(id)arg1 appName:(id)arg2 error:(*id)arg3 ;
-(BOOL)_startTranscriptionForPID:(int)arg0 appID:(id)arg1 appName:(id)arg2 excludingPIDs:(id)arg3 error:(*id)arg4 ;
-(BOOL)_startTranscriptionForPID:(int)arg0 appName:(id)arg1 error:(*id)arg2 ;
-(BOOL)_startTranscriptionForPID:(int)arg0 appName:(id)arg1 excludingPIDs:(id)arg2 error:(*id)arg3 ;
-(BOOL)_startTranscriptionForPID:(int)arg0 error:(*id)arg1 ;
-(BOOL)_stopTranscriptionForPID:(int)arg0 error:(*id)arg1 ;
-(BOOL)isTranscribingForPID:(int)arg0 ;
-(BOOL)startTranscription:(*id)arg0 ;
-(BOOL)stopTranscription:(*id)arg0 ;
-(id)_reportErrorWithCode:(NSInteger)arg0 debugErrorString:(id)arg1 cleanupForPID:(int)arg2 ;
-(id)_tapDescriptionForPID:(int)arg0 tapFormat:(id)arg1 excludePIDs:(id)arg2 ;
-(id)appInfoFromPid:(int)arg0 ;
-(id)init;
-(void)_avSessionMediaServicesResetNotification:(id)arg0 ;
-(void)_cleanupAllPids;
-(void)_cleanupForPID:(int)arg0 ;
-(void)_setupAVSystemNotificationSystem;
-(void)_someSessionIsPlayingDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)handleInputBufferWithContext:(*void)arg0 audioQueue:(struct OpaqueAudioQueue *)arg1 audioBuffer:(struct AudioQueueBuffer *)arg2 timestamp:(struct AudioTimeStamp *)arg3 packetCount:(unsigned int)arg4 packetDesc:(struct AudioStreamPacketDescription *)arg5 ;
-(void)registerFirstTimeForAVSystemControllerNotifications;
-(void)registerForAVSystemContollerNotifications;
-(void)resetTranscription;
-(void)unregisterForAVSystemContollerNotifications;
-(void)updateAudioSessionsInfoFromSessionsArray:(id)arg0 ;


@end


#endif