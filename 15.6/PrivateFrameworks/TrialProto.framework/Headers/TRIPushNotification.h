// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPUSHNOTIFICATION_H
#define TRIPUSHNOTIFICATION_H



#import "TRIPBMessage.h"
#import "TRIExperimentRollbackPushNotification.h"
#import "TRIRolloutDeploymentPushNotification.h"

@interface TRIPushNotification : TRIPBMessage

@property (retain, nonatomic) TRIExperimentRollbackPushNotification *experimentNotification;
@property (readonly, nonatomic) int notificationOneOfCase;
@property (retain, nonatomic) TRIRolloutDeploymentPushNotification *rolloutNotification;


+(id)descriptor;


@end


#endif