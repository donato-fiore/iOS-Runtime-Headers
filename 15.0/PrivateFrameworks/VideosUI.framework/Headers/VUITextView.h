// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUITEXTVIEW_H
#define VUITEXTVIEW_H

@class UITextView, NSAttributedString, NSString;



@interface VUITextView : UITextView

@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (retain, nonatomic) NSString *vuiText;
@property (nonatomic) NSInteger vuiTextAlignment;
@property (nonatomic) UIEdgeInsets vuiTextContainerInset;


-(struct CGSize )vui_sizeThatFits:(struct CGSize )arg0 ;
-(void)setVuiBackgroundColor:(id)arg0 ;


@end


#endif