// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMEDIAPLAYBACKCONTROLLER_H
#define WFMEDIAPLAYBACKCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFMediaPlaybackController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) *void reconSession; // ivar: _reconSession


+(id)bundleIdentifierForMediaPlaybackApplication:(NSUInteger)arg0 ;
+(id)songPropertySet;
-(id)createSendCommandError:(unsigned int)arg0 ;
-(id)init;
-(void)clearQueueWithCompletion:(id)arg0 ;
-(void)connectToEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)connectToExternalDevice:(id)arg0 completion:(id)arg1 ;
-(void)getActivePlayerPathWithCompletion:(id)arg0 ;
-(void)getCurrentlyPlayingMediaWithCompletion:(id)arg0 ;
-(void)getLocalPlaybackCapabilityWithCompletion:(id)arg0 ;
-(void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)arg0 completionBlock:(id)arg1 ;
-(void)getPreferredMediaControlOriginWithCompletion:(id)arg0 ;
-(void)getPreferredPlaybackDestinationForPlaybackArchive:(id)arg0 completionBlock:(id)arg1 ;
-(void)getPreferredPlaybackOriginWithCompletion:(id)arg0 ;
-(void)getRemoteControlEndpointsMatchingUIDs:(id)arg0 completion:(id)arg1 ;
-(void)goToBeginningOfTrackOnDevicesWithUIDs:(id)arg0 completion:(id)arg1 ;
-(void)goToNextTrackOnDevicesWithUIDs:(id)arg0 completion:(id)arg1 ;
-(void)goToPreviousTrackOnDevicesWithUIDs:(id)arg0 completion:(id)arg1 ;
-(void)pauseOnDevicesWithUIDs:(id)arg0 completion:(id)arg1 ;
-(void)playOnDevicesWithUIDs:(id)arg0 completion:(id)arg1 ;
-(void)playPauseOnDevicesWithUIDs:(id)arg0 completion:(id)arg1 ;
-(void)queueItemsWithIdentifierSets:(id)arg0 inAdditionMode:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)queueMediaItems:(id)arg0 inAdditionMode:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)queueiTunesStoreItems:(id)arg0 inAdditionMode:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)sendCommand:(unsigned int)arg0 origin:(*void)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendCommand:(unsigned int)arg0 playerPath:(*void)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendCommandToDevicesWithUIDs:(unsigned int)arg0 deviceUIDs:(id)arg1 options:(id)arg2 sendTwice:(BOOL)arg3 completion:(id)arg4 ;
-(void)skipBackwardOnDevicesWithUIDs:(id)arg0 interval:(CGFloat)arg1 completion:(id)arg2 ;
-(void)skipForwardOnDevicesWithUIDs:(id)arg0 interval:(CGFloat)arg1 completion:(id)arg2 ;
-(void)skipToPositionOnDevicesWithUIDs:(id)arg0 interval:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif