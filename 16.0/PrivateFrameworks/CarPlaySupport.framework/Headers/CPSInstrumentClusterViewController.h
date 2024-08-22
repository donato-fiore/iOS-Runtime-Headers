// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSINSTRUMENTCLUSTERVIEWCONTROLLER_H
#define CPSINSTRUMENTCLUSTERVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol CPSNavigationDisplaying;


#import "CPSAbridgableLabel.h"
#import "CPSDashboardManeuversCardView.h"
#import "CPSPausedCardView.h"

@interface CPSInstrumentClusterViewController : UIViewController <CPSNavigationDisplaying>



@property (copy, nonatomic) NSArray *attributedInactiveVariants; // ivar: _attributedInactiveVariants
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger guidanceStyle; // ivar: _guidanceStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPSAbridgableLabel *inactiveLabel; // ivar: _inactiveLabel
@property (copy, nonatomic) NSArray *inactiveVariants; // ivar: _inactiveVariants
@property (retain, nonatomic) CPSDashboardManeuversCardView *maneuversCardView; // ivar: _maneuversCardView
@property (retain, nonatomic) CPSPausedCardView *pausedCardView; // ivar: _pausedCardView
@property (readonly) Class superclass;


-(void)_transitionFromViews:(id)arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateGuidanceStyle;
-(void)loadView;
-(void)navigator:(id)arg0 didEndTrip:(BOOL)arg1 ;
-(void)navigator:(id)arg0 pausedTripForReason:(NSUInteger)arg1 description:(id)arg2 usingColor:(id)arg3 ;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;


@end


#endif