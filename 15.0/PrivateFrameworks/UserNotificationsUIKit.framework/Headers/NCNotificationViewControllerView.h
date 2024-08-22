// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONVIEWCONTROLLERVIEW_H
#define NCNOTIFICATIONVIEWCONTROLLERVIEW_H

@class UIView, UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting>, NSString;
@protocol PLContentSizeManaging, NCNotificationListDimmable;


#import "NCHitTestTransparentView.h"

@interface NCNotificationViewControllerView : NCHitTestTransparentView <PLContentSizeManaging, NCNotificationListDimmable>

 {
    UIView *_stackDimmingView;
}


@property (weak, nonatomic) UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting> *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateStackDimmingVisualStyling;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)invalidateStackedPlattersRecipe;


@end


#endif