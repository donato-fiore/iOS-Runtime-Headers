// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI40MULTIGROUPHORIZONTALCOLLECTIONCONTROLLER_H
#define _TTC8VIDEOSUI40MULTIGROUPHORIZONTALCOLLECTIONCONTROLLER_H



#import "VUIBaseViewController.h"

@interface _TtC8VideosUI40MultiGroupHorizontalCollectionController : VUIBaseViewController {
    ? viewImpressioner;
    ? cachedCellMetrics;
    ? $__lazy_storage_$_cachedHeaderViews;
    ? internalCollectionViewModel;
    ? $__lazy_storage_$_shelfViewLayout;
    ? $__lazy_storage_$_groupCollectionContainerView;
    ? dataSource;
    ? lastViewWidth;
    ? lastFocusedIndexPath;
    ? supplementaryKindToReuseIdentifierMap;
    ? datasourceLoaded;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vui_loadView;
-(void)vui_viewDidLoad;


@end


#endif