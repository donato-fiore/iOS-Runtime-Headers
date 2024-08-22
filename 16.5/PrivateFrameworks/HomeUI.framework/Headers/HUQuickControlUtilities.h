// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLUTILITIES_H
#define HUQUICKCONTROLUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUQuickControlUtilities : NSObject



+(BOOL)shouldAlwaysDisplayQuickControlAsSwitch:(id)arg0 ;
+(BOOL)shouldDisplayQuickControlAsPushButton:(id)arg0 preferredControl:(NSUInteger)arg1 ;
+(NSUInteger)iconSizeForQuickControlSize:(NSUInteger)arg0 ;
+(NSUInteger)quickControlStepperViewSizeForViewSizeSubclass:(NSInteger)arg0 ;
+(NSUInteger)sliderQuickControlSizeForViewSizeSubclass:(NSInteger)arg0 ;
+(id)backgroundColorForUserInterfaceStyle:(NSInteger)arg0 ;


@end


#endif