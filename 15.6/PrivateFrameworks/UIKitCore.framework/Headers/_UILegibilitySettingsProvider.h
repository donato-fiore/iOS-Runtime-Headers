// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILEGIBILITYSETTINGSPROVIDER_H
#define _UILEGIBILITYSETTINGSPROVIDER_H


#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UILegibilitySettingsProvider : NSObject

@property (nonatomic) CGFloat accumulatedBrightness; // ivar: _accumulatedBrightness
@property (nonatomic) CGFloat accumulatedContrast; // ivar: _accumulatedContrast
@property (nonatomic) CGFloat accumulatedLuminance; // ivar: _accumulatedLuminance
@property (nonatomic) CGFloat accumulatedSaturation; // ivar: _accumulatedSaturation
@property (nonatomic) BOOL accumulatorIsPrimed; // ivar: _accumulatorIsPrimed
@property (retain, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (nonatomic) NSInteger currentStyle; // ivar: _currentStyle
@property (nonatomic) BOOL hasContrast; // ivar: _hasContrast
@property (nonatomic) CGFloat mostRecentBrightness; // ivar: _mostRecentBrightness
@property (nonatomic) CGFloat mostRecentContrast; // ivar: _mostRecentContrast
@property (nonatomic) CGFloat mostRecentLuminance; // ivar: _mostRecentLuminance
@property (nonatomic) CGFloat mostRecentSaturation; // ivar: _mostRecentSaturation
@property (nonatomic) CGFloat nextChangeBarrier; // ivar: _nextChangeBarrier


+(NSInteger)styleForContentColor:(id)arg0 ;
+(NSInteger)styleForContentColor:(id)arg0 contrast:(CGFloat)arg1 ;
-(BOOL)accumulateChangesToContentColor:(id)arg0 ;
-(BOOL)accumulateChangesToContentColor:(id)arg0 contrast:(CGFloat)arg1 ;
-(id)settings;
-(void)clearContentColorAccumulator;
-(void)dealloc;


@end


#endif