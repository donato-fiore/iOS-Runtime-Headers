// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSNAVIGATIONETAVIEW_H
#define CPSNAVIGATIONETAVIEW_H

@class UIView, NSString, CPTrip;
@protocol CPSNavigationDisplaying;


#import "CPSRouteEstimatesView.h"

@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying>



@property (retain, nonatomic) UIView *borderView; // ivar: _borderView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPSRouteEstimatesView *routeEstimatesView; // ivar: _routeEstimatesView
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPTrip *trip; // ivar: _trip
@property (nonatomic) NSUInteger tripEstimateStyle; // ivar: _tripEstimateStyle


-(id)initWithTrip:(id)arg0 style:(NSUInteger)arg1 ;
-(void)_updateStyle;
-(void)didMoveToSuperview;
-(void)removeFromSuperview;
-(void)setHidden:(BOOL)arg0 ;
-(void)showManeuvers:(id)arg0 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;


@end


#endif