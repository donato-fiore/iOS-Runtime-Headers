// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAIRPLAYROOTVIEWCONTROLLER_H
#define PUAIRPLAYROOTVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface PUAirPlayRootViewController : UIViewController

@property (copy, nonatomic, setter=_setChildViewConstraints:) NSArray *_childViewConstraints; // ivar: __childViewConstraints
@property (retain, nonatomic) UIViewController *childViewController; // ivar: _childViewController


-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif