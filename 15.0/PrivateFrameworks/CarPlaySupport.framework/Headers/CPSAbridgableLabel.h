// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSABRIDGABLELABEL_H
#define CPSABRIDGABLELABEL_H

@class UILabel, NSArray;



@interface CPSAbridgableLabel : UILabel

@property (copy, nonatomic) NSArray *attributedTextVariants; // ivar: _attributedTextVariants
@property (copy, nonatomic) NSArray *textVariants; // ivar: _textVariants
@property (nonatomic) BOOL useAttributedTextVariants; // ivar: _useAttributedTextVariants
@property (nonatomic) NSUInteger variantsIndex; // ivar: _variantsIndex


+(id)sanitizedTextForText:(id)arg0 ;
-(NSInteger)_compareBoundsSizeToLayoutSizeForString:(id)arg0 ;
-(NSUInteger)_numberOfVariants;
-(id)_variantsList;
-(id)init;
-(id)sanitizedAttributedStringForString:(id)arg0 ;
-(void)_updateVariant;
-(void)setAttributedText:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif