// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFOOTERVIEWMODEL_H
#define PXFOOTERVIEWMODEL_H

@class UIView, NSString;


#import "PXObservable.h"

@interface PXFooterViewModel : PXObservable

@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) NSString *actionConfirmationAlertButtonTitle; // ivar: _actionConfirmationAlertButtonTitle
@property (readonly, nonatomic) NSString *actionConfirmationAlertSubtitle; // ivar: _actionConfirmationAlertSubtitle
@property (readonly, nonatomic) NSString *actionConfirmationAlertTitle; // ivar: _actionConfirmationAlertTitle
@property (readonly, nonatomic) NSInteger actionStyle; // ivar: _actionStyle
@property (readonly, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (readonly, nonatomic) NSInteger animatedIconMode; // ivar: _animatedIconMode
@property (readonly, nonatomic) NSString *extendedTitle; // ivar: _extendedTitle
@property (readonly, nonatomic) UIView *filterView; // ivar: _filterView
@property (readonly, nonatomic) BOOL isPaused; // ivar: _isPaused
@property (readonly, nonatomic) float progress; // ivar: _progress
@property (readonly, nonatomic) NSString *subtitle1; // ivar: _subtitle1
@property (readonly, nonatomic) NSString *subtitle2; // ivar: _subtitle2
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *topAccessoryView; // ivar: _topAccessoryView


-(id)init;
-(id)mutableChangeObject;
-(void)footerAnimationCrossedGridCycleBoundary;
-(void)performChanges:(id)arg0 ;


@end


#endif