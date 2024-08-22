// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDSTATUSBARCONTROLLER_H
#define SBDASHBOARDSTATUSBARCONTROLLER_H

@class NSCountedSet, NSString, NSNumber, _UILegibilitySettings;
@protocol CSStatusBarControlling;

#import <Foundation/Foundation.h>

#import "SBAppStatusBarSettingsAssertion.h"
#import "SBMainStatusBarContentAssertion.h"
#import "SBMainStatusBarStateProvider.h"

@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling>

 {
    NSCountedSet *_statusBarHiddenReasons;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_statusBarParametersAssertion;
    SBMainStatusBarContentAssertion *_statusBarContentAssertion;
    SBMainStatusBarStateProvider *_lazy_stateProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *statusBarAlpha;
@property (readonly, nonatomic) _UILegibilitySettings *statusBarLegibilitySettings;
@property (readonly, nonatomic) NSInteger statusBarStyle;
@property (readonly) Class superclass;


-(id)_stateProvider;
-(id)createFakeStatusBarWithReason:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(id)effectiveStatusBarStyleRequestForAlpha:(id)arg0 style:(NSInteger)arg1 legibilitySettings:(id)arg2 ;
-(id)init;
-(void)clearStatusBarParameters;
-(void)dealloc;
-(void)destroyFakeStatusBar:(id)arg0 ;
-(void)disableStatusBarItem:(int)arg0 requestor:(id)arg1 ;
-(void)enableStatusBarItem:(int)arg0 requestor:(id)arg1 ;
-(void)enableStatusBarTime:(BOOL)arg0 crossfade:(BOOL)arg1 crossfadeDuration:(CGFloat)arg2 ;
-(void)setStatusBarHidden:(BOOL)arg0 forReason:(id)arg1 ;
-(void)updateStatusBarTimeEnabled;


@end


#endif