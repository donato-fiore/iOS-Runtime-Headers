// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURESTATUSBARPILLELEMENT_H
#define SBSYSTEMAPERTURESTATUSBARPILLELEMENT_H

@class NSString, UIColor, UIView, FBScene;
@protocol SBSystemApertureContextProviding, SAElement, SBSystemApertureSuppressible, SAActivityBehavior, SAUIElementViewProviding, SAActivityHosting, SAElementHosting;

#import <Foundation/Foundation.h>


@interface SBSystemApertureStatusBarPillElement : NSObject <SBSystemApertureContextProviding, SAElement, SBSystemApertureSuppressible, SAActivityBehavior, SAUIElementViewProviding>



@property (readonly, nonatomic) NSString *activeSymbolName;
@property (readonly, nonatomic) UIColor *activeTintColor;
@property (weak, nonatomic) NSObject<SAActivityHosting> *activityHost;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *keyColor;
@property (nonatomic) NSUInteger layoutAxis;
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSUInteger styleOverrides; // ivar: _styleOverrides
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


-(BOOL)_canShowWhileLocked;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasActivityBehavior;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(id)_packageNameForStyleOverrides:(NSUInteger)arg0 ;
-(id)_viewWithPackageName:(id)arg0 ;
-(id)_viewWithSymbolName:(id)arg0 tintColor:(id)arg1 ;
-(id)initWithStatusBarStyleOverrides:(NSUInteger)arg0 ;
-(id)viewProvider;


@end


#endif