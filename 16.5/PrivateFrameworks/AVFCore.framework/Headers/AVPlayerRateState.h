// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERRATESTATE_H
#define AVPLAYERRATESTATE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVPlayerRateState : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL automaticallyWaitsToMinimizeStalling; // ivar: _automaticallyWaitsToMinimizeStalling
@property (readonly, nonatomic) float rate; // ivar: _rate
@property (readonly, nonatomic) NSString *reasonForWaitingToPlay; // ivar: _reasonForWaitingToPlay
@property (readonly, nonatomic) NSInteger timeControlStatus; // ivar: _timeControlStatus
@property (readonly, nonatomic) BOOL usesLegacyAutomaticWaitingBehavior; // ivar: _usesLegacyAutomaticWaitingBehavior


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAutomaticallyWaitsToMinimizeStalling:(BOOL)arg0 usesLegacyAutomaticWaitingBehavior:(BOOL)arg1 timeControlStatus:(NSInteger)arg2 ;
-(id)rateStateByInferringTimeControlStatusAndWaitingReasonBasedOnPresenceOfCurrentItem:(BOOL)arg0 hasCurrentInterstitialEvent:(BOOL)arg1 nameForLogging:(id)arg2 ;
-(id)rateStateBySettingAutomaticallyWaitsToMinimizeStalling:(BOOL)arg0 ;
-(id)rateStateBySettingRate:(float)arg0 nameForLogging:(id)arg1 ;
-(id)rateStateBySettingTimeControlStatus:(NSInteger)arg0 reasonForWaitingToPlay:(id)arg1 nameForLogging:(id)arg2 ;
-(id)rateStateBySettingUsesLegacyAutomaticWaitingBehavior:(BOOL)arg0 ;
-(id)rateStateByUpdatingBasedOnFigPlayer:(struct OpaqueFigPlayer *)arg0 hasCurrentItem:(BOOL)arg1 hasCurrentInterstitialEvent:(BOOL)arg2 nameForLogging:(id)arg3 ;
-(id)rateStateByUpdatingBasedOnFigPlayerPlaybackState:(int)arg0 hasCurrentInterstitialEvent:(BOOL)arg1 nameForLogging:(id)arg2 ;
-(id)rateStateByUpdatingBasedOnPresenceOfCurrentInterstitialEvent:(BOOL)arg0 nameForLogging:(id)arg1 ;
-(void)dealloc;


@end


#endif