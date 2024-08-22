// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSMANEUVERSCARDVIEW_H
#define CPSMANEUVERSCARDVIEW_H

@class UIView, NSString, NSArray, NSLayoutConstraint;
@protocol CPSNavigationDisplaying, CPSCardPlatterProviding, BSInvalidatable;


#import "CPSCardPlatterView.h"
#import "CPSHairlineView.h"
#import "CPSPrimaryManeuverView.h"
#import "CPSSecondaryManeuverView.h"

@interface CPSManeuversCardView : UIView <CPSNavigationDisplaying, CPSCardPlatterProviding, BSInvalidatable>



@property (retain, nonatomic) CPSCardPlatterView *cardPlatterView; // ivar: _cardPlatterView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPSHairlineView *hairlineView; // ivar: _hairlineView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *maneuvers; // ivar: _maneuvers
@property (retain, nonatomic) NSLayoutConstraint *platterBottomConstraint; // ivar: _platterBottomConstraint
@property (retain, nonatomic) CPSPrimaryManeuverView *primaryManeuverView; // ivar: _primaryManeuverView
@property (retain, nonatomic) NSArray *secondaryHeightConstraints; // ivar: _secondaryHeightConstraints
@property (retain, nonatomic) CPSSecondaryManeuverView *secondaryManeuverView; // ivar: _secondaryManeuverView
@property (nonatomic) BOOL showSecondaryManeuverView; // ivar: _showSecondaryManeuverView
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesCustomBackgroundColor; // ivar: _usesCustomBackgroundColor


-(BOOL)canFitSize:(struct CGSize )arg0 ;
-(id)initWithManeuvers:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateConstraints;
-(void)_updateHairlineBackgroundColor;
-(void)_updateSecondaryManeuverBackgroundColor;
-(void)invalidate;
-(void)layoutSubviews;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;


@end


#endif