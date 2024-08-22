// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMUTABLESTATUSBARSETTINGS_H
#define SBMUTABLESTATUSBARSETTINGS_H

@class NSNumber, _UILegibilitySettings;


#import "SBStatusBarSettings.h"

@interface SBMutableStatusBarSettings : SBStatusBarSettings

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) NSInteger style;
@property (nonatomic) NSUInteger styleOverridesToSuppress;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)applySettings:(id)arg0 ;


@end


#endif