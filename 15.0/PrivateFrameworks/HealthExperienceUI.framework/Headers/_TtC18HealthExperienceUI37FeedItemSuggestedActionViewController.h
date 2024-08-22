// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI37FEEDITEMSUGGESTEDACTIONVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI37FEEDITEMSUGGESTEDACTIONVIEWCONTROLLER_H

@class UICollectionViewController;



@interface _TtC18HealthExperienceUI37FeedItemSuggestedActionViewController : UICollectionViewController {
    ? dataSourceAdaptor;
    ? suggestedAction;
    ? suggestedActionDelegate;
    ? $__lazy_storage_$_dataSource;
    ? $__lazy_storage_$_layout;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif