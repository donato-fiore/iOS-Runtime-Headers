// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIFOOTERHYPERLINKVIEW_H
#define PSUIFOOTERHYPERLINKVIEW_H

@class UITableViewHeaderFooterView, NSURL, NSString, UITextView;
@protocol UITextViewDelegate, PSHeaderFooterView;



@interface PSUIFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (readonly) Class superclass;
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)isValidLinkRange;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_accessibilitySetInterfaceStyleIntent:(NSUInteger)arg0 ;
-(void)_linkify;
-(void)refreshContentsWithSpecifier:(id)arg0 ;
-(void)setupSubviewsAndContstraints;


@end


#endif