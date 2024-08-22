// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCWEBKITUSERINTENTRECOGNIZER_H
#define _GCWEBKITUSERINTENTRECOGNIZER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "GCPhysicalInputProfile.h"

@interface _GCWebKitUserIntentRecognizer : NSObject {
    GCPhysicalInputProfile *_physicalInputProfile;
    NSMutableDictionary *_trackedInputs;
    NSMutableDictionary *_timers;
    CGFloat _slidingWindowTotalDuration;
    CGFloat _slidingWindowSegmentDuration;
    CGFloat _deadzoneSquared;
    int _distanceThreshold;
}


@property (readonly, copy, nonatomic) id *thumbstickUserIntentHandler; // ivar: _thumbstickUserIntentHandler


-(id)initWithPhysicalInputProfile:(id)arg0 thumbstickUserIntentHandler:(id)arg1 ;
// -(id)initWithPhysicalInputProfile:(id)arg0 thumbstickUserIntentHandler:(id)arg1 slidingWindowTotalDuration:(unk)arg2 slidingWindowSegmentDuration:(CGFloat)arg3 deadzone:(CGFloat)arg4 sensitivity:(CGFloat)arg5  ;
-(void)processChangedElements:(id)arg0 atTimestamp:(NSUInteger)arg1 ;


@end


#endif