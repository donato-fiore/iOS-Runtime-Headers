// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCOMPETITIONMESSAGEBUBBLEVIEW_H
#define ASCOMPETITIONMESSAGEBUBBLEVIEW_H

@class UIView, UIImageView;



@interface ASCompetitionMessageBubbleView : UIView {
    UIImageView *_backgroundView;
    UIImageView *_messageBubbleView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif