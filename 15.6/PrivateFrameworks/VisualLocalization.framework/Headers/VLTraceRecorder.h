// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VLTRACERECORDER_H
#define VLTRACERECORDER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VLTraceRecorder : NSObject {
    NSURL *_destinationDirectory;
    NSObject<OS_dispatch_queue> *_queue;
    GEOOnce_s _began;
    GEOOnce_s _finished;
    NSURL *_baseDirectory;
    NSURL *_imagesDirectory;
    NSURL *_parametersDirectory;
    NSURL *_resultsDirectory;
}




+(id)defaultDirectory;
-(id)initWithDirectory:(id)arg0 ;
-(void)_beginTraceIfNecessary;
-(void)_finishOnIsolationQueue;
-(void)_recordAttemptOnIsolationQueue:(id)arg0 ;
-(void)finish;
-(void)recordAttempt:(id)arg0 ;
-(void)start;


@end


#endif