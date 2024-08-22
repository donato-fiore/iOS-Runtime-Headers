// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI35SHAREDPROFILEOVERVIEWVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI35SHAREDPROFILEOVERVIEWVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;
@protocol _TtP18HealthExperienceUI26TapToRadarButtonDisplaying_, _TtP18HealthExperienceUI35VibrantNavigationBarItemsPresenting_;



@interface _TtC18HealthExperienceUI35SharedProfileOverviewViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController <_TtP18HealthExperienceUI26TapToRadarButtonDisplaying_, _TtP18HealthExperienceUI35VibrantNavigationBarItemsPresenting_>

 {
    ? providedHealthStore;
    ? providedHealthExperienceStore;
    ? providedPresentation;
    ? sharedProfileOverviewDataSource;
    ? navigationBarTitleView;
    ? gradientView;
    ? fadeView;
    ? gradientSubscriber;
    ? profileGradientsProvider;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)backButtonTapped:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)ttrButtonTapped;
-(void)viewDidLoad;


@end


#endif