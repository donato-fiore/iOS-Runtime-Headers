// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDNAVIGATORVIEWLAYOUT_IPHONE_H
#define _UIFINDNAVIGATORVIEWLAYOUT_IPHONE_H

@class UIFindNavigatorViewLayout, NSLayoutConstraint;


#import "UIStackView.h"

@interface _UIFindNavigatorViewLayout_iPhone : UIFindNavigatorViewLayout {
    UIStackView *_verticalStackView;
    UIStackView *_findStackView;
    UIStackView *_replaceStackView;
    UIStackView *_nextPrevStackView;
    NSLayoutConstraint *_doneSpaceConstraint;
    NSLayoutConstraint *_replaceButtonWidthConstraint;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )preferredContentSize;
-(void)layoutSubviews;
-(void)prepareForLayout;
-(void)setReplaceFieldVisible:(BOOL)arg0 ;


@end


#endif