// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERATIMELAPSEVIDEODOWNLOADEROPERATION_H
#define HFCAMERATIMELAPSEVIDEODOWNLOADEROPERATION_H

@class NSBlockOperation, NSURL, HMCameraClip;
@protocol HFCameraTimelapseVideoDownloaderDelegate;


#import "HFCameraAnalyticsCameraTimelapseLoadEvent.h"

@interface HFCameraTimelapseVideoDownloaderOperation : NSBlockOperation

@property (weak, nonatomic) NSObject<HFCameraTimelapseVideoDownloaderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (copy, nonatomic) id *downloadingBlock; // ivar: _downloadingBlock
@property (nonatomic) BOOL fileAlreadyExists; // ivar: _fileAlreadyExists
@property (retain, nonatomic) HMCameraClip *timelapseClip; // ivar: _timelapseClip
@property (retain, nonatomic) HFCameraAnalyticsCameraTimelapseLoadEvent *timelapseLoadEvent; // ivar: _timelapseLoadEvent


+(id)downloadingOperationForTimelapseClip:(id)arg0 ;
-(id)init;
-(void)fileDownloadFailedWithError:(id)arg0 ;
-(void)fileDownloadFinishedWithElapsedTime:(CGFloat)arg0 ;
-(void)fileDownloadNotNeeded;


@end


#endif