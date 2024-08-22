// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPILLCONTENTWRAPPERVIEW_H
#define PLPILLCONTENTWRAPPERVIEW_H

@class UIView, NSLayoutConstraint, NSString;
@protocol PLContentSizeCategoryAdjusting;


#import "PLPillContentItem.h"

@interface PLPillContentWrapperView : UIView <PLContentSizeCategoryAdjusting>

 {
    UIView *_contentView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) NSInteger appearState; // ivar: _appearState
@property (retain, nonatomic) PLPillContentItem *contentItem; // ivar: _contentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;
@property (nonatomic, getter=isTopConstraintBreakable) BOOL topConstraintBreakable; // ivar: _topConstraintBreakable


-(BOOL)adjustForContentSizeCategoryChange;
-(id)_contentLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_makeBottomConstraintBreakable;
-(void)_makeTopConstraintBreakable;
-(void)_setContentView:(id)arg0 transitionCoordinator:(id)arg1 ;
-(void)_updateConstraintsPriority;
-(void)beginAppearanceTransition:(BOOL)arg0 ;
-(void)endAppearanceTransition:(BOOL)arg0 ;
-(void)updateWithContentItem:(id)arg0 ;


@end


#endif