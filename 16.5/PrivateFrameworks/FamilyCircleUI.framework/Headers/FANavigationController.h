// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FANAVIGATIONCONTROLLER_H
#define FANAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol FANavigationControllerDelegate;



@interface FANavigationController : UINavigationController

@property (weak, nonatomic) NSObject<FANavigationControllerDelegate> *familyDelegate; // ivar: _familyDelegate


-(BOOL)_isEmpty;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif