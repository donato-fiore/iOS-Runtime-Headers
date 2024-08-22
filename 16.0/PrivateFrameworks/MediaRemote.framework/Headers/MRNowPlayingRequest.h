// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOWPLAYINGREQUEST_H
#define MRNOWPLAYINGREQUEST_H


#import <Foundation/Foundation.h>

#import "MRDestination.h"

@interface MRNowPlayingRequest : NSObject

@property (readonly, copy, nonatomic) MRDestination *destination; // ivar: _destination


+(void)homePlatterPreferredRouteIdentifier:(id)arg0 ;
+(void)shouldUseQuickControlsToDisplayPlatterForRouteIdentifier:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(void)nowPlayingPlayerPathOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestClientPropertiesOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestDeviceLastPlayingDateOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestIsPlayingOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestLastPlayingDateOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestNowPlayingInfoOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestNowPlayingItemArtworkOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestNowPlayingItemLanguageOptionsOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestNowPlayingItemMetadataOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestPlaybackStateOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestProxiableSupportedCommandsOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestShuffleAndRepeatModeOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)requestSupportedCommandsOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 appOptions:(unsigned int)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)triggerAudioFadeInWithReplyQueue:(id)arg0 completion:(id)arg1 ;
-(void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif