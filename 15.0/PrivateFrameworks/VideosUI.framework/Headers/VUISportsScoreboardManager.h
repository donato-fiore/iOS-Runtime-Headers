// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISPORTSSCOREBOARDMANAGER_H
#define VUISPORTSSCOREBOARDMANAGER_H

@class NSTimer, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUISportsScoreboardManager : NSObject

@property (nonatomic) NSInteger scoreboardUpdateInterval; // ivar: _scoreboardUpdateInterval
@property (retain, nonatomic) NSTimer *scoreboardUpdateTimer; // ivar: _scoreboardUpdateTimer
@property (retain, nonatomic) NSMutableDictionary *sportsEventsById; // ivar: _sportsEventsById
@property (nonatomic) BOOL updateInProgress; // ivar: _updateInProgress


+(id)sharedInstance;
+(void)registerDelegate:(id)arg0 canonicalId:(id)arg1 ;
+(void)unregisterDelegate:(id)arg0 canonicalId:(id)arg1 ;
-(id)_prepareJSContextDictionaryArgument;
-(id)init;
-(void)_getScoreboardUpdates;
-(void)_invalidateTimer;
-(void)_playbackUIBeingShownDidChange:(id)arg0 ;
-(void)_registerToApplicationNotifications;
-(void)_registerToPlaybackNotifications;
-(void)_resetTimer;
-(void)_updateScores:(id)arg0 ;
-(void)_updateTimer;


@end


#endif