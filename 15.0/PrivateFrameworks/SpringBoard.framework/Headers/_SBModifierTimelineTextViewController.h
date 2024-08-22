// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBMODIFIERTIMELINETEXTVIEWCONTROLLER_H
#define _SBMODIFIERTIMELINETEXTVIEWCONTROLLER_H

@class UIViewController, UITextView, NSAttributedString, NSString;



@interface _SBModifierTimelineTextViewController : UIViewController {
    UITextView *_textView;
}


@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) NSString *text; // ivar: _text


-(void)prepareForReuse;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif