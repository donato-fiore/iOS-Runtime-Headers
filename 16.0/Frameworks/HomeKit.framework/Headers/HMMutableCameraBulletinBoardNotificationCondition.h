// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLECAMERABULLETINBOARDNOTIFICATIONCONDITION_H
#define HMMUTABLECAMERABULLETINBOARDNOTIFICATIONCONDITION_H

@class NSPredicate;


#import "HMCameraBulletinBoardNotificationCondition.h"
#import "HMCameraSignificantEventPersonFamiliarityNotificationCondition.h"
#import "HMCameraSignificantEventReasonNotificationCondition.h"

@interface HMMutableCameraBulletinBoardNotificationCondition : HMCameraBulletinBoardNotificationCondition

@property (copy) NSPredicate *dateComponentsPredicate;
@property (copy) NSPredicate *presencePredicate;
@property (copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition;
@property (copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif