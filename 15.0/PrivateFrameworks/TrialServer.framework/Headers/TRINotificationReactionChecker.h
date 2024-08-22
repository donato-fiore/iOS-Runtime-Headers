// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRINOTIFICATIONREACTIONCHECKER_H
#define TRINOTIFICATIONREACTIONCHECKER_H

@protocol TRINotificationReactionCheckerProtocol, TRIDateProviding;

#import <Foundation/Foundation.h>

#import "TRIRolloutDatabase.h"
#import "TRIExperimentDatabase.h"

@interface TRINotificationReactionChecker : NSObject <TRINotificationReactionCheckerProtocol>

 {
    id<TRIDateProviding> *_dateProvider;
    TRIRolloutDatabase *_rolloutDb;
    TRIExperimentDatabase *_experimentDb;
}




-(BOOL)_isExistingDeployment:(id)arg0 ;
-(BOOL)_isOutdatedDeploymentDate:(id)arg0 ;
-(id)initWithDateProvider:(id)arg0 rolloutDatabase:(id)arg1 experimentDatabase:(id)arg2 ;
-(struct ? )reactionForHotfixDeployment:(id)arg0 hotfixDeploymentDate:(id)arg1 ;
-(struct ? )reactionForRollbackExperimentId:(id)arg0 ;


@end


#endif