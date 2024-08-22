// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISIGNINVIEW_H
#define SKUISIGNINVIEW_H

@class UIView, UIColor, NSMutableArray, NSMapTable, NSString;
@protocol UITextFieldDelegate, SKUIViewElementView, SKUISignInViewDelegate;


#import "SKUIShapeView.h"
#import "SKUIViewElement.h"

@interface SKUISignInView : UIView <UITextFieldDelegate, SKUIViewElementView>

 {
    UIColor *_borderColor;
    SKUIShapeView *_borderView;
    NSMutableArray *_labels;
    NSMutableArray *_textFields;
    SKUIViewElement *_viewElement;
    NSMapTable *_viewFontDescriptors;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISignInViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_borderPathWithSize:(struct CGSize )arg0 ;
+(id)_fontDescriptorWithViewElement:(id)arg0 defaultTextStyle:(id)arg1 bold:(BOOL)arg2 ;
+(id)_labelWithViewElement:(id)arg0 ;
+(id)_textFieldWithViewElement:(id)arg0 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_layoutLabels;
-(id)_accountNameText;
-(id)_applePasswordText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_clearFieldsAndLabels;
-(void)_layoutTextFieldsOffsetX:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif