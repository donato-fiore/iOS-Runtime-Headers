// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONLISTCOLLECTIONVIEWCELL_H
#define WFAUTOMATIONLISTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, WFConfiguredTrigger, UILabel, HFTriggerItem, NSString, UIView, NSLayoutConstraint, WFWorkflow;


#import "WFAutomationSummaryIconsView.h"

@interface WFAutomationListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WFConfiguredTrigger *configuredTrigger; // ivar: _configuredTrigger
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) HFTriggerItem *homeTrigger; // ivar: _homeTrigger
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property NSUInteger maskedCorners;
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly, nonatomic) NSLayoutConstraint *separatorViewHeightConstraint; // ivar: _separatorViewHeightConstraint
@property BOOL showsSeparator;
@property (readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView; // ivar: _summaryIconsView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUI;


@end


#endif