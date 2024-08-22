// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHARMONYCONTROLLER_H
#define SBHARMONYCONTROLLER_H

@class CBClient, NSMutableArray;

#import <Foundation/Foundation.h>

#import "SBHarmonySettings.h"

@interface SBHarmonyController : NSObject {
    CBClient *_client;
    SBHarmonySettings *_harmonySettings;
    NSMutableArray *_suppressionAssertions;
    NSInteger _suppressedWhitePointAdaptationEnabled;
    NSInteger _suppressedBlueLightReductionEnabled;
}


@property (readonly, nonatomic) SBHarmonySettings *harmonySettings;
@property (readonly, nonatomic) BOOL supportsBlueLightReduction; // ivar: _supportsBlueLightReduction
@property (readonly, nonatomic) BOOL supportsWhitePointAdaptation; // ivar: _supportsWhitePointAdaptation
@property (nonatomic, getter=isWhitePointAdaptationEnabled) BOOL whitePointAdaptationEnabled;
@property (nonatomic) NSInteger whitePointAdaptivityStyle;


+(id)sharedInstance;
-(float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(NSInteger)arg0 ;
-(id)_adaptationClient;
-(id)init;
-(void)setWhitePointAdaptationStrength:(float)arg0 forWhitePointAdaptivityStyle:(NSInteger)arg1 ;
-(void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg0 toWhitePointAdaptivityStyleWithStyles:(id)arg1 fromPercentage:(CGFloat)arg2 toPercentage:(CGFloat)arg3 animationSettings:(id)arg4 ;


@end


#endif