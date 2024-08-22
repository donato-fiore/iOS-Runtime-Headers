// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMUTABLEAPPSTATUSBARSETTINGS_H
#define SBMUTABLEAPPSTATUSBARSETTINGS_H

@class NSNumber, _UILegibilitySettings;


#import "SBAppStatusBarSettings.h"

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) NSInteger style;
@property (nonatomic) NSUInteger styleOverridesToCancel;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)applySettings:(id)arg0 ;


@end


#endif