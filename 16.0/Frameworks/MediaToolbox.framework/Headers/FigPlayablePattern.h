// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGPLAYABLEPATTERN_H
#define FIGPLAYABLEPATTERN_H

@protocol CHHapticAdvancedPatternPlayerExtended;

#import <Foundation/Foundation.h>


@interface FigPlayablePattern : NSObject

@property (nonatomic) ? outputTimeRange; // ivar: _outputTimeRange
@property (retain, nonatomic) NSObject<CHHapticAdvancedPatternPlayerExtended> *player; // ivar: _player
@property (nonatomic) ? timeRange; // ivar: _timeRange


-(id)initWithSBuf:(struct opaqueCMSampleBuffer *)arg0 chEngine:(id)arg1 ;
-(void)dealloc;


@end


#endif