// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDANIMATION_H
#define DBDASHBOARDANIMATION_H

@class UIView, UIColor, NSString;

#import <Foundation/Foundation.h>

#import "DBAppDockViewController.h"

@interface DBDashboardAnimation : NSObject

@property (readonly, nonatomic) DBAppDockViewController *appDockViewController; // ivar: _appDockViewController
@property (readonly, nonatomic) UIView *fromTransitionContainerView; // ivar: _fromTransitionContainerView
@property (readonly, nonatomic) UIView *fromView; // ivar: _fromView
@property (readonly, nonatomic) UIColor *rootContainerBackgroundColor; // ivar: _rootContainerBackgroundColor
@property (readonly, nonatomic) UIView *rootContainerView; // ivar: _rootContainerView
@property (readonly, copy, nonatomic) NSString *toIdentifier; // ivar: _toIdentifier
@property (readonly, nonatomic) UIView *toTransitionContainerView; // ivar: _toTransitionContainerView
@property (readonly, nonatomic) UIView *toView; // ivar: _toView


-(id)initWithSettings:(id)arg0 ;
-(void)startAnimationWithCompletion:(id)arg0 ;


@end


#endif