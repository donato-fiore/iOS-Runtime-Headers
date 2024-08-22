// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIROLLOUTTARGETINGOPERATION_H
#define TRIROLLOUTTARGETINGOPERATION_H

@protocol TRIRolloutTargeting;

#import <Foundation/Foundation.h>

#import "TRIRolloutDatabase.h"

@interface TRIRolloutTargetingOperation : NSObject

@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDatabase; // ivar: _rolloutDatabase
@property (readonly, nonatomic) NSObject<TRIRolloutTargeting> *targeter; // ivar: _targeter


-(BOOL)_targetRolloutDeployment:(id)arg0 appendingTelemetryToSupport:(id)arg1 reportTelemetryToServer:(*BOOL)arg2 factorPackSetIdToActivate:(*id)arg3 shouldDisenroll:(*BOOL)arg4 error:(*id)arg5 ;
-(BOOL)targetRolloutDeployment:(id)arg0 appendingTelemetryToSupport:(id)arg1 reportTelemetryToServer:(*BOOL)arg2 factorPackSetIdToActivate:(*id)arg3 shouldDisenroll:(*BOOL)arg4 error:(*id)arg5 ;
-(id)initWithRolloutTargeter:(id)arg0 rolloutDatabase:(id)arg1 ;


@end


#endif