// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPPLAYERPLAYBACKOPTIONS_H
#define RCPPLAYERPLAYBACKOPTIONS_H


#import <Foundation/Foundation.h>


@interface RCPPlayerPlaybackOptions : NSObject

@property (copy, nonatomic) id *customizeHIDEvent; // ivar: _customizeHIDEvent
@property (nonatomic) CGFloat firstEventFrameDelay; // ivar: _firstEventFrameDelay
@property (nonatomic) BOOL ignoreSenderProperties; // ivar: _ignoreSenderProperties
@property (nonatomic) BOOL linkEventDeliveryToDisplayRefreshRate; // ivar: _linkEventDeliveryToDisplayRefreshRate
@property (nonatomic) CGFloat minDelayBetweenSends; // ivar: _minDelayBetweenSends
@property (nonatomic) CGFloat playbackSpeedFactor; // ivar: _playbackSpeedFactor
@property (nonatomic) CGAffineTransform transform; // ivar: _transform
@property (nonatomic) BOOL useHIDEventTimestampsForDelivery; // ivar: _useHIDEventTimestampsForDelivery


-(NSUInteger)timestampForEventReplay:(id)arg0 ;
-(id)init;


@end


#endif