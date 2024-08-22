// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSDAAPNOWPLAYINGMANAGER_H
#define RMSDAAPNOWPLAYINGMANAGER_H

@class NSURLSessionDataTask, NSString, NSArray, NSNumber;
@protocol OS_dispatch_source, RMSDAAPNowPlayingManagerDelegate;

#import <Foundation/Foundation.h>

#import "RMSDAAPRequestManager.h"
#import "RMSNowPlayingInfo.h"
#import "RMSControlInterface.h"

@interface RMSDAAPNowPlayingManager : NSObject {
    RMSDAAPRequestManager *_requestManager;
    RMSNowPlayingInfo *_currentNowPlayingInfo;
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


@property (retain, nonatomic) RMSControlInterface *controlInterface; // ivar: _controlInterface
@property (weak, nonatomic) NSObject<RMSDAAPNowPlayingManagerDelegate> *delegate; // ivar: _delegate
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