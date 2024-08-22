// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOEVENTRECORDERINSTRUMENTATION_H
#define GEOEVENTRECORDERINSTRUMENTATION_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOEventRecorderInstrumentation : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSString *_filepath;
    NSString *_geoFilepath;
    NSString *_movieFilepath;
    NSDate *_startDate;
}




+(id)defaultInstrumentation;
+(id)initializeDefaultInstrumentation;
+(void)endInstrumentation;
-(id)getRecordedFilePaths;
-(id)init;
-(void)_captureScreenVideo:(id)arg0 ;
-(void)_setupLogging;
-(void)captureEventRecorderScreenVideo;
-(void)captureUIEvent:(id)arg0 ;
-(void)captureUserActionLogMessageEvent:(id)arg0 ;
-(void)initializeFilepaths;
-(void)writeString:(id)arg0 ToFilepath:(id)arg1 ;


@end


#endif