// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSROUTEPREVIEWSCARDVIEW_H
#define CPSROUTEPREVIEWSCARDVIEW_H

@class NSString;
@protocol CPSAlternateRouteSelecting;


#import "CPSTripPreviewsCardView.h"
#import "CPSAlternateRoutesView.h"

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting>



@property (readonly, nonatomic) CPSAlternateRoutesView *alternatesView; // ivar: _alternatesView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_linearFocusItems;
-(id)initWithTripDelegate:(id)arg0 trips:(id)arg1 textConfiguration:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)alternateRoutesView:(id)arg0 didSelectRouteChoice:(id)arg1 ;
-(void)setSelectedTrip:(id)arg0 ;


@end


#endif