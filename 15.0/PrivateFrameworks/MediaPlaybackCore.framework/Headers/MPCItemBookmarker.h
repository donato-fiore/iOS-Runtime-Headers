// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCITEMBOOKMARKER_H
#define MPCITEMBOOKMARKER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MPCMediaFoundationTranslator.h"

@interface MPCItemBookmarker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *bookmarkingTimer; // ivar: _bookmarkingTimer
@property (retain, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


-(id)initWithTranslator:(id)arg0 ;
-(void)_setupBookmarkingTimerForItem:(id)arg0 ;
-(void)_teardownBookmarkingTimer;
-(void)currentItemWillChangeFromItem:(id)arg0 toItem:(id)arg1 time:(CGFloat)arg2 ;
-(void)itemDidBecomeCurrent:(id)arg0 time:(CGFloat)arg1 ;
-(void)itemDidPlayToEnd:(id)arg0 time:(CGFloat)arg1 ;
-(void)itemDidResignCurrent:(id)arg0 time:(CGFloat)arg1 ;
-(void)playbackDidStartForItem:(id)arg0 time:(CGFloat)arg1 rate:(float)arg2 ;
-(void)playbackDidStopForItem:(id)arg0 time:(CGFloat)arg1 ;
-(void)playbackRateDidChangeToRate:(float)arg0 forItem:(id)arg1 time:(CGFloat)arg2 ;
-(void)playbackStateDidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 forItem:(id)arg2 time:(CGFloat)arg3 rate:(float)arg4 ;
-(void)updateDurationSnapshotWithTime:(CGFloat)arg0 forItem:(id)arg1 rate:(float)arg2 ;
-(void)userDidSkipDuringPlaybackFromItem:(id)arg0 direction:(NSInteger)arg1 ;


@end


#endif