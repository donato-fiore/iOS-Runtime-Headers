// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCPODCASTSPLAYBACKRATEHELPER_H
#define _MPCPODCASTSPLAYBACKRATEHELPER_H


#import <Foundation/Foundation.h>


@interface _MPCPodcastsPlaybackRateHelper : NSObject {
    ? currentRate;
    ? playerState;
    ? defaults;
}




+(float)preferredPlaybackRate;
+(float)standardRate;
+(id)supportedPlaybackRates;
+(void)setPreferredPlaybackRate:(float)arg0 ;
-(BOOL)canHandlePlaybackRateChangeForCommandEvent:(id)arg0 ;
-(BOOL)supportsRate:(float)arg0 ;
-(float)updatedPlaybackRateForChangePlaybackRateCommandEvent:(id)arg0 ;
-(id)init;
-(id)initWithCurrentRate:(float)arg0 playbackState:(NSInteger)arg1 ;
-(id)initWithCurrentRate:(float)arg0 playerState:(NSInteger)arg1 defaults:(id)arg2 ;
-(void)saveWithRate:(float)arg0 ;


@end


#endif