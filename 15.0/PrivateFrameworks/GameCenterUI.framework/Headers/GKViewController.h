// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKVIEWCONTROLLER_H
#define GKVIEWCONTROLLER_H

@class UIViewController, GKColorPalette;


#import "GKViewController.h"

@interface GKViewController : UIViewController

@property (retain, nonatomic) GKColorPalette *colorPalette; // ivar: _colorPalette
@property (retain, nonatomic) GKViewController *rootViewController; // ivar: _rootViewController
@property (nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated; // ivar: _shouldUpdateContentOnlyWhenAuthenticated


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)displayUsingSplitNavigationBar;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif