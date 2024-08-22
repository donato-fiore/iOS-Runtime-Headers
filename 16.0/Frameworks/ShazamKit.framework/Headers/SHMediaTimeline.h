// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIATIMELINE_H
#define SHMEDIATIMELINE_H

@class NSArray, NSNumber;
@protocol SHMediaTimelineDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SHSignature.h"

@interface SHMediaTimeline : NSObject

@property (weak, nonatomic) NSObject<SHMediaTimelineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) NSArray *inScopeMediaItems;
@property (readonly, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) SHSignature *querySignature; // ivar: _querySignature
@property (readonly, nonatomic) NSNumber *timeToNextMediaItemScopeChange;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerDispatchSource; // ivar: _timerDispatchSource


+(CGFloat)countdownForMatchedMediaItem:(id)arg0 ;
+(CGFloat)nextEventForRange:(id)arg0 atMatchOffset:(CGFloat)arg1 ;
+(id)blankMediaItemWhenNothingIsInScope:(id)arg0 ;
-(BOOL)finished;
-(id)earliestInscopeRangeForMatchedMediaItem:(id)arg0 ;
-(id)initWithMatch:(id)arg0 ;
-(id)sortMediaItems:(id)arg0 ;
-(void)cancelTimerSource;
-(void)dealloc;
-(void)startGenerating;
-(void)startTimerForNextEvent;
-(void)stopGenerating;


@end


#endif