// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSDAAPNOWPLAYINGMANAGER_H
#define TVRMSDAAPNOWPLAYINGMANAGER_H

@class NSURLSessionDataTask, NSString, NSArray, NSNumber;
@protocol OS_dispatch_source, TVRMSDAAPNowPlayingManagerDelegate;

#import <Foundation/Foundation.h>

#import "TVRMSDAAPRequestManager.h"
#import "TVRMSNowPlayingInfo.h"
#import "TVRMSControlInterface.h"

@interface TVRMSDAAPNowPlayingManager : NSObject {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSNowPlayingInfo *_currentNowPlayingInfo;
    NSURLSessionDataTask *_nowPlayingInfoRequest;
    NSURLSessionDataTask *_artworkRequest;
    NSURLSessionDataTask *_audioRoutesRequest;
    NSURLSessionDataTask *_volumeRequest;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    NSInteger _requestBackoffInterval;
    NSInteger _artworkRequestBackoffInterval;
    NSString *_currentArtworkIdentifier;
    NSArray *_currentAudioRoutes;
    NSNumber *_lastVolume;
    BOOL _isObserving;
}


@property (retain, nonatomic) TVRMSControlInterface *controlInterface; // ivar: _controlInterface
@property (weak, nonatomic) NSObject<TVRMSDAAPNowPlayingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isObserving) BOOL observing; // ivar: _observing


-(BOOL)_audioRoutes:(id)arg0 equalAudioRoutes:(id)arg1 ;
-(id)initWithRequestManager:(id)arg0 ;
-(void)_cancelArtworkRetryTimer;
-(void)_refreshNowPlayingInfoRequest;
-(void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg0 ;
-(void)_requestAudioRoutes;
-(void)_requestNowPlayingInfoWithCompletionHandler:(id)arg0 ;
-(void)_requestVolume;
-(void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg0 delay:(CGFloat)arg1 ;
-(void)beginObservingNowPlaying;
-(void)endObservingNowPlaying;


@end


#endif