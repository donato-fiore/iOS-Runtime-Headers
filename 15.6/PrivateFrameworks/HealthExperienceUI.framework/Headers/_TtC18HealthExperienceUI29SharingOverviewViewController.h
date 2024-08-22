// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI29SHARINGOVERVIEWVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI29SHARINGOVERVIEWVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;
@protocol _TtP18HealthExperienceUI26TapToRadarButtonDisplaying_;



@interface _TtC18HealthExperienceUI29SharingOverviewViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController <_TtP18HealthExperienceUI26TapToRadarButtonDisplaying_>

 {
    ? healthExperienceStore;
    ? healthStore;
    ? syncObserver;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)ttrButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif