// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTINGMESSAGEVIEW_H
#define UIPRINTINGMESSAGEVIEW_H



#import "UIView.h"
#import "UILabel.h"

@interface UIPrintingMessageView : UIView {
    UILabel *_title;
    UILabel *_message;
}




-(id)initInView:(id)arg0 title:(id)arg1 ;
-(void)setMessage:(id)arg0 ;


@end


#endif