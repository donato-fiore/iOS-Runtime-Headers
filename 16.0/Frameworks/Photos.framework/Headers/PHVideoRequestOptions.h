// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHVIDEOREQUESTOPTIONS_H
#define PHVIDEOREQUESTOPTIONS_H

@class NSString;
@protocol PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHVideoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions>



@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL allowMediumHighQuality; // ivar: _allowMediumHighQuality
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deliveryMode; // ivar: _deliveryMode
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL liveRenderAndOnDemandRenderVideoConcurrently; // ivar: _liveRenderAndOnDemandRenderVideoConcurrently
@property (nonatomic) BOOL liveRenderVideoIfNeeded; // ivar: _liveRenderVideoIfNeeded
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (readonly, copy, nonatomic) id *progressHandler;
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice; // ivar: _restrictToPlayableOnCurrentDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // ivar: _resultHandlerQueue
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed; // ivar: _streamingAllowed
@property (nonatomic) NSInteger streamingVideoIntent; // ivar: _streamingVideoIntent
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) NSInteger version; // ivar: _version
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed; // ivar: _videoComplementAllowed


-(BOOL)hasValidTimeRange;
-(BOOL)isCurrentVersion;
-(BOOL)isSynchronous;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)renderResultHandlerQueue;


@end


#endif