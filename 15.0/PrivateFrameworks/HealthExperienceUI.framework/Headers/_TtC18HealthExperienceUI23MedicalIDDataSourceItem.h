// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI23MEDICALIDDATASOURCEITEM_H
#define _TTC18HEALTHEXPERIENCEUI23MEDICALIDDATASOURCEITEM_H


#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI23MedicalIDDataSourceItem : NSObject {
    ? uniqueIdentifier;
    ? text;
    ? detailText;
    ? showDisclosureIndicator;
    ? reuseIdentifier;
    ? medicalIDViewController;
    ? healthStore;
    ? medicalIDCache;
    ? presentingViewController;
    ? currentMedicalIDDataResultCancellable;
    ? currentMedicalIDDataResultPresented;
}




-(id)init;
-(void)medicalIDUpdatedWithNotification:(id)arg0 ;


@end


#endif