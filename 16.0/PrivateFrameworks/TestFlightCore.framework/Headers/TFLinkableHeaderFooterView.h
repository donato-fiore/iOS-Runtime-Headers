// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFLINKABLEHEADERFOOTERVIEW_H
#define TFLINKABLEHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UITextView;



@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic) BOOL isHeader; // ivar: _isHeader
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView


+(CGFloat)_heightForTextViewWithText:(id)arg0 font:(id)arg1 isHeader:(BOOL)arg2 fittingWidth:(CGFloat)arg3 inTraitEnvironment:(id)arg4 ;
+(id)reuseIdentifier;
+(struct CGSize )itemSizeWithText:(id)arg0 isHeader:(BOOL)arg1 fittingSize:(struct CGSize )arg2 inTraitEnvironment:(id)arg3 ;
-(id)init;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg0 ;
-(void)_updateTextViewWithLinkMap:(id)arg0 ;
-(void)applyText:(id)arg0 withTextLinkMap:(id)arg1 isHeader:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif