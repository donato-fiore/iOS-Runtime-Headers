// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPENDINGDIRECTRAMPDISPLAYMODE_H
#define BLSHPENDINGDIRECTRAMPDISPLAYMODE_H



#import "BLSHPendingTwoPhaseUpdateDisplayMode.h"

@interface BLSHPendingDirectRampDisplayMode : BLSHPendingTwoPhaseUpdateDisplayMode

@property CGFloat duration; // ivar: _duration
@property (readonly) NSInteger rampBeginDisplayMode; // ivar: _rampBeginDisplayMode
@property (getter=isReadyToStart) BOOL readyToStart; // ivar: _readyToStart


-(BOOL)isDirectRamp;
-(id)description;
-(id)initWithRampBeginDisplayMode:(NSInteger)arg0 targetDisplayMode:(NSInteger)arg1 ;
-(id)rampOperation;
-(id)updateOperation;


@end


#endif