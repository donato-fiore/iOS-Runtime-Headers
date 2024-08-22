// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTORYBOARDDECODINGCONTEXT_H
#define UISTORYBOARDDECODINGCONTEXT_H


#import <Foundation/Foundation.h>

#import "UIClassSwapper.h"
#import "UIViewController.h"
#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardDecodingContext : NSObject

@property (nonatomic) NSInteger childViewControllerIndex; // ivar: _childViewControllerIndex
@property (retain, nonatomic) UIClassSwapper *classSwapperTemplate; // ivar: _classSwapperTemplate
@property (copy, nonatomic) id *creator; // ivar: _creator
@property (retain, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) id *sender; // ivar: _sender
@property (retain, nonatomic) UIStoryboardSegueTemplate *sourceSegueTemplate; // ivar: _sourceSegueTemplate




@end


#endif