// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBVIEWUTILITIES_H
#define OBVIEWUTILITIES_H


#import <Foundation/Foundation.h>


@interface OBViewUtilities : NSObject



+(BOOL)_navigationBarTitleShouldShowForHeaderView:(id)arg0 inScrollView:(id)arg1 ;
+(BOOL)shouldUseAccessibilityLayout;
+(NSInteger)activeInterfaceOrientationForView:(id)arg0 ;
+(id)pointImageOfColor:(id)arg0 ;
+(void)updateNavigationBarWithNavigationItem:(id)arg0 forHeaderView:(id)arg1 inScrollView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif