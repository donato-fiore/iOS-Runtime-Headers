// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSAGESUMMARYTITLEVIEW_H
#define STUSAGESUMMARYTITLEVIEW_H

@class UIView, UIImageView, NSLayoutConstraint, UILabel, NSArray;


#import "STUsageReport.h"

@interface STUsageSummaryTitleView : UIView

@property (readonly) UIImageView *deltaAverageImageView; // ivar: _deltaAverageImageView
@property (readonly) NSLayoutConstraint *deltaAverageImageViewHeightConstraint; // ivar: _deltaAverageImageViewHeightConstraint
@property (readonly) NSLayoutConstraint *deltaAverageImageViewVerticalPosition; // ivar: _deltaAverageImageViewVerticalPosition
@property (readonly) NSLayoutConstraint *deltaAverageImageViewWidthConstraint; // ivar: _deltaAverageImageViewWidthConstraint
@property (readonly) UILabel *deltaAverageLabel; // ivar: _deltaAverageLabel
@property BOOL hasMultilineLayout; // ivar: _hasMultilineLayout
@property (retain) UIImageView *notificationDot; // ivar: _notificationDot
@property CGFloat previousWidth; // ivar: _previousWidth
@property (readonly) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly) BOOL truncateAverageLabel; // ivar: _truncateAverageLabel
@property (nonatomic) NSUInteger usageItemType; // ivar: _usageItemType
@property (readonly) UILabel *usageLabel; // ivar: _usageLabel
@property (retain, nonatomic) STUsageReport *usageReport; // ivar: _usageReport
@property (readonly) BOOL useVibrancy; // ivar: _useVibrancy
@property (retain) NSArray *variableConstraints; // ivar: _variableConstraints


-(BOOL)_shouldHaveMultilineLayoutForLineWidth:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVibrancy:(BOOL)arg0 usageItemType:(NSUInteger)arg1 truncateAverageLabel:(BOOL)arg2 ;
-(void)_setUpConstraints;
-(void)_setupSubviews;
-(void)_updateDeltaAverageViews;
-(void)_updateTitleLabel;
-(void)_updateUsageLabel;
-(void)awakeFromNib;


@end


#endif