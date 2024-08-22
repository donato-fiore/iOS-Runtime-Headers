// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUTABLERADIOPLAYBACKHISTORY_H
#define ICMUTABLERADIOPLAYBACKHISTORY_H

@class NSArray;


#import "ICRadioPlaybackHistory.h"
#import "ICRadioPlaybackHistoryItem.h"

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory

@property (copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack;
@property (nonatomic) NSInteger numberOfSkips;
@property (copy, nonatomic) NSArray *tracks;


-(void)_checkCurrentTrackIsPresent;
-(void)_updateTracksUsingBlock:(id)arg0 ;
-(void)addTrack:(id)arg0 ;
-(void)addTracks:(id)arg0 ;
-(void)removeExpiredTracks;
-(void)removeTracksAtIndexes:(id)arg0 ;
-(void)replaceTrackAtIndex:(NSInteger)arg0 withTrack:(id)arg1 ;


@end


#endif