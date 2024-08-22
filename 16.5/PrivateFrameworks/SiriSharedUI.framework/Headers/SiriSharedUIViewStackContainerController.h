// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIVIEWSTACKCONTAINERCONTROLLER_H
#define SIRISHAREDUIVIEWSTACKCONTAINERCONTROLLER_H

@class UIViewController;


#import "SiriSharedUIViewStackContainer.h"

@interface SiriSharedUIViewStackContainerController : UIViewController

@property (readonly, nonatomic) SiriSharedUIViewStackContainer *viewStackContainer;


-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif