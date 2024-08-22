// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERATIMELAPSEVIDEOPROVIDER_H
#define HFCAMERATIMELAPSEVIDEOPROVIDER_H

@class NSOperationQueue;
@protocol OS_dispatch_queue, HFCameraTimelapseVideoDownloader;

#import <Foundation/Foundation.h>


@interface HFCameraTimelapseVideoProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookkeepingQueue; // ivar: _bookkeepingQueue
@property (retain, nonatomic) NSOperationQueue *downloadQueue; // ivar: _downloadQueue
@property (retain, nonatomic) NSObject<HFCameraTimelapseVideoDownloader> *timelapseVideoDownloader; // ivar: _timelapseVideoDownloader


+(id)sharedProvider;
-(id)init;
-(void)_getVideoForTimelapseClip:(id)arg0 taskType:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)getVideoForTimelapseClip:(id)arg0 taskType:(NSUInteger)arg1 delegate:(id)arg2 ;


@end


#endif