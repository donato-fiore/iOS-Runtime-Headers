// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVMEDIAPLAYBACKCONTROLLER_H
#define SVMEDIAPLAYBACKCONTROLLER_H

@class AVPlayer, NSMapTable;

#import <Foundation/Foundation.h>


@interface SVMediaPlaybackController : NSObject

@property (weak, nonatomic) AVPlayer *currentlyPlaying; // ivar: _currentlyPlaying
@property (readonly, nonatomic) NSMapTable *timeControlStatusObservers; // ivar: _timeControlStatusObservers


-(id)init;
-(void)registerPlayer:(id)arg0 ;
-(void)unregisterPlayer:(id)arg0 ;
-(void)updateCurrentlyPlaying:(id)arg0 ;


@end


#endif