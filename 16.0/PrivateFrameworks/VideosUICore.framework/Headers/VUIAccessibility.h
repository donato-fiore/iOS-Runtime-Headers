// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACCESSIBILITY_H
#define VUIACCESSIBILITY_H


#import <Foundation/Foundation.h>


@interface VUIAccessibility : NSObject



+(BOOL)contentSizeCategoryIsAccessibility:(NSUInteger)arg0 ;
+(BOOL)isAXLargeEnabled:(NSUInteger)arg0 ;
+(BOOL)isAXSmallEnabled:(NSUInteger)arg0 ;
+(BOOL)isFeatureEnabled:(NSInteger)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)_addObserverToAccessibilityNotifications;
-(void)_didChangeAccessibilityReduceMotionStatus;
-(void)_didChangeAccessibilityVoiceOverStatus;
-(void)dealloc;


@end


#endif