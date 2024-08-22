// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCITEMBOOKMARKER_H
#define MPCITEMBOOKMARKER_H


#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCMediaFoundationTranslator.h"

@interface MPCItemBookmarker : NSObject

@property (weak, nonatomic) MPCPlaybackEngine *engine; // ivar: _engine
@property (retain, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


-(id)initWithPlaybackEngine:(id)arg0 translator:(id)arg1 ;
-(void)currentItemWillChangeFromItem:(id)arg0 toItem:(id)arg1 time:(CGFloat)arg2 ;
-(void)itemDidBecomeCurrent:(id)arg0 time:(CGFloat)arg1 ;
-(void)itemDidPlayToEnd:(id)arg0 time:(CGFloat)arg1 ;
-(void)playbackDidStartForItem:(id)arg0 time:(CGFloat)arg1 rate:(float)arg2 ;
-(void)playbackDidStopForItem:(id)arg0 time:(CGFloat)arg1 ;
-(void)playbackRateDidChangeToRate:(float)arg0 forItem:(id)arg1 time:(CGFloat)arg2 ;
-(void)playbackStateDidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 forItem:(id)arg2 time:(CGFloat)arg3 rate:(float)arg4 ;
-(void)updateDurationSnapshotWithTime:(CGFloat)arg0 forItem:(id)arg1 rate:(float)arg2 ;


@end


#endif