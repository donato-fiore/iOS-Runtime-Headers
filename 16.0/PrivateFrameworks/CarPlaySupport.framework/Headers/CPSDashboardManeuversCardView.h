// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSDASHBOARDMANEUVERSCARDVIEW_H
#define CPSDASHBOARDMANEUVERSCARDVIEW_H

@class UIView, NSString, NSArray;
@protocol CPSNavigationDisplaying;


#import "CPSPrimaryManeuverView.h"
#import "CPSDashboardSecondaryManeuverView.h"

@interface CPSDashboardManeuversCardView : UIView <CPSNavigationDisplaying>



@property (nonatomic) BOOL allowsCustomBackgroundColorForManeuver; // ivar: _allowsCustomBackgroundColorForManeuver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *maneuvers; // ivar: _maneuvers
@property (retain, nonatomic) CPSPrimaryManeuverView *primaryManeuverView; // ivar: _primaryManeuverView
@property (retain, nonatomic) CPSDashboardSecondaryManeuverView *secondaryManeuverView; // ivar: _secondaryManeuverView
@property (retain, nonatomic) NSArray *secondaryManeveuverConstraints; // ivar: _secondaryManeveuverConstraints
@property (nonatomic) BOOL showSecondaryManeuverView; // ivar: _showSecondaryManeuverView
@property (readonly) Class superclass;


-(BOOL)wantsLargeSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateConstraints;
-(void)_updateStyleOverridesForSubviews;
-(void)layoutSubviews;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;


@end


#endif