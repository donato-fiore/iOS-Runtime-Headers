// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGINTERACTION_H
#define PXGINTERACTION_H

@class UIView<PXGHitTestEnvironment>;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"
#import "PXScrollViewController.h"

@interface PXGInteraction : NSObject

@property (weak, nonatomic) PXGLayout *layout; // ivar: _layout
@property (weak, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (weak, nonatomic) UIView<PXGHitTestEnvironment> *view; // ivar: _view




@end


#endif