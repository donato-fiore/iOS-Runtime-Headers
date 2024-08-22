// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPRIVACYREPORTTRACKINGTABLEVIEWCELL_H
#define SFPRIVACYREPORTTRACKINGTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UILayoutGuide, NSLayoutConstraint, NSNumberFormatter;


#import "SFPrivacyReportMeterBar.h"

@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell {
    SFPrivacyReportMeterBar *_countMeter;
    UILabel *_maxCountLabel;
    UILayoutGuide *_maxCountMeterGuide;
    NSLayoutConstraint *_countMeterWidthConstraint;
    NSNumberFormatter *_countFormatter;
}


@property (nonatomic) CGFloat count; // ivar: _count
@property (readonly, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (readonly, nonatomic) UILabel *domainDetailLabel; // ivar: _domainDetailLabel
@property (readonly, nonatomic) UILabel *domainLabel; // ivar: _domainLabel
@property (nonatomic) CGFloat maxCount; // ivar: _maxCount


-(id)initWithDetailLabel:(BOOL)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateCountViews;


@end


#endif