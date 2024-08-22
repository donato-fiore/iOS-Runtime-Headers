// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI27HEALTHDETAILSVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI27HEALTHDETAILSVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI27HealthDetailsViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? healthStore;
    ? isInEditMode;
    ? shouldSaveItems;
    ? $__lazy_storage_$_healthDetailsDataSource;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)resetCharacteristics;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif