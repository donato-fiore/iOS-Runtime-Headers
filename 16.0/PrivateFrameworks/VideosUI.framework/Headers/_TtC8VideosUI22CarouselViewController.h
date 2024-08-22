// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI22CAROUSELVIEWCONTROLLER_H
#define _TTC8VIDEOSUI22CAROUSELVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8VideosUI22CarouselViewController : UIViewController {
    ? viewImpressioner;
    ? headerViewModel;
    ? collectionViewModel;
    ? $__lazy_storage_$_visibleCellViewModels;
    ? $__lazy_storage_$_carouselViewContainer;
    ? dataModelItems;
    ? lastViewWidth;
    ? centeredItemIndex;
    ? selfVisibilityMonitor;
    ? $__lazy_storage_$_cellVisibilityMonitor;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vui_willMoveToParentViewController:(id)arg0 ;


@end


#endif