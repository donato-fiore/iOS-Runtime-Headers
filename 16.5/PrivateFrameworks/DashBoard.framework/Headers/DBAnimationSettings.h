// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBANIMATIONSETTINGS_H
#define DBANIMATIONSETTINGS_H

@class UIView, UIColor, NSString;

#import <Foundation/Foundation.h>

#import "DBAppDockViewController.h"

@interface DBAnimationSettings : NSObject

@property (retain, nonatomic) DBAppDockViewController *appDockViewController; // ivar: _appDockViewController
@property (retain, nonatomic) UIView *fromTransitionContainerView; // ivar: _fromTransitionContainerView
@property (retain, nonatomic) UIView *fromView; // ivar: _fromView
@property (retain, nonatomic) UIColor *rootContainerBackgroundColor; // ivar: _rootContainerBackgroundColor
@property (retain, nonatomic) UIView *rootContainerView; // ivar: _rootContainerView
@property (copy, nonatomic) NSString *toIdentifier; // ivar: _toIdentifier
@property (retain, nonatomic) UIView *toTransitionContainerView; // ivar: _toTransitionContainerView
@property (retain, nonatomic) UIView *toView; // ivar: _toView




@end


#endif