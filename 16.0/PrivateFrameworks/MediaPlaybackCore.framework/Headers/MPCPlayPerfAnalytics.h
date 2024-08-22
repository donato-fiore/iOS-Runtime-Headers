// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYPERFANALYTICS_H
#define MPCPLAYPERFANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPCPlayToSetRateSignpost.h"
#import "MPCSetRateToEffectiveRateSignpost.h"
#import "MPCWaitForLikelyToKeepUp.h"
#import "MPCWaitForReadyToPlaySignpost.h"

@interface MPCPlayPerfAnalytics : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) MPCPlayToSetRateSignpost *playToSetRateSignpost; // ivar: _playToSetRateSignpost
@property (retain, nonatomic) MPCSetRateToEffectiveRateSignpost *setRateToEffectiveRateSignpost; // ivar: _setRateToEffectiveRateSignpost
@property (retain, nonatomic) MPCWaitForLikelyToKeepUp *waitForLikelyToKeepUpSignpost; // ivar: _waitForLikelyToKeepUpSignpost
@property (retain, nonatomic) MPCWaitForReadyToPlaySignpost *waitForReadyToPlaySignpost; // ivar: _waitForReadyToPlaySignpost


+(id)playPerfAnalyticsWithIdentifier:(id)arg0 willPlayImmediately:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)didReceivePlayRequest;
-(void)firstFrameWillRenderForItem:(id)arg0 machAbsoluteTime:(NSUInteger)arg1 ;
-(void)itemDidBecomeCurrent:(id)arg0 ;
-(void)itemDidFailToLoad:(id)arg0 error:(id)arg1 ;
-(void)itemIsReadyToPlay:(id)arg0 ;
-(void)playbackDidStopForItem:(id)arg0 ;
-(void)playbackIsLikelyToKeepUp:(BOOL)arg0 forItem:(id)arg1 ;
-(void)playbackRateDidChangeForItem:(id)arg0 rate:(float)arg1 ;


@end


#endif