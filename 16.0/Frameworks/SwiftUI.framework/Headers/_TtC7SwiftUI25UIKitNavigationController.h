// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI25UIKITNAVIGATIONCONTROLLER_H
#define _TTC7SWIFTUI25UIKITNAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface _TtC7SwiftUI25UIKitNavigationController : UINavigationController {
    ? update;
    ? isTransitioningToSize;
    ? backgroundHost;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif