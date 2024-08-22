// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUOVERLAYACTION_H
#define SUOVERLAYACTION_H

@class UIViewController;

#import <Foundation/Foundation.h>

#import "SUOverlayTransition.h"

@interface SUOverlayAction : NSObject

@property (nonatomic) int actionType; // ivar: _type
@property (nonatomic) NSInteger animationCount; // ivar: _animationCount
@property (retain, nonatomic) UIViewController *otherViewController; // ivar: _otherViewController
@property (retain, nonatomic) SUOverlayTransition *transition; // ivar: _transition
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(void)dealloc;


@end


#endif