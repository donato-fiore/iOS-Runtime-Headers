// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUNLOCKEDDODGINGRESOLVER_H
#define SBUNLOCKEDDODGINGRESOLVER_H

@class NSString;
@protocol SBUIActiveOrientationObserver;

#import <Foundation/Foundation.h>

#import "SBDodgingResolverViewController.h"
#import "SBDodgingTester.h"
#import "_SBUnlockedDodgingRootViewcontroller.h"
#import "_SBUnlockedDodgingWindow.h"

@interface SBUnlockedDodgingResolver : NSObject <SBUIActiveOrientationObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBDodgingResolverViewController *dodgingResolverViewController; // ivar: _dodgingResolverViewController
@property (retain, nonatomic) SBDodgingTester *dodgingTester; // ivar: _dodgingTester
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SBUnlockedDodgingRootViewcontroller *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) _SBUnlockedDodgingWindow *window; // ivar: _window


-(id)init;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;


@end


#endif