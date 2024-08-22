// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEDIRECTIONSCELL_H
#define MKPLACEDIRECTIONSCELL_H

@class UIButton, UILabel, NSLayoutConstraint, NSMutableArray, NSString;
@protocol MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver;


#import "MKPlaceSectionRowView.h"
#import "_MKQuickRouteManager.h"
#import "MKMapItem.h"

@interface MKPlaceDirectionsCell : MKPlaceSectionRowView <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver>

 {
    UIButton *_directionsButton;
    UIButton *_walkButton;
    UIButton *_transitButton;
    UIButton *_driveButton;
    UILabel *_walkTimeLabel;
    UILabel *_transitTimeLabel;
    UILabel *_driveTimeLabel;
    NSLayoutConstraint *_directionsToWalkButtonConstraint;
    NSLayoutConstraint *_directionsToTransitButtonConstraint;
    NSLayoutConstraint *_directionsToDriveButtonConstraint;
    NSLayoutConstraint *_walkButtonToTransitButtonConstraint;
    NSLayoutConstraint *_walkButtonToDriveButtonConstraint;
    NSLayoutConstraint *_transitButtonToDriveButtonConstraint;
    NSLayoutConstraint *_directionsTrailingConstraint;
    NSLayoutConstraint *_walkButtonTrailingConstraint;
    NSLayoutConstraint *_transitButtonTrailingConstraint;
    NSLayoutConstraint *_driveButtonTrailingConstraint;
    _MKQuickRouteManager *_quickRouteManager;
    NSMutableArray *_baseConstraints;
    NSMutableArray *_buttonBaselineConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) BOOL offlineMode; // ivar: _offlineMode
@property (copy, nonatomic) id *requestDirectionsBlock; // ivar: _requestDirectionsBlock
@property (readonly) Class superclass;


-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(NSUInteger)preferredDirectionsTypeForQuickRoute;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newButtonWithImage:(id)arg0 andSelector:(SEL)arg1 ;
-(id)newLabel;
-(id)timeEstimateFont;
-(struct CGSize )intrinsicContentSize;
-(void)_drivingDirectionsTapped:(id)arg0 ;
-(void)_quickDirectionsTapped:(id)arg0 ;
-(void)_transitDirectionsTapped:(id)arg0 ;
-(void)_walkingDirectionsTapped:(id)arg0 ;
-(void)contentSizeDidChange;
-(void)dealloc;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)quickRouteManager:(id)arg0 didUpdateETA:(id)arg1 error:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateConstraints;
-(void)updateETAFor:(NSUInteger)arg0 button:(id)arg1 label:(id)arg2 ;
-(void)updateETAs:(BOOL)arg0 constraintsOnly:(BOOL)arg1 ;


@end


#endif