// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMULTIHYPERLINKVIEW_H
#define PKMULTIHYPERLINKVIEW_H

@class UIView, UITextView, NSString, UIColor, NSArray;
@protocol UITextViewDelegate;



@interface PKMultiHyperlinkView : UIView <UITextViewDelegate>

 {
    UITextView *_textView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (copy, nonatomic) NSArray *sources; // ivar: _sources
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(BOOL)_isLinkRangeValid:(struct _NSRange )arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateText;
-(void)layoutSubviews;


@end


#endif