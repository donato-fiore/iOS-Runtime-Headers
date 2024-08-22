// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFOOTERHYPERLINKCELL_H
#define PKFOOTERHYPERLINKCELL_H

@class UICollectionViewListCell, UITextView, NSString, UIColor;
@protocol UITextViewDelegate;



@interface PKFooterHyperlinkCell : UICollectionViewListCell <UITextViewDelegate>

 {
    UITextView *_textView;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)_isLinkRangeValid;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureTextViewIfNecessary;
-(void)layoutSubviews;


@end


#endif