// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTILEANIMATIONOPTIONS_H
#define PUTILEANIMATIONOPTIONS_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PUTileAnimationOptions : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // ivar: _completionGroup
@property (copy, nonatomic) id *customViewAnimatorBlock; // ivar: _customViewAnimatorBlock
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (nonatomic) PUDisplayVelocity initialVelocity; // ivar: _initialVelocity
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (nonatomic) BOOL shouldFadeOutSnapshotAfterCompletionGroup; // ivar: _shouldFadeOutSnapshotAfterCompletionGroup
@property (nonatomic) CGFloat springDampingRatio; // ivar: _springDampingRatio
@property (nonatomic) CGFloat springMass; // ivar: _springMass
@property (nonatomic) NSInteger springNumberOfOscillations; // ivar: _springNumberOfOscillations
@property (nonatomic) CGFloat springStiffness; // ivar: _springStiffness
@property (nonatomic, getter=isSynchronizedWithTransition) BOOL synchronizedWithTransition; // ivar: _synchronizedWithTransition




@end


#endif