// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI47SUMMARYSHARINGRELATIONSHIPDETAILSVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI47SUMMARYSHARINGRELATIONSHIPDETAILSVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI47SummarySharingRelationshipDetailsViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? navigationBarTitleView;
    ? healthExperienceStore;
    ? selectedDataTypesContext;
    ? relationshipDetailsDataSource;
    ? sharingEntryStore;
    ? sharingProfileInformation;
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