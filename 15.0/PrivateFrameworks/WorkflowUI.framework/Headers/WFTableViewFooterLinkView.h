// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLEVIEWFOOTERLINKVIEW_H
#define WFTABLEVIEWFOOTERLINKVIEW_H

@class UITableViewHeaderFooterView, NSURL, NSString, UITextView;
@protocol UITextViewDelegate, WFTableViewFooterLinkViewDelegate;



@interface WFTableViewFooterLinkView : UITableViewHeaderFooterView <UITextViewDelegate>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTableViewFooterLinkViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateLinkColor;


@end


#endif