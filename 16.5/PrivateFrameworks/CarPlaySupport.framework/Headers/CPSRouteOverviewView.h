// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSROUTEOVERVIEWVIEW_H
#define CPSROUTEOVERVIEWVIEW_H

@class UIView, CPTravelEstimates, UILabel, CPTrip, NSString;


#import "CPSHidingLabel.h"
#import "CPSRouteEstimatesView.h"

@interface CPSRouteOverviewView : UIView

@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates; // ivar: _currentTravelEstimates
@property (readonly, nonatomic) CPSHidingLabel *destinationAddress; // ivar: _destinationAddress
@property (readonly, nonatomic) UILabel *destinationName; // ivar: _destinationName
@property (readonly, nonatomic) CPSRouteEstimatesView *estimatesView; // ivar: _estimatesView
@property (readonly, nonatomic) CPTrip *representedTrip; // ivar: _representedTrip
@property (copy, nonatomic) NSString *routeNote; // ivar: _routeNote
@property (readonly, nonatomic) CPSHidingLabel *routeNoteLabel; // ivar: _routeNoteLabel


+(id)_multilineLabel;
+(id)_nameForMapItem:(id)arg0 ;
+(id)_shortenedAddressForAddress:(id)arg0 ;
+(void)_applyBoldText:(id)arg0 fontSize:(CGFloat)arg1 color:(id)arg2 toLabel:(id)arg3 ;
+(void)_applyText:(id)arg0 fontSize:(CGFloat)arg1 color:(id)arg2 toLabel:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTripEstimateStyle;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif