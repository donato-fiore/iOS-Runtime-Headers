// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOFILEMANAGER_H
#define CSAUDIOFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface CSAudioFileManager : NSObject



+(id)_createAudioFileWriterForAdBlockerWithLoggingDir:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 withAccessoryID:(id)arg3 ;
+(id)_createAudioFileWriterForOSDWithLoggingDir:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 ;
+(id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 ;
+(id)_createAudioFileWriterForPHSTrainingWithLoggingDir:(id)arg0 inputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 ;
+(id)_createAudioFileWriterWithLoggingDir:(id)arg0 withLoggingUUID:(id)arg1 inputFormat:(struct AudioStreamBasicDescription )arg2 outputFormat:(struct AudioStreamBasicDescription )arg3 ;
+(id)_getDateLabel;
+(id)_sharedAudioLoggingQueue;
+(id)audioFileWriterForAttentiveSiri;
+(id)createAudioFileWriterForAdBlockerWithInputFormat:(struct AudioStreamBasicDescription )arg0 outputFormat:(struct AudioStreamBasicDescription )arg1 withAccessoryID:(id)arg2 ;
+(id)createAudioFileWriterForOSDWithInputFormat:(struct AudioStreamBasicDescription )arg0 outputFormat:(struct AudioStreamBasicDescription )arg1 ;
+(id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(struct AudioStreamBasicDescription )arg0 outputFormat:(struct AudioStreamBasicDescription )arg1 ;
+(id)createAudioFileWriterForPHSTrainingWithInputFormat:(struct AudioStreamBasicDescription )arg0 outputFormat:(struct AudioStreamBasicDescription )arg1 ;
+(id)createAudioFileWriterForRemoteVADWithInputFormat:(struct AudioStreamBasicDescription )arg0 outputFormat:(struct AudioStreamBasicDescription )arg1 withLoggingUUID:(id)arg2 ;
+(id)createAudioFileWriterWithInputFormat:(struct AudioStreamBasicDescription )arg0 outputFormat:(struct AudioStreamBasicDescription )arg1 withLoggingUUID:(id)arg2 ;
+(id)createSelectiveChannelAudioFileWriterWithChannelBitset:(NSUInteger)arg0 ;
+(void)_readDataFromFileHandle:(id)arg0 toFileHandle:(id)arg1 ;
+(void)cleanupOrphanedGradingFiles;
+(void)generateDeviceAudioLogging:(id)arg0 speechId:(id)arg1 ;
+(void)pruneLogFiles;
+(void)pruneNumberOfGradingFilesTo:(NSUInteger)arg0 ;
+(void)pruneNumberOfLogFilesTo:(NSUInteger)arg0 ;
+(void)removeLogFilesOlderThanNDays:(float)arg0 ;
+(void)removeOpportunisticAudioLoggingOlderThanNDays:(float)arg0 ;
+(void)removeRemoteP2PLogFilesOlderThanNDays:(float)arg0 ;


@end


#endif