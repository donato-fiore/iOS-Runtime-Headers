// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUFLIGHTINFOVIEW_H
#define FUFLIGHTINFOVIEW_H

@class UIView, NSLayoutConstraint, FUFlight, UIButton, FUFlightLeg;
@protocol FUFlightInfoViewProtocol;


#import "FUStyleProvider.h"
#import "FULabel.h"
#import "FUSeparator.h"

@interface FUFlightInfoView : UIView {
    NSUInteger _displayedLegId;
    FUStyleProvider *_styleProvider;
    BOOL _awake;
    BOOL _multiFlights;
}


@property (retain, nonatomic) NSLayoutConstraint *arrivalDelayConstraint; // ivar: _arrivalDelayConstraint
@property (retain, nonatomic) NSLayoutConstraint *arrivalGateConstraint; // ivar: _arrivalGateConstraint
@property (retain, nonatomic) NSLayoutConstraint *arrivalTerminalConstraint; // ivar: _arrivalTerminalConstraint
@property (retain, nonatomic) NSLayoutConstraint *bottomMargin; // ivar: _bottomMargin
@property NSInteger currentFocus; // ivar: _currentFocus
@property (weak) NSObject<FUFlightInfoViewProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSLayoutConstraint *departureDelayConstraint; // ivar: _departureDelayConstraint
@property (retain, nonatomic) NSLayoutConstraint *departureGateConstraint; // ivar: _departureGateConstraint
@property (retain, nonatomic) NSLayoutConstraint *departureTerminalConstraint; // ivar: _departureTerminalConstraint
@property (readonly, nonatomic) FUFlight *flight; // ivar: _flight
@property (weak) UIButton *flightButton; // ivar: _flightButton
@property (weak) FULabel *labelAirlineName; // ivar: _labelAirlineName
@property (weak) FULabel *labelArrivalCity; // ivar: _labelArrivalCity
@property (weak) FULabel *labelArrivalCode; // ivar: _labelArrivalCode
@property (weak) FULabel *labelArrivalDate; // ivar: _labelArrivalDate
@property (weak) FULabel *labelArrivalDelay; // ivar: _labelArrivalDelay
@property (weak) FULabel *labelArrivalInfo1; // ivar: _labelArrivalInfo1
@property (weak) FULabel *labelArrivalInfo2; // ivar: _labelArrivalInfo2
@property (weak) FULabel *labelArrivalTime; // ivar: _labelArrivalTime
@property (weak) FULabel *labelArrivalTitle; // ivar: _labelArrivalTitle
@property (weak) FULabel *labelBaggageClaimTitle; // ivar: _labelBaggageClaimTitle
@property (weak) FULabel *labelBaggageClaimValue; // ivar: _labelBaggageClaimValue
@property (weak) FULabel *labelDepartureCity; // ivar: _labelDepartureCity
@property (weak) FULabel *labelDepartureCode; // ivar: _labelDepartureCode
@property (weak) FULabel *labelDepartureDate; // ivar: _labelDepartureDate
@property (weak) FULabel *labelDepartureDelay; // ivar: _labelDepartureDelay
@property (weak) FULabel *labelDepartureInfo1; // ivar: _labelDepartureInfo1
@property (weak) FULabel *labelDepartureInfo2; // ivar: _labelDepartureInfo2
@property (weak) FULabel *labelDepartureTime; // ivar: _labelDepartureTime
@property (weak) FULabel *labelDepartureTitle; // ivar: _labelDepartureTitle
@property (weak) FULabel *labelDurationComplete; // ivar: _labelDurationComplete
@property (weak) FULabel *labelDurationTitle; // ivar: _labelDurationTitle
@property (weak) FULabel *labelDurationValue; // ivar: _labelDurationValue
@property (weak) FULabel *labelFlightCode; // ivar: _labelFlightCode
@property (weak) FULabel *labelStatus; // ivar: _labelStatus
@property (weak) FULabel *labelStatusTitle; // ivar: _labelStatusTitle
@property (retain, nonatomic) NSLayoutConstraint *leadingInset; // ivar: _leadingInset
@property (readonly, nonatomic) FUFlightLeg *leg; // ivar: _leg
@property (weak) FUSeparator *sep5; // ivar: _sep5
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) NSLayoutConstraint *trailingInset; // ivar: _trailingInset


+(id)flightViewForStyle:(NSUInteger)arg0 compact:(BOOL)arg1 ;
-(CGFloat)standardTableCellContentInset;
-(id)formattedDurationForDuration:(CGFloat)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)addDateTimeAttributesToString:(id)arg0 striked:(BOOL)arg1 alignment:(NSInteger)arg2 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)flightButtonTapped:(id)arg0 ;
-(void)setupLabelStylesWithStyle:(NSUInteger)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateAirlineInformation;
-(void)updateDateTimeForDeparture:(BOOL)arg0 ;
-(void)updateDelayInfo;
-(void)updateFlightButtonIcon;
-(void)updateFlightDates;
-(void)updateFlightStatus;
-(void)updateFlightTerminalInfo;
-(void)updateForFollowupContent:(BOOL)arg0 ;
-(void)updateLabelVisibility:(id)arg0 constraint:(id)arg1 ;
-(void)updateLocationInfo;
-(void)updateTimeLabel:(id)arg0 constraint:(id)arg1 withString:(id)arg2 ;


@end


#endif