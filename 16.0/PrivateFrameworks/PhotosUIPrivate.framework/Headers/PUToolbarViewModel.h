// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTOOLBARVIEWMODEL_H
#define PUTOOLBARVIEWMODEL_H

@class UIViewController, UIView, NSArray;


#import "PUViewModel.h"
#import "PUToolbarViewModelChange.h"

@interface PUToolbarViewModel : PUViewModel

@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController; // ivar: __viewController
@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) CGFloat accessoryViewMaximumHeight; // ivar: _accessoryViewMaximumHeight
@property (nonatomic) CGFloat accessoryViewTopOutset; // ivar: _accessoryViewTopOutset
@property (readonly, nonatomic) PUToolbarViewModelChange *currentChange;
@property (nonatomic) CGFloat maximumHeight; // ivar: _maximumHeight
@property (nonatomic) BOOL needsToUpdateToolbarSize; // ivar: _needsToUpdateToolbarSize
@property (copy, nonatomic) NSArray *toolbarItems; // ivar: _toolbarItems


-(id)newViewModelChange;
-(void)didPublishChanges;


@end


#endif