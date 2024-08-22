// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI29HEALTHCHECKLISTVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI29HEALTHCHECKLISTVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI29HealthChecklistViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? $__lazy_storage_$_mainStore;
    ? $__lazy_storage_$_dataSources;
    ? analyticsSource;
    ? isDoneButtonVisible;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)dismissProfile:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif