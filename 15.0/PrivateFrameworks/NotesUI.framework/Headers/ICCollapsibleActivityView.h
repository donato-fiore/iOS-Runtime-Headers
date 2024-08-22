// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCOLLAPSIBLEACTIVITYVIEW_H
#define ICCOLLAPSIBLEACTIVITYVIEW_H

@class UIActivityIndicatorView;


#import "ICCollapsibleBaseView.h"

@interface ICCollapsibleActivityView : ICCollapsibleBaseView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) BOOL isAnimating;


-(void)performSetup;
-(void)setCollapsed:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif