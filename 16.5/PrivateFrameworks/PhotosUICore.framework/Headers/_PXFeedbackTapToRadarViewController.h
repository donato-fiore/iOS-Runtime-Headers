// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXFEEDBACKTAPTORADARVIEWCONTROLLER_H
#define _PXFEEDBACKTAPTORADARVIEWCONTROLLER_H

@class UIViewController, UISwitch, UILabel, UISegmentedControl;
@protocol _PXFeedbackTapToRadarViewControllerDelegate;



@interface _PXFeedbackTapToRadarViewController : UIViewController

@property (retain, nonatomic) NSObject<_PXFeedbackTapToRadarViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UISwitch *diagnoseSwitch; // ivar: _diagnoseSwitch
@property (retain, nonatomic) UILabel *routesDescriptionLabel; // ivar: _routesDescriptionLabel
@property (retain, nonatomic) UISwitch *screenshotSwitch; // ivar: _screenshotSwitch
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl


-(void)_didSelectCancelButton:(id)arg0 ;
-(void)_didSelectFileRadarButton:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif