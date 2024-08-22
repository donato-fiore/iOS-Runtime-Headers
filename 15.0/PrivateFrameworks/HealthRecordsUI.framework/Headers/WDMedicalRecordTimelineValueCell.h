// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDTIMELINEVALUECELL_H
#define WDMEDICALRECORDTIMELINEVALUECELL_H

@class NSString, NSLayoutConstraint, UILabel;
@protocol WDAttributedSubtitleDisplayable;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordTimelineValueCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable>

 {
    NSString *_titleString;
    NSString *_subtitleString;
    NSString *_valueString;
    NSString *_unitString;
}


@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSLayoutConstraint *subtitleBottomConstraint; // ivar: _subtitleBottomConstraint
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSLayoutConstraint *titleHeightConstraint; // ivar: _titleHeightConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleValueGapConstraint; // ivar: _titleValueGapConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // ivar: _titleWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *valueHeightConstraint; // ivar: _valueHeightConstraint
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) NSLayoutConstraint *valueLeftAlignConstraint; // ivar: _valueLeftAlignConstraint
@property (retain, nonatomic) NSLayoutConstraint *valueRightAlignConstraint; // ivar: _valueRightAlignConstraint
@property (retain, nonatomic) NSLayoutConstraint *valueWidthConstraint; // ivar: _valueWidthConstraint


+(id)_unitLabelFontMultipleLines;
+(id)_unitLabelFontSingleLine;
-(id)_generateValueDisplayAttributedString;
-(id)_generateValueDisplayAttributedStringWithValueFont:(id)arg0 unitFont:(id)arg1 ;
-(id)unit;
-(id)value;
-(void)setAttributedSubtitleText:(id)arg0 ;
-(void)setValue:(id)arg0 unit:(id)arg1 ;
-(void)setupSubviews;
-(void)updateConstraints;


@end


#endif