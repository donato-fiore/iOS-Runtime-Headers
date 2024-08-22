// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PATTERNPLAYERBASE_H
#define PATTERNPLAYERBASE_H

@class NSArray, NSString;
@protocol PatternPlayerDetails;

#import <Foundation/Foundation.h>

#import "CHHapticEngine.h"

@interface PatternPlayerBase : NSObject <PatternPlayerDetails>

 {
    NSArray *_events;
    int _muteState;
    unsigned char _previousAction;
}


@property (weak) CHHapticEngine *engine; // ivar: _engine
@property (readonly) CGFloat patternDuration; // ivar: _patternDuration
@property (readonly) NSString *patternID; // ivar: _patternID


-(BOOL)needsResetForAction:(unsigned char)arg0 ;


@end


#endif