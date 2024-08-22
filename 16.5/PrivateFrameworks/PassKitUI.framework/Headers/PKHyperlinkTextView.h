// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHYPERLINKTEXTVIEW_H
#define PKHYPERLINKTEXTVIEW_H

@class UITextView, NSString, UIColor;
@protocol UITextViewDelegate;



@interface PKHyperlinkTextView : UITextView <UITextViewDelegate>



@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLinkUnderlined; // ivar: _isLinkUnderlined
@property (retain, nonatomic) UIColor *linkForegroundColor; // ivar: _linkForegroundColor
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateLinkTextAttributes;


@end


#endif