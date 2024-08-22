// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGPLAYABLEPATTERN_H
#define FIGPLAYABLEPATTERN_H

@class AVHapticSequence;
@protocol CHHapticAdvancedPatternPlayerExtended;

#import <Foundation/Foundation.h>


@interface FigPlayablePattern : NSObject

@property (nonatomic) ? outputTimeRange; // ivar: _outputTimeRange
@property (retain, nonatomic) NSObject<CHHapticAdvancedPatternPlayerExtended> *player; // ivar: _player
@property (retain, nonatomic) AVHapticSequence *sequence; // ivar: _sequence
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) BOOL usingCoreHaptics; // ivar: _usingCoreHaptics


-(id)initWithSBuf:(struct opaqueCMSampleBuffer *)arg0 avhpEngine:(id)arg1 ;
-(id)initWithSBuf:(struct opaqueCMSampleBuffer *)arg0 chEngine:(id)arg1 ;
-(void)dealloc;


@end


#endif