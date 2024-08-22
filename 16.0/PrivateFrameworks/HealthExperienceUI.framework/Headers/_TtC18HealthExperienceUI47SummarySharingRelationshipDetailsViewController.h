// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI47SUMMARYSHARINGRELATIONSHIPDETAILSVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI47SUMMARYSHARINGRELATIONSHIPDETAILSVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI47SummarySharingRelationshipDetailsViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? navigationBarTitleView;
    ? healthStore;
    ? healthExperienceStore;
    ? selectedDataTypesContext;
    ? relationshipDetailsDataSource;
    ? sharingEntryStore;
    ? sharingProfileInformation;
    ? flow;
    ? pausedStateChanged;
    ? $__lazy_storage_$_doneButtonItem;
    ? $__lazy_storage_$_activitySpinnerItem;
    ? updateAuthorizationsCancellable;
    ? cancellables;
    ? currentAuthorizations;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)didTapCancel;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif