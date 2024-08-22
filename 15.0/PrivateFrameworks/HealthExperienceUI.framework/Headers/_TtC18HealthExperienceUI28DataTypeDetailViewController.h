// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI28DATATYPEDETAILVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI28DATATYPEDETAILVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI28DataTypeDetailViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? providedHealthToolbox;
    ? providedHealthStore;
    ? chartContext;
    ? chartImageProvider;
    ? chartOverlayVersionProvider;
    ? cancellables;
    ? restorationUserActivity;
    ? mode;
    ? $__lazy_storage_$_personalizedFeedTrainer;
    ? didSubmitAnalyticsForRoomEntry;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif