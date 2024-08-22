// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERHOSTMANAGERPOPOVERCREATIONCONFIGURATION_H
#define _UIPOPOVERHOSTMANAGERPOPOVERCREATIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "UIView.h"

@interface _UIPopoverHostManagerPopoverCreationConfiguration : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections
@property (nonatomic) BOOL showsArrow; // ivar: _showsArrow
@property (nonatomic) CGRect sourceRectInParentUIWindow; // ivar: _sourceRectInParentUIWindow
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle




@end


#endif