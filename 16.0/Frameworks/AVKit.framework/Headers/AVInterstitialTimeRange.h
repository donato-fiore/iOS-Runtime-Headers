// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVINTERSTITIALTIMERANGE_H
#define AVINTERSTITIALTIMERANGE_H

@class AVPlayerInterstitialEvent;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVInterstitialTimeRange : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _hidden;
    BOOL _collapsedInTimeLine;
    CGFloat _playingDuration;
    AVPlayerInterstitialEvent *_playerInterstitialEvent;
}


@property (nonatomic, setter=_setWatchCount:) NSUInteger _watchCount; // ivar: __watchCount
@property (nonatomic, getter=isActive, setter=_setActive:) BOOL active; // ivar: _active
@property (nonatomic) CGFloat linearPlaybackRequirementDuration; // ivar: _linearPlaybackRequirementDuration
@property (nonatomic, setter=_setPlayingDuration:) CGFloat playingDuration;
@property (nonatomic) NSInteger requiredViewingPolicy; // ivar: _requiredViewingPolicy
@property (readonly) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
+(id)interstitialTimeRangeWithPlayerInterstitialEvent:(id)arg0 ;
-(BOOL)isCollapsedInTimeLine;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInterstitialTimeRange:(id)arg0 ;
-(BOOL)isHidden;
-(BOOL)isSkipped;
-(NSUInteger)hash;
-(id)_initWithTimeRange:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHiddenTimeRange:(struct ? )arg0 ;
-(id)initWithTimeRange:(struct ? )arg0 ;
-(id)playerInterstitialEvent;
-(void)_setCollapsedInTimeLine:(BOOL)arg0 ;
-(void)_setDurationTimeInterval:(CGFloat)arg0 ;
-(void)_setPlayerInterstitialEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif