// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI16PROFILEBUDDYFLOW_H
#define _TTC18HEALTHEXPERIENCEUI16PROFILEBUDDYFLOW_H

@protocol ProfileBuddyViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI16ProfileBuddyFlow : NSObject <ProfileBuddyViewControllerDelegate>

 {
    ? buddyProfileCreator;
    ? buddyProfileCharacteristicsSetter;
    ? profileType;
    ? presentingViewController;
    ? cancellable;
}




-(id)init;
-(void)profileBuddyViewControllerDidTapContinue:(id)arg0 ;


@end


#endif