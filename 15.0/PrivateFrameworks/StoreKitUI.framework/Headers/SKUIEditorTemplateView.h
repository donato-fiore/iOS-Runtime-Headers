// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIEDITORTEMPLATEVIEW_H
#define SKUIEDITORTEMPLATEVIEW_H

@class UIColor, UITextView, NSString;
@protocol UITextViewDelegate, SKUIViewElementView, SKUIEditorTemplateViewDelegate;


#import "SKUIViewReuseView.h"

@interface SKUIEditorTemplateView : SKUIViewReuseView <UITextViewDelegate, SKUIViewElementView>

 {
    UIColor *_textColor;
    UITextView *_textView;
    CGRect _keyboardFrame;
}


@property (nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIEditorTemplateViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)_textFromViewElement:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_reloadSubviews;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif