// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI38SUMMARYSHARINGPROFILEGRADIENTSPROVIDER_H
#define _TTC18HEALTHEXPERIENCEUI38SUMMARYSHARINGPROFILEGRADIENTSPROVIDER_H

@class TtC18HealthExperienceUI24ProfileGradientsProvider;
@protocol NSFetchedResultsControllerDelegate;



@interface _TtC18HealthExperienceUI38SummarySharingProfileGradientsProvider : TtC18HealthExperienceUI24ProfileGradientsProvider <NSFetchedResultsControllerDelegate>

 {
    ? fetchedResultsController;
}




-(id)init;
-(void)controllerDidChangeContent:(id)arg0 ;


@end


#endif