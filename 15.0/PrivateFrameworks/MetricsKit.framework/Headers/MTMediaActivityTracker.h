// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMEDIAACTIVITYTRACKER_H
#define MTMEDIAACTIVITYTRACKER_H

@class NSMutableArray;
@protocol MTMediaPlaylist;

#import <Foundation/Foundation.h>

#import "MTMediaActivity.h"
#import "MTMediaTimeTracker.h"
#import "MTVPAFKit.h"

@interface MTMediaActivityTracker : NSObject

@property (retain, nonatomic) NSMutableArray *eventData; // ivar: _eventData
@property (retain, nonatomic) MTMediaActivity *playActivity; // ivar: _playActivity
@property (retain, nonatomic) NSObject<MTMediaPlaylist> *playlist; // ivar: _playlist
@property (retain, nonatomic) MTMediaActivity *seekActivity; // ivar: _seekActivity
@property (nonatomic) BOOL shouldGenerateTransitions; // ivar: _shouldGenerateTransitions
@property (retain, nonatomic) MTMediaTimeTracker *timeTracker; // ivar: _timeTracker
@property (weak, nonatomic) MTVPAFKit *vpafKit; // ivar: _vpafKit


-(id)combineEventData:(id)arg0 withPlaylistDataForItem:(id)arg1 ;
-(id)initWithVPAFKit:(id)arg0 playlist:(id)arg1 eventData:(id)arg2 ;
-(id)startActivity:(NSInteger)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)generatePlaylistTransitionsIfNecessary:(NSUInteger)arg0 ;
-(void)playStartedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playStartedWithPlaybackRate:(float)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStoppedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playTransitionedAtOverallPosition:(NSUInteger)arg0 eventData:(id)arg1 ;
-(void)seekStartedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)seekStoppedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)stopActivity:(NSInteger)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)synchronizeAtOverallPosition:(NSUInteger)arg0 ;
-(void)synchronizePlaybackRate:(float)arg0 overallPosition:(NSUInteger)arg1 ;
-(void)updateEventData:(id)arg0 ;


@end


#endif