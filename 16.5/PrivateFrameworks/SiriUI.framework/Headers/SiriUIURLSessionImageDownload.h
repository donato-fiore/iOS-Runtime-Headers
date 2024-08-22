// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIURLSESSIONIMAGEDOWNLOAD_H
#define SIRIUIURLSESSIONIMAGEDOWNLOAD_H

@class NSMutableData, UIColor;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SiriUIURLSessionImageDownload : NSObject {
    CGSize _fitToSize;
    NSMutableData *_downloadedData;
    id *_progressHandler;
    id *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_renderTimer;
    BOOL _newDataAvailableToRender;
    *CGImageSource _imageSource;
    NSUInteger _lastUpdatedLength;
    BOOL _finished;
    BOOL _hasSentFinished;
    UIColor *_backgroundFillColor;
}




// -(id)initWithFitToSize:(struct CGSize )arg0 progressHandler:(id)arg1 incremental:(unk)arg2 client:(BOOL)arg3 fillColor:(id)arg4  ;
-(void)_updateImageFromURL:(id)arg0 error:(id)arg1 ;
-(void)appendDownloadedData:(id)arg0 fromURL:(id)arg1 ;
-(void)dealloc;
-(void)finishedFromURL:(id)arg0 error:(id)arg1 ;


@end


#endif