// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSPAGINGTRIPPREVIEWSCARDVIEW_H
#define CPSPAGINGTRIPPREVIEWSCARDVIEW_H

@class NSLayoutConstraint, NSString, NSMutableDictionary, UIButton;
@protocol CPSAlternateRouteSelecting, CPSPageControlling;


#import "CPSTripPreviewsCardView.h"
#import "CPSHairlineBorderedView.h"
#import "CPSRouteOverviewView.h"
#import "CPSPagingControlView.h"

@interface CPSPagingTripPreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting, CPSPageControlling>



@property (retain, nonatomic) NSLayoutConstraint *alternateRoutesHeightConstraint; // ivar: _alternateRoutesHeightConstraint
@property (readonly, nonatomic) CPSHairlineBorderedView *borderedAlternatesView; // ivar: _borderedAlternatesView
@property (readonly, nonatomic) CPSHairlineBorderedView *borderedGoButton; // ivar: _borderedGoButton
@property (readonly, nonatomic) CPSHairlineBorderedView *borderedMoreRoutesButton; // ivar: _borderedMoreRoutesButton
@property (retain, nonatomic) NSLayoutConstraint *contentBottomConstraint; // ivar: _contentBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentTopConstraint; // ivar: _contentTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *estimatesForTripIdentifiers; // ivar: _estimatesForTripIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *moreRoutesButton; // ivar: _moreRoutesButton
@property (readonly, nonatomic) CPSRouteOverviewView *overviewView; // ivar: _overviewView
@property (readonly, nonatomic) CPSPagingControlView *pageControl; // ivar: _pageControl
@property (nonatomic) BOOL showMoreRoutes; // ivar: _showMoreRoutes
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *toggleRoutesButtonHeightConstraint; // ivar: _toggleRoutesButtonHeightConstraint


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_linearFocusItems;
-(id)initWithTripDelegate:(id)arg0 trips:(id)arg1 textConfiguration:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_setOverviewCollapsed:(BOOL)arg0 ;
-(void)_toggleMoreRoutesButtonPressed:(id)arg0 ;
-(void)_updateButtonColors;
-(void)alternateRoutesView:(id)arg0 didSelectRouteChoice:(id)arg1 ;
-(void)pagingControlView:(id)arg0 didSelectPageIndex:(NSUInteger)arg1 ;
-(void)setSelectedRouteChoice:(id)arg0 ;
-(void)setSelectedTrip:(id)arg0 ;
-(void)updateEstimates:(id)arg0 forTripIdentifier:(id)arg1 ;


@end


#endif