// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI29PROFILEOVERVIEWVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI29PROFILEOVERVIEWVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;
@protocol _TtP18HealthExperienceUI29CustomNavigationBarPresenting_;



@interface _TtC18HealthExperienceUI29ProfileOverviewViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController <_TtP18HealthExperienceUI29CustomNavigationBarPresenting_>

 {
    ? providedHealthStore;
    ? providedHealthExperienceStore;
    ? syncHandler;
    ? profileAllDataDataSource;
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
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif