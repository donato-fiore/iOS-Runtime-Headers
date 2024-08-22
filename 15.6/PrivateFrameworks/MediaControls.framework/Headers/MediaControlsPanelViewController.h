// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSPANELVIEWCONTROLLER_H
#define MEDIACONTROLSPANELVIEWCONTROLLER_H

@class UIViewController, UIView, MPAVRoutingViewController;



@interface MediaControlsPanelViewController : UIViewController

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (retain, nonatomic) MPAVRoutingViewController *routingViewController; // ivar: _routingViewController


+(id)panelViewControllerForCoverSheet;


@end


#endif