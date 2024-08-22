// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JEMEDIAACTIVITYTRACKER_H
#define JEMEDIAACTIVITYTRACKER_H

@class NSMutableArray, NSString;
@protocol JEMediaPlaylist;

#import <Foundation/Foundation.h>

#import "JEMediaActivity.h"
#import "JEMediaTimeTracker.h"

@interface JEMediaActivityTracker : NSObject

@property (retain, nonatomic) NSMutableArray *eventData; // ivar: _eventData
@property (retain, nonatomic) NSObject *pipeline; // ivar: _pipeline
@property (retain, nonatomic) JEMediaActivity *playActivity; // ivar: _playActivity
@property (retain, nonatomic) NSObject<JEMediaPlaylist> *playlist; // ivar: _playlist
@property (retain, nonatomic) JEMediaActivity *seekActivity; // ivar: _seekActivity
@property (nonatomic) BOOL shouldGenerateTransitions; // ivar: _shouldGenerateTransitions
@property (retain, nonatomic) JEMediaTimeTracker *timeTracker; // ivar: _timeTracker
@property (retain, nonatomic) NSString *topic; // ivar: _topic


-(id)combineEventData:(id)arg0 withPlaylistDataForItem:(id)arg1 ;
-(id)initWithPipeline:(id)arg0 playlist:(id)arg1 eventData:(id)arg2 topic:(id)arg3 ;
-(id)startActivity:(NSInteger)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 transitioningEventData:(id)arg5 ;
-(void)generatePlaylistTransitionsIfNecessary:(NSUInteger)arg0 ;
-(void)playStartedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playStartedWithPlaybackRate:(float)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStoppedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playTransitionedAtOverallPosition:(NSUInteger)arg0 eventData:(id)arg1 ;
-(void)seekStartedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)seekStoppedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)stopActivity:(NSInteger)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 transitioningEventData:(id)arg5 ;
-(void)synchronizeAtOverallPosition:(NSUInteger)arg0 ;
-(void)synchronizePlaybackRate:(float)arg0 overallPosition:(NSUInteger)arg1 ;
-(void)updateEventData:(id)arg0 ;


@end


#endif