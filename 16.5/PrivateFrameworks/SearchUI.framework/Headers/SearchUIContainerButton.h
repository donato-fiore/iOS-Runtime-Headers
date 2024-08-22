// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICONTAINERBUTTON_H
#define SEARCHUICONTAINERBUTTON_H

@class UIButton, UIView;


#import "SearchUIHorizontallyScrollingContainerButtonController.h"

@interface SearchUIContainerButton : UIButton

@property (weak, nonatomic) SearchUIHorizontallyScrollingContainerButtonController *buttonController; // ivar: _buttonController
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


-(id)initWithContainerButtonController:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif