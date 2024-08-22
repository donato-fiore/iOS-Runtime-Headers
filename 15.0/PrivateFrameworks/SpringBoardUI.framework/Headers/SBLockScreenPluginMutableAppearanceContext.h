// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENPLUGINMUTABLEAPPEARANCECONTEXT_H
#define SBLOCKSCREENPLUGINMUTABLEAPPEARANCECONTEXT_H

@class NSString, NSArray;
@protocol SBLockScreenPluginMutableAppearance;


#import "SBLockScreenPluginAppearanceContext.h"
#import "SBLockScreenLegibilitySettings.h"

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>



@property (nonatomic) NSInteger backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *elementOverrides;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic) NSInteger notificationBehavior;
@property (nonatomic) CGRect presentationRegion;
@property (nonatomic) NSInteger presentationStyle;
@property (nonatomic) NSUInteger restrictedCapabilities;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif