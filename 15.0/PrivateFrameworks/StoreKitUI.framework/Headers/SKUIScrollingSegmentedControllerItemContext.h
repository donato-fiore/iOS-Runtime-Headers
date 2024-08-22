// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISCROLLINGSEGMENTEDCONTROLLERITEMCONTEXT_H
#define SKUISCROLLINGSEGMENTEDCONTROLLERITEMCONTEXT_H

@class UIScrollView, UIViewController;
@protocol SKUIScrollingSegmentedControllerItemContextDelegate;

#import <Foundation/Foundation.h>


@interface SKUIScrollingSegmentedControllerItemContext : NSObject {
    UIEdgeInsets _appliedContentInsetsAdjustment;
    UIEdgeInsets _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
}


@property (weak, nonatomic) NSObject<SKUIScrollingSegmentedControllerItemContextDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(void)_applyNewContentInset:(struct UIEdgeInsets )arg0 withOldContentInset:(struct UIEdgeInsets )arg1 toContentScrollView:(id)arg2 ;
-(void)applyNewContentInset:(struct UIEdgeInsets )arg0 ;
-(void)updateAppliedContentInsetsAdjustment;


@end


#endif