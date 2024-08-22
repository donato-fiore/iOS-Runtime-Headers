// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCONTAINERVIEWCONTROLLER_H
#define CACCONTAINERVIEWCONTROLLER_H

@class UIViewController, UIView, NSMutableArray;



@interface CACContainerViewController : UIViewController {
    UIView *_viewAboveContainedViews;
}


@property (readonly, nonatomic) UIView *viewAboveContainedViews;
@property (retain, nonatomic) NSMutableArray *viewControllers; // ivar: _viewControllers


-(BOOL)_canShowWhileLocked;
-(void)installViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)loadView;
-(void)uninstallViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif