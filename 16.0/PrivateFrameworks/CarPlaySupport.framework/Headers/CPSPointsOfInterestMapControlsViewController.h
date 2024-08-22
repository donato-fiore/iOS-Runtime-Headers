// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSPOINTSOFINTERESTMAPCONTROLSVIEWCONTROLLER_H
#define CPSPOINTSOFINTERESTMAPCONTROLSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CPSButtonDelegate, CPSLinearFocusProviding, CPSPointsOfInterestMapDelegate;


#import "CPSEntityMapButton.h"

@interface CPSPointsOfInterestMapControlsViewController : UIViewController <CPSButtonDelegate, CPSLinearFocusProviding>



@property (retain, nonatomic) CPSEntityMapButton *centerButton; // ivar: _centerButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CPSPointsOfInterestMapDelegate> *mapDelegate; // ivar: _mapDelegate
@property (retain, nonatomic) CPSEntityMapButton *panButton; // ivar: _panButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (retain, nonatomic) CPSEntityMapButton *zoomInButton; // ivar: _zoomInButton
@property (retain, nonatomic) CPSEntityMapButton *zoomOutButton; // ivar: _zoomOutButton


-(id)_linearFocusItems;
-(id)initWithMapDelegate:(id)arg0 ;
-(void)centerPressed:(id)arg0 ;
-(void)didSelectButton:(id)arg0 ;
-(void)panPressed:(id)arg0 ;
-(void)setupViews;
-(void)viewDidLoad;
-(void)zoomInPressed:(id)arg0 ;
-(void)zoomOutPressed:(id)arg0 ;


@end


#endif