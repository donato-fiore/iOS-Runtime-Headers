// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI31PROFILECATEGORIESVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI31PROFILECATEGORIESVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI31ProfileCategoriesViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? providedHealthStore;
    ? providedHealthExperienceStore;
    ? categoriesDataSource;
    ? navigationBarTitleView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif