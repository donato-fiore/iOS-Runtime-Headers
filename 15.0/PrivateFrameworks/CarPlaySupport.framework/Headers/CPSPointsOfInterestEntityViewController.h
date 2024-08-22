// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPOINTSOFINTERESTENTITYVIEWCONTROLLER_H
#define CPSPOINTSOFINTERESTENTITYVIEWCONTROLLER_H



#import "CPSBaseEntityContentViewController.h"
#import "CPSPointsOfInterestMapViewController.h"

@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController

@property (readonly, nonatomic) CPSPointsOfInterestMapViewController *mapViewController; // ivar: _mapViewController


-(BOOL)shouldAppearInUnsafeArea;
-(id)initWithEntity:(id)arg0 resourceProvider:(id)arg1 ;
-(void)didUpdateEntity:(id)arg0 ;
-(void)setupViewControllers;
-(void)viewDidLoad;


@end


#endif