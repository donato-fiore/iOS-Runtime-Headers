// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUINAVIGATIONVIEWCONTROLLER_H
#define MCUINAVIGATIONVIEWCONTROLLER_H

@class UINavigationController;



@interface MCUINavigationViewController : UINavigationController

@property (copy, nonatomic) id *showViewControllerCompletionBlock; // ivar: _showViewControllerCompletionBlock


-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif