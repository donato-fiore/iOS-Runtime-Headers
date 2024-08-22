// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUXVIEWCONTROLLER_H
#define PUXVIEWCONTROLLER_H

@class UIViewController;



@interface PUXViewController : UIViewController

@property (readonly, nonatomic) UIViewController *childViewController; // ivar: _childViewController
@property (nonatomic) CGRect targetFrame; // ivar: _targetFrame


-(id)initWithChildViewController:(id)arg0 targetFrame:(struct CGRect )arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif