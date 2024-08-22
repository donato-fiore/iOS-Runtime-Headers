// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKNEARESTSTATIONCELL_H
#define MKNEARESTSTATIONCELL_H

@class UITableViewCell, UIImageView, NSLayoutConstraint;


#import "_MKUILabel.h"
#import "MKTransitInfoLabelView.h"

@interface MKNearestStationCell : UITableViewCell {
    _MKUILabel *_stationTitleLabel;
    MKTransitInfoLabelView *_stationInfoLabel;
    UIImageView *_stationImageView;
    NSLayoutConstraint *_stationLabelToImageViewConstraint;
    NSLayoutConstraint *_stationLabelToLeadingEdgeConstraint;
    NSLayoutConstraint *_stationLabelToTopConstraint;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)configureWithNearestStation:(id)arg0 ;
-(void)didMoveToWindow;


@end


#endif