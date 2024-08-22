// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIROLLOUTTARGETER_H
#define TRIROLLOUTTARGETER_H

@protocol TRIRolloutTargeting, TRISystemCovariateProviding, TRIUserCovariateProviding;

#import <Foundation/Foundation.h>

#import "TRIRolloutDatabase.h"

@interface TRIRolloutTargeter : NSObject <TRIRolloutTargeting>

 {
    TRIRolloutDatabase *_db;
}


@property (readonly, nonatomic) NSObject<TRISystemCovariateProviding> *systemCovariateProvider; // ivar: _systemCovariateProvider
@property (readonly, nonatomic) NSObject<TRIUserCovariateProviding> *userCovariateProvider; // ivar: _userCovariateProvider


+(id)_targetingErrorWithDeployment:(id)arg0 errorType:(id)arg1 details:(id)arg2 ;
+(id)targetingErrorWithDeployment:(id)arg0 errorType:(id)arg1 ;
-(id)_activeRecordForRolloutId:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 systemCovariateProvider:(id)arg1 userCovariateProvider:(id)arg2 ;
-(struct ? )_targetRollout:(id)arg0 factorPackSetId:(*id)arg1 relatedRampDeployment:(*id)arg2 recurseOnRamp:(BOOL)arg3 error:(*id)arg4 ;
-(struct ? )targetRollout:(id)arg0 factorPackSetId:(*id)arg1 relatedRampDeployment:(*id)arg2 error:(*id)arg3 ;


@end


#endif