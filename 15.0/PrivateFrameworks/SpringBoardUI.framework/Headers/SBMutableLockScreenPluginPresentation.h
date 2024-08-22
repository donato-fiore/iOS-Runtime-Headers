// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMUTABLELOCKSCREENPLUGINPRESENTATION_H
#define SBMUTABLELOCKSCREENPLUGINPRESENTATION_H

@class _UILegibilitySettings;


#import "SBLockScreenPluginPresentation.h"

@interface SBMutableLockScreenPluginPresentation : SBLockScreenPluginPresentation

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) UIEdgeInsets suggestedContentInsets;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif