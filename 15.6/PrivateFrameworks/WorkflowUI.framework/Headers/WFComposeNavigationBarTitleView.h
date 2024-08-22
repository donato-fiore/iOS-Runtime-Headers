// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPOSENAVIGATIONBARTITLEVIEW_H
#define WFCOMPOSENAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView, UIViewController, WFWorkflow;


#import "WFComposeNavigationBarTitleContentView.h"

@interface WFComposeNavigationBarTitleView : UINavigationBarTitleView

@property (readonly, nonatomic) WFComposeNavigationBarTitleContentView *contentView; // ivar: _contentView
@property (readonly, weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(BOOL)finishRenamingIfNecessary;
-(id)initWithWorkflow:(id)arg0 parentViewController:(id)arg1 ;
-(id)placeholderName;
-(struct UIEdgeInsets )contentInsetsWithExclusionRects:(id)arg0 ;
-(void)layoutSubviews;
-(void)navigationBarTraitCollectionDidChangeTo:(id)arg0 from:(id)arg1 ;
-(void)updatePlaceholderIfNecessary;


@end


#endif