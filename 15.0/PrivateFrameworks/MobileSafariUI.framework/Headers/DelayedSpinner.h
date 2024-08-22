// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DELAYEDSPINNER_H
#define DELAYEDSPINNER_H


#import <Foundation/Foundation.h>


@interface DelayedSpinner : NSObject



+(void)_setShowStatusBarSpinner:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
+(void)_setShowStatusBarSpinnerTimer:(id)arg0 ;
+(void)_showStatusBarSpinner:(id)arg0 ;
+(void)hide;
+(void)showWithDelay;


@end


#endif