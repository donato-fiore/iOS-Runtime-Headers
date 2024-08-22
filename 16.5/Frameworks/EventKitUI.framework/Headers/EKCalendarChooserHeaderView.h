// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARCHOOSERHEADERVIEW_H
#define EKCALENDARCHOOSERHEADERVIEW_H

@class UITableViewHeaderFooterView, UIActivityIndicatorView, NSArray, UILabel;


#import "EKCalendarChooser.h"
#import "EKGroupInfo.h"
#import "EKGroupInfoButton.h"

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
    NSArray *_primaryLabelWithShowAllButtonLargeConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonLargeConstraints;
    NSArray *_commonLargeConstraints;
    NSArray *_primaryLabelWithShowAllButtonNormalConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonNormalConstraints;
    NSArray *_commonNormalConstraints;
    NSArray *_commonConstraints;
    BOOL _stacked;
}


@property (weak, nonatomic) EKCalendarChooser *chooser; // ivar: _chooser
@property (retain, nonatomic) EKGroupInfo *group; // ivar: _group
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) EKGroupInfoButton *showAllButton; // ivar: _showAllButton
@property (nonatomic) BOOL showAllButtonHidden;


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_activateConstraints;
-(void)_contentSizeCategoryChanged:(id)arg0 ;
-(void)_createConstraints;
-(void)_eventStoreChanged;
-(void)_groupShowAllButtonTapped:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(void)updateSpinner;


@end


#endif