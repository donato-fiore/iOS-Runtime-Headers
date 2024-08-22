// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBNAVIGATIONCONTROLLER_H
#define OBNAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface OBNavigationController : UINavigationController

@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations


-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif