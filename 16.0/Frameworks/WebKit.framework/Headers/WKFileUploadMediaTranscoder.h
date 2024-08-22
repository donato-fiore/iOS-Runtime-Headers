// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKFILEUPLOADMEDIATRANSCODER_H
#define WKFILEUPLOADMEDIATRANSCODER_H


#import <Foundation/Foundation.h>


@interface WKFileUploadMediaTranscoder : NSObject {
    RetainPtr<NSTimer> _progressTimer;
    RetainPtr<PUActivityProgressController> _progressController;
    RetainPtr<AVAssetExportSession> _exportSession;
    RetainPtr<NSArray<_WKFileUploadItem *>> _items;
    RetainPtr<NSString> _temporaryDirectoryPath;
    Function<void (NSArray<_WKFileUploadItem *> *)> _completionHandler;
    NSUInteger _videoCount;
    NSUInteger _processedVideoCount;
}




-(id)_temporaryDirectoryCreateIfNecessary;
-(id)initWithItems:(id)arg0 videoCount:(NSUInteger)arg1 completionHandler:(*void)arg2 ;
-(void)_dismissProgress;
-(void)_finishedProcessing;
-(void)_processItemAtIndex:(NSUInteger)arg0 ;
-(void)_updateProgress:(id)arg0 ;
-(void)start;


@end


#endif