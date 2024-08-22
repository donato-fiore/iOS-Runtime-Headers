// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTEXTTIGHTENINGLABEL_H
#define CKTEXTTIGHTENINGLABEL_H

@class UILabel, NSString, NSAttributedString;



@interface CKTextTighteningLabel : UILabel

@property (copy, nonatomic) NSString *managedText; // ivar: _managedText
@property (retain, nonatomic) NSAttributedString *tightenedAttributedText; // ivar: _tightenedAttributedText
@property (nonatomic) CGFloat tightenedAttributedTextBoundsWidth; // ivar: _tightenedAttributedTextBoundsWidth
@property (retain, nonatomic) NSAttributedString *untightenedAttributedText; // ivar: _untightenedAttributedText
@property (nonatomic) CGFloat untightenedAttributedTextBoundsWidth; // ivar: _untightenedAttributedTextBoundsWidth


+(BOOL)attributedText:(id)arg0 fitsInRect:(struct CGRect )arg1 ;
+(id)_attributedStringWithText:(id)arg0 font:(id)arg1 sizeCategory:(id)arg2 textRect:(struct CGRect )arg3 forFittingSize:(BOOL)arg4 ;
+(void)applyKerning:(CGFloat)arg0 whitespaceKerning:(CGFloat)arg1 toAttributedString:(id)arg2 ;
-(id)_attributedTextForFittingSize:(BOOL)arg0 boundsSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_clearTextTighteningCaches;
-(void)_updateAttributedTextForFittingSize:(BOOL)arg0 boundsSize:(struct CGSize )arg1 ;
-(void)_updateTightenedAttributedText;
-(void)layoutSubviews;
-(void)setFont:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif