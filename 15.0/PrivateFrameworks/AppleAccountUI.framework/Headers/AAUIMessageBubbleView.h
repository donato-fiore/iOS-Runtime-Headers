// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIMESSAGEBUBBLEVIEW_H
#define AAUIMESSAGEBUBBLEVIEW_H

@class UIView, NSString;



@interface AAUIMessageBubbleView : UIView {
    NSString *_bubbleText;
}




-(id)_horizontalStackView;
-(id)_memoBalloonViewWithText:(id)arg0 ;
-(id)_verticalStackView;
-(id)initWithText:(id)arg0 ;
-(void)_setupContentViewWithBubbleText:(id)arg0 ;


@end


#endif