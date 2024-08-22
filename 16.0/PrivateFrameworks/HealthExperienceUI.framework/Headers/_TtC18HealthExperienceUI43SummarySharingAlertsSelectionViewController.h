// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI43SUMMARYSHARINGALERTSSELECTIONVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI43SUMMARYSHARINGALERTSSELECTIONVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI43SummarySharingAlertsSelectionViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? activeAlertsDataSource;
    ? delegate;
    ? selectedDataTypesContext;
    ? cancellables;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)done;
-(void)viewDidLoad;


@end


#endif