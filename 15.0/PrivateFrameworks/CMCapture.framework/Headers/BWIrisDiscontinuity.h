// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWIRISDISCONTINUITY_H
#define BWIRISDISCONTINUITY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BWIrisDiscontinuity : NSObject {
    ? _discontinuityTime;
    ? _duration;
    NSArray *_timeSkews;
    NSArray *_recipe;
    NSInteger _recipeMinDisplacement;
    NSInteger _recipeMaxDisplacement;
    int _recipeIdentifier;
    ? _targetFrameDuration;
    BOOL _onlyRetime;
    BOOL _haveSeenNonPositiveDisplacement;
    BOOL _generateIFrames;
    BOOL _minDisplacementIFrameRequested;
}


@property (readonly) ? targetFrameDuration;
@property (readonly) ? time;


+(int)maximumNumberOfConsecutiveDroppedFrames;
-(BOOL)containsVideoBufferTime:(struct ? )arg0 ;
-(BOOL)shouldKeepBufferWithTime:(struct ? )arg0 forceKeepingBuffer:(BOOL)arg1 nextAdjustedTimeInOut:(struct ? *)arg2 discontinuityFrameAttributesOut:(struct ? *)arg3 ;
-(NSInteger)_offsetIndexFromDiscontinuityForTime:(struct ? )arg0 ;
-(id)initWithTime:(struct ? )arg0 duration:(struct ? )arg1 targetFrameDuration:(struct ? )arg2 onlyRetime:(BOOL)arg3 generateIFrames:(BOOL)arg4 timeSkews:(id)arg5 ;
-(void)dealloc;
-(void)resetWithNewTimeSkews:(id)arg0 ;


@end


#endif