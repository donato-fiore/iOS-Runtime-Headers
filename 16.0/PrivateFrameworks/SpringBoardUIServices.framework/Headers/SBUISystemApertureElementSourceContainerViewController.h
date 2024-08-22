// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREELEMENTSOURCECONTAINERVIEWCONTROLLER_H
#define SBUISYSTEMAPERTUREELEMENTSOURCECONTAINERVIEWCONTROLLER_H

@class UIViewController, UIViewController<SBUISystemApertureElement>;



@interface SBUISystemApertureElementSourceContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController<SBUISystemApertureElement> *elementViewController; // ivar: _elementViewController


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_childViewControllerForAlwaysOnTimelines;
-(id)_transitionCoordinator;


@end


#endif