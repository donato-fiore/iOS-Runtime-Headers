// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUITEXTCONTAINERVIEW_H
#define SIRIUITEXTCONTAINERVIEW_H

@class UIView, UIFont, NSString, UIColor;


#import "SiriUIContentLabel.h"

@interface SiriUITextContainerView : UIView {
    SiriUIContentLabel *_label;
    UIView *_containerView;
}


@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) ? textContainerStyle; // ivar: _textContainerStyle


+(CGFloat)_distanceFromBaselineToBottomWithFont:(id)arg0 textContainerStyle:(struct ? )arg1 ;
+(CGFloat)_distanceFromTopToBaselineWithFont:(id)arg0 textContainerStyle:(struct ? )arg1 ;
+(struct CGRect )_textBoundingRectWithSize:(struct CGSize )arg0 text:(id)arg1 font:(id)arg2 textContainerStyle:(struct ? )arg3 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 text:(id)arg1 font:(id)arg2 textContainerStyle:(struct ? )arg3 ;
-(id)initWithText:(id)arg0 ;
-(id)initWithText:(id)arg0 visualEffect:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif