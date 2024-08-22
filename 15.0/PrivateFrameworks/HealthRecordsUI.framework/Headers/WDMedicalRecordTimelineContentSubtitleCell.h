// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDTIMELINECONTENTSUBTITLECELL_H
#define WDMEDICALRECORDTIMELINECONTENTSUBTITLECELL_H

@class NSString, UIView, UILabel, NSLayoutConstraint;
@protocol WDAttributedSubtitleDisplayable;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable>

 {
    NSString *_titleString;
    NSString *_subtitleString;
}


@property (retain, nonatomic) UIView *disclosureChevronView; // ivar: _disclosureChevronView
@property (nonatomic) BOOL showDisclosureIndicator; // ivar: _showDisclosureIndicator
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSLayoutConstraint *titleChevronConstraint; // ivar: _titleChevronConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titlePillConstraint; // ivar: _titlePillConstraint
@property (nonatomic) BOOL useRegularFontForSubtitle; // ivar: _useRegularFontForSubtitle


-(void)setAttributedSubtitleText:(id)arg0 ;
-(void)setupSubviews;


@end


#endif