// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTINGMESSAGEVIEW_H
#define UIPRINTINGMESSAGEVIEW_H

@class UIView, UILabel;



@interface UIPrintingMessageView : UIView {
    UILabel *_title;
    UILabel *_message;
}




-(id)initInView:(id)arg0 title:(id)arg1 ;
-(void)setMessage:(id)arg0 ;


@end


#endif