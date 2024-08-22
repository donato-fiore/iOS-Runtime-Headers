// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLABELVIEWCONTROLLER_H
#define PKLABELVIEWCONTROLLER_H

@class UIViewController, UITextView, NSAttributedString;



@interface PKLabelViewController : UIViewController {
    UITextView *_textView;
}


@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


-(id)init;
-(id)initWithAttributedText:(id)arg0 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif