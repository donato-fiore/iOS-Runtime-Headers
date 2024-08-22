// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLEXTESTINGCONTEXT_H
#define FLEXTESTINGCONTEXT_H

@class NSCountedSet;

#import <Foundation/Foundation.h>


@interface FlexTestingContext : NSObject

@property (nonatomic) NSInteger maxPassesToFit; // ivar: _maxPassesToFit
@property (nonatomic) NSInteger maxSilenceDuration; // ivar: _maxSilenceDuration
@property (nonatomic) ? maxSilenceDurationTime; // ivar: _maxSilenceDurationTime
@property (nonatomic) CGFloat maxSilencePercentage; // ivar: _maxSilencePercentage
@property (nonatomic) ? maxSilencePercentageTime; // ivar: _maxSilencePercentageTime
@property (nonatomic) NSInteger maxSilenceUnderSetDuration; // ivar: _maxSilenceUnderSetDuration
@property (nonatomic) ? maxSilenceUnderSetDurationTime; // ivar: _maxSilenceUnderSetDurationTime
@property (nonatomic) NSInteger minOutroDuration; // ivar: _minOutroDuration
@property (nonatomic) ? minOutroDurationTime; // ivar: _minOutroDurationTime
@property (retain, nonatomic) NSCountedSet *removedConflicts; // ivar: _removedConflicts
@property (nonatomic) BOOL sequencingLongSong; // ivar: _sequencingLongSong
@property (nonatomic) BOOL timedOut; // ivar: _timedOut
@property (nonatomic) BOOL usingPreventedIntro; // ivar: _usingPreventedIntro
@property (nonatomic) BOOL usingPreventedOutro; // ivar: _usingPreventedOutro


-(id)init;


@end


#endif