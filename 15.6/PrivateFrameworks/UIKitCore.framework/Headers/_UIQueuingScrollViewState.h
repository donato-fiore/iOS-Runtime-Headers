// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIQUEUINGSCROLLVIEWSTATE_H
#define _UIQUEUINGSCROLLVIEWSTATE_H

@class UITransitionState;


#import "UIViewController.h"
#import "UIView.h"

@interface _UIQueuingScrollViewState : UITransitionState {
    UIViewController *_viewController;
}


@property (readonly, nonatomic, getter=isManual) BOOL manual; // ivar: _manual
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(BOOL)isCompatibleWithTransitionInDirection:(NSInteger)arg0 ;
-(id)description;
-(id)initWithTransitionDirection:(NSInteger)arg0 view:(id)arg1 manual:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif