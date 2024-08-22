// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSCRUBBERIMAGESOURCE_H
#define PMSCRUBBERIMAGESOURCE_H

@class AVAssetImageGenerator, NSMutableDictionary, NSMutableArray, NSLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PMScrubberImageSource : NSObject {
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_cachedImages;
    NSMutableDictionary *_requestCompletionHandlers;
    NSMutableArray *_pendingTimestampRequests;
    BOOL _requestToProcessPendingThumbnailsQueued;
    BOOL _cancelled;
    NSLock *_cancelledLock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (nonatomic) CGSize maximumThumbnailSize; // ivar: _maximumThumbnailSize


-(id)init;
-(void)cancelPendingThubmnailRequests;
-(void)dealloc;
-(void)enqueueThumbnailRequestForTimestamp:(id)arg0 withResultHandler:(id)arg1 ;
-(void)processPendingThumbnailRequests;
-(void)setupImageGeneratorWithAVAsset:(id)arg0 ;


@end


#endif