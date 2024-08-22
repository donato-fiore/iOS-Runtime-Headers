// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI55PROFILECHARACTERISTICSWITHAUTOAVATARIMAGEVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI55PROFILECHARACTERISTICSWITHAUTOAVATARIMAGEVIEWCONTROLLER_H



#import "ProfileCharacteristicsViewController.h"

@interface _TtC18HealthExperienceUI55ProfileCharacteristicsWithAutoAvatarImageViewController : ProfileCharacteristicsViewController {
    ? healthExperienceStore;
    ? healthStore;
    ? dataSource;
    ? imagePublisherCancellable;
    ? screenScale;
    ? rightToLeft;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)didUpdateName;
-(void)setUpNavigationBar;


@end


#endif