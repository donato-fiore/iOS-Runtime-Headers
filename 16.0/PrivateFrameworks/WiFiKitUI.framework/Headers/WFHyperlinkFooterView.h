// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHYPERLINKFOOTERVIEW_H
#define WFHYPERLINKFOOTERVIEW_H

@class UIView, UITextView, NSString, NSURL;
@protocol UITextViewDelegate;



@interface WFHyperlinkFooterView : UIView <UITextViewDelegate>

 {
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    _NSRange _linkRange;
}


@property (retain) NSURL *URL;
@property SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property _NSRange linkRange;
@property (readonly) Class superclass;
@property (weak) id *target; // ivar: _target
@property (retain) NSString *text;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_linkify;
-(void)layoutSubviews;


@end


#endif