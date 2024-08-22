// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FULABEL_H
#define FULABEL_H

@class TLKLabel, NSString, NSAttributedString, NSLayoutConstraint;


#import "FULabel.h"

@interface FULabel : TLKLabel {
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
}


@property (weak) NSLayoutConstraint *associatedLabelConstraint; // ivar: _associatedLabelConstraint
@property (weak, nonatomic) FULabel *associatedScalingLabel; // ivar: _associatedScalingLabel
@property (copy) id *onTap; // ivar: _onTap
@property (readonly, nonatomic) BOOL uppercase; // ivar: _uppercase
@property (readonly) BOOL useCurrentLocale; // ivar: _useCurrentLocale


-(void)awakeFromNib;
-(void)layoutSubviews;
-(void)performTap:(id)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setStyleProvider:(id)arg0 primaryStyle:(BOOL)arg1 ;
-(void)setText:(id)arg0 ;
-(void)updateWidthConstraintWithRatio:(CGFloat)arg0 ;


@end


#endif