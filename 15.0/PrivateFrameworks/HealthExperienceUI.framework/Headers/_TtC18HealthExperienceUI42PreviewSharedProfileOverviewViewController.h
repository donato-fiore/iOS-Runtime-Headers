// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI42PREVIEWSHAREDPROFILEOVERVIEWVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI42PREVIEWSHAREDPROFILEOVERVIEWVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;
@protocol _TtP18HealthExperienceUI26TapToRadarButtonDisplaying_;



@interface _TtC18HealthExperienceUI42PreviewSharedProfileOverviewViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController <_TtP18HealthExperienceUI26TapToRadarButtonDisplaying_>

 {
    ? providedPresentation;
    ? gradientView;
    ? fadeView;
    ? gradientSubscriber;
    ? profileGradientsProvider;
    ? $__lazy_storage_$_previewSummariesLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)ttrButtonTapped;
-(void)viewDidLoad;


@end


#endif