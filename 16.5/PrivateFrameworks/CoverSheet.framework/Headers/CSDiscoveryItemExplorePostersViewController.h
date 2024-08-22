// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDISCOVERYITEMEXPLOREPOSTERSVIEWCONTROLLER_H
#define CSDISCOVERYITEMEXPLOREPOSTERSVIEWCONTROLLER_H



#import "CSDiscoveryItemViewController.h"
#import "CSDiscoveryItemExplorePostersPlatterView.h"

@interface CSDiscoveryItemExplorePostersViewController : CSDiscoveryItemViewController

@property (retain, nonatomic) CSDiscoveryItemExplorePostersPlatterView *platter; // ivar: _platter


-(id)initWithPlatter:(id)arg0 firstDidAppearCompletion:(id)arg1 ;
-(void)_updateAnimationState;
-(void)setScreenOn:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif