// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMBUTTONLABEL_H
#define CAMBUTTONLABEL_H

@class UIView, UILabel, NSString, UIColor;



@interface CAMButtonLabel : UIView

@property (readonly, retain, nonatomic) UILabel *_label; // ivar: __label
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL wantsLegibilityShadow; // ivar: _wantsLegibilityShadow


-(id)highlightedTextColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateAttributedText;
-(void)_updateInternalContentSize;
-(void)setHighlightedTextColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif