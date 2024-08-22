// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTUIERRORVIEWCONTROLLER_H
#define LTUIERRORVIEWCONTROLLER_H

@class UINavigationController;



@interface LTUIErrorViewController : UINavigationController



-(BOOL)_canShowWhileLocked;
-(id)initWithError:(id)arg0 ;
-(void)_updateBackground;
-(void)drawCloseButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif