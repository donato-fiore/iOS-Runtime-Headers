// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDULTRONINTERNALRECORDINGMANAGER_H
#define AXSDULTRONINTERNALRECORDINGMANAGER_H

@class NSTimer, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXHARingBuffer.h"

@interface AXSDUltronInternalRecordingManager : NSObject {
    CGFloat _sampleLength;
    NSTimer *_cleanupTimer;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
    AXHARingBuffer *_audioRingBuffer;
    NSMutableDictionary *_detectionResultCollection;
    NSMutableDictionary *_currentDetections;
}




+(BOOL)_cleanupUltronFiles:(id)arg0 ;
+(BOOL)isEnrolled;
+(id)_directory;
+(id)_retrieveFilesOlderThan:(CGFloat)arg0 ;
+(id)defaults;
+(id)filesNearestDate:(id)arg0 ;
+(id)path;
+(void)_reduceFileDirectorySize;
+(void)cleanupUltron;
+(void)enroll;
+(void)unenroll;
-(id)audioFileSettings;
-(id)getDictionaryForListenType;
-(id)initWithSampleLength:(CGFloat)arg0 bufferSize:(CGFloat)arg1 ;
-(void)_recordResultToFile:(id)arg0 ;
-(void)dealloc;
-(void)listenEngineFailedToStartWithError:(id)arg0 ;
-(void)saveDetectionResult:(id)arg0 ;
-(void)trackBuffer:(id)arg0 atTime:(id)arg1 ;


@end


#endif