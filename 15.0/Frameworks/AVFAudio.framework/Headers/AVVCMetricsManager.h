// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVCMETRICSMANAGER_H
#define AVVCMETRICSMANAGER_H

@class CAReporter, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVVCMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    CAReporter *mMetricsReporter;
    NSInteger mAudioIssueDetector;
    NSUInteger mAudioDataAnalysisSiriSession;
}


@property (retain) NSMutableDictionary *avvcProfilingInfoDictionary; // ivar: _avvcProfilingInfoDictionary
@property (nonatomic) NSUInteger callToStartRecordHostTime; // ivar: _callToStartRecordHostTime
@property (retain) NSMutableDictionary *publicMetrics; // ivar: _publicMetrics
@property (nonatomic) NSUInteger voiceTriggerStartHostTime; // ivar: _voiceTriggerStartHostTime


+(*void)getLock;
+(id)sharedManager;
+(void)createSharedManager;
+(void)destroySharedManager;
-(BOOL)measureElapseTimeForMetric:(id)arg0 block:(id)arg1 ;
-(id)getStringDate:(id)arg0 ;
-(id)init;
-(id)retrieveMetrics;
-(id)retrieveProfileMetrics;
-(int)adamAnalyzeBuffer:(struct AudioBufferList )arg0 numFrames:(unsigned int)arg1 timeStamp:(struct AudioTimeStamp *)arg2 shouldAnalyze:(BOOL)arg3 ;
-(int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList )arg0 numFrames:(unsigned int)arg1 timeStamp:(struct AudioTimeStamp *)arg2 shouldAnalyze:(BOOL)arg3 ;
-(int)resetADAM;
-(int)resetAudioIssueDetector;
-(int)setADAMFormat:(struct CAStreamBasicDescription )arg0 numFrames:(unsigned int)arg1 ;
-(int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription )arg0 numFrames:(unsigned int)arg1 ;
-(void)checkAndUpdateReporterID;
-(void)dealloc;
-(void)logProfileMetrics:(id)arg0 ;
-(void)logRecordAudioFormat:(struct CAStreamBasicDescription )arg0 ;
-(void)logRecordRoute:(id)arg0 andPlaybackRoute:(id)arg1 ;
-(void)logSessionMetric:(id)arg0 value:(id)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 ;
-(void)logSessionMetric:(id)arg0 value:(id)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 context:(id)arg4 ;
-(void)logSingleMetric:(id)arg0 value:(id)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 ;
-(void)resetProfileMetrics;
-(void)updateWithReporterID:(NSInteger)arg0 ;


@end


#endif