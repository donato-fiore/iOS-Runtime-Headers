// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFOOTERHYPERLINKVIEW_H
#define PKFOOTERHYPERLINKVIEW_H

@class UITableViewHeaderFooterView, NSString, NSAttributedString, UIColor;
@protocol UITextViewDelegate;


#import "PKHyperlinkTextView.h"

@interface PKFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate>

 {
    PKHyperlinkTextView *_textView;
    NSString *_text;
}


@property (copy, nonatomic) id *action;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (readonly) Class superclass;


-(id)addFooterStyleAttributes:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)text;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setText:(id)arg0 ;


@end


#endif