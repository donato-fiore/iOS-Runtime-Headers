// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI42COMPOUNDDATASOURCECOLLECTIONVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI42COMPOUNDDATASOURCECOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController;



@interface _TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController : UICollectionViewController {
    ? dataSourceProvider;
    ? $__lazy_storage_$_dataSource;
    ? dataSourceAdaptor;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif