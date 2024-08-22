// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI19STACKVIEWCONTROLLER_H
#define _TTC8VIDEOSUI19STACKVIEWCONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI19StackViewController : TtC8VideosUI17VUIViewController {
    ? peekingEnabled;
    ? collectionImpressioner;
    ? stackType;
    ? $__lazy_storage_$_collectionView;
    ? supplementaryHeaderTypeToKindMap;
    ? supplementaryFooterTypeToKindMap;
    ? supplementaryKindToReuseIdentifierMap;
    ? $__lazy_storage_$_dataSource;
    ? templateViewModel;
    ? collectionViewModel;
    ? $__lazy_storage_$_prototypeCells;
    ? $__lazy_storage_$_supplementaryCells;
    ? sectionViewModels;
    ? $__lazy_storage_$_hostingCellViewControllers;
    ? _showcasePercentage;
    ? _showcaseHeight;
    ? verticalPaginationMonitor;
    ? verticalPaginationMonitorSubscriber;
    ? paginationCollectionTypes;
    ? contextMenuInteractor;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;


@end


#endif