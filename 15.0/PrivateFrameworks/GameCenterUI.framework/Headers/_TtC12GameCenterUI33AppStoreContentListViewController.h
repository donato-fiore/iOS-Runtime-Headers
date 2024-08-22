// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI33APPSTORECONTENTLISTVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI33APPSTORECONTENTLISTVIEWCONTROLLER_H

@class TtC12GameCenterUI28BaseCollectionViewController;



@interface _TtC12GameCenterUI33AppStoreContentListViewController : TtC12GameCenterUI28BaseCollectionViewController {
    ? bootstrapPresenter;
    ? statePresenter;
    ? compositionalLayout;
    ? diffableDataSource;
    ? components;
    ? infiniteScrollObserver;
    ? navigationBarFocusGuide;
}




-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif