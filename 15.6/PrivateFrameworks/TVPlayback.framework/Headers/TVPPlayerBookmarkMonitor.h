// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPPLAYERBOOKMARKMONITOR_H
#define TVPPLAYERBOOKMARKMONITOR_H

@class NSTimer;
@protocol TVPPlayback;

#import <Foundation/Foundation.h>


@interface TVPPlayerBookmarkMonitor : NSObject

@property (retain, nonatomic) NSTimer *bookmarkPeriodicSaveTimer; // ivar: _bookmarkPeriodicSaveTimer
@property (weak, nonatomic) NSObject<TVPPlayback> *player; // ivar: _player
@property (nonatomic) BOOL playerHasFinishedLoading; // ivar: _playerHasFinishedLoading


-(id)initWithPlayer:(id)arg0 ;
-(void)_bookmarkPeriodicSaveTimerFired:(id)arg0 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg0 ;
-(void)_playerErrorDidOccur:(id)arg0 ;
-(void)_playerStateWillChange:(id)arg0 ;
-(void)_updateBookmarkTimeForMediaItem:(id)arg0 player:(id)arg1 playbackOfMediaItemIsEnding:(BOOL)arg2 ;
-(void)_updatePlayCountForMediaItem:(id)arg0 player:(id)arg1 ;
-(void)dealloc;


@end


#endif