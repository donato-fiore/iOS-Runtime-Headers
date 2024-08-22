// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXACTIVITYSTATUSVIEW_H
#define PRXACTIVITYSTATUSVIEW_H

@class UIView, UIActivityIndicatorView, NSLayoutConstraint;


#import "PRXLabel.h"

@interface PRXActivityStatusView : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) NSLayoutConstraint *activityIndicatorVerticalConstraint; // ivar: _activityIndicatorVerticalConstraint
@property (readonly, nonatomic) PRXLabel *statusLabel; // ivar: _statusLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif