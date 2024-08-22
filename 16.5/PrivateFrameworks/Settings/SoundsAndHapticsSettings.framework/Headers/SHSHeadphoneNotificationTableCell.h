// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEADPHONENOTIFICATIONTABLECELL_H
#define SHSHEADPHONENOTIFICATIONTABLECELL_H

@class PSTableCell, UILabel, NSArray, CCChartView;



@interface SHSHeadphoneNotificationTableCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    NSArray *_constraints;
    NSArray *_notificationData;
    CCChartView *_notificationChart;
    BOOL _shouldHideChart;
}




-(id)accessibilityConstraintsWithVariableBindings:(id)arg0 metrics:(id)arg1 hideChart:(BOOL)arg2 ;
-(id)createNotificationChart;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)notificationChartSpec;
-(id)regularConstraintsWithVariableBindings:(id)arg0 metrics:(id)arg1 hideChart:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif