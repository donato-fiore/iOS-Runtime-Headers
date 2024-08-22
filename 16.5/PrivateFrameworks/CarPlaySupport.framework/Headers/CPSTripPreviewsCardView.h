// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSTRIPPREVIEWSCARDVIEW_H
#define CPSTRIPPREVIEWSCARDVIEW_H

@class UIView, NSString, UIButton, CPRouteChoice, CPTrip, CPTripPreviewTextConfiguration, NSArray;
@protocol CPSLinearFocusProviding, CPSTripInitiating;


#import "CPSCardPlatterView.h"

@interface CPSTripPreviewsCardView : UIView <CPSLinearFocusProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIButton *goButton; // ivar: _goButton
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPSCardPlatterView *platterView; // ivar: _platterView
@property (weak, nonatomic) CPRouteChoice *selectedRouteChoice; // ivar: _selectedRouteChoice
@property (weak, nonatomic) CPTrip *selectedTrip; // ivar: _selectedTrip
@property (readonly) Class superclass;
@property (retain, nonatomic) CPTripPreviewTextConfiguration *textConfiguration; // ivar: _textConfiguration
@property (readonly, weak, nonatomic) NSObject<CPSTripInitiating> *tripDelegate; // ivar: _tripDelegate
@property (readonly, copy, nonatomic) NSArray *trips; // ivar: _trips
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(id)_linearFocusItems;
-(id)initWithTripDelegate:(id)arg0 trips:(id)arg1 textConfiguration:(id)arg2 ;
-(id)setupGoButton;
-(void)_updateButtonColors;
-(void)notifyDidSelectRouteChoice:(id)arg0 ;
-(void)startTripButtonPressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateEstimates:(id)arg0 forTripIdentifier:(id)arg1 ;


@end


#endif