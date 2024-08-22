// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSSPATIALPROFILENAVIGATIONCONTROLLER_H
#define HPSSPATIALPROFILENAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol HPSSpatialProfileManagerViewController;



@interface HPSSpatialProfileNavigationController : UINavigationController <HPSSpatialProfileManagerViewController>



@property (copy, nonatomic) id *dismissalHandler; // ivar: dismissalHandler


-(NSUInteger)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif