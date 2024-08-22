// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDSTATUSBARCONTROLLER_H
#define SBDASHBOARDSTATUSBARCONTROLLER_H

@class NSMutableSet, NSMapTable, NSString, NSNumber, _UILegibilitySettings;
@protocol CSStatusBarControlling;

#import <Foundation/Foundation.h>

#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBWindowSceneStatusBarManager.h"

@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling>

 {
    NSMutableSet *_statusBarHiddenReasons;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarParametersAssertion;
    SBWindowSceneStatusBarManager *_windowSceneStatusBarManager;
    NSMutableSet *_statusBars;
    NSMapTable *_statusBarsToVisbilityAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *statusBarAlpha;
@property (readonly, nonatomic) _UILegibilitySettings *statusBarLegibilitySettings;
@property (readonly, nonatomic) NSInteger statusBarStyle;
@property (readonly) Class superclass;


-(id)createFakeStatusBarWithReason:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(id)effectiveStatusBarStyleRequestForAlpha:(id)arg0 style:(NSInteger)arg1 legibilitySettings:(id)arg2 ;
-(id)initWithWindowSceneStatusBarManager:(id)arg0 ;
-(void)_enumerateStatusBarsAndPartAssertions:(id)arg0 ;
-(void)clearStatusBarParameters;
-(void)dealloc;
-(void)destroyFakeStatusBar:(id)arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setStatusBarPart:(NSUInteger)arg0 hidden:(BOOL)arg1 animationDuration:(CGFloat)arg2 ;


@end


#endif