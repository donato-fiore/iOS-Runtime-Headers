// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPAIREDUNLOCKWATCHEVENT_H
#define SFPAIREDUNLOCKWATCHEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFPairedUnlockWatchEvent : NSObject <SFCoreAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int motionCheckDurationMs; // ivar: _motionCheckDurationMs
@property (nonatomic) NSInteger onWristConfidence; // ivar: _onWristConfidence
@property (readonly) Class superclass;
@property (nonatomic) float timeSinceBootMin; // ivar: _timeSinceBootMin
@property (nonatomic) float timeSinceLastOnWristSec; // ivar: _timeSinceLastOnWristSec
@property (nonatomic) float timeSinceLastWristRaiseSec; // ivar: _timeSinceLastWristRaiseSec


+(id)eventName;
-(void)submitEvent;


@end


#endif