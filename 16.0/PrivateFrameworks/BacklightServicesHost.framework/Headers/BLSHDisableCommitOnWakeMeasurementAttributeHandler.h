// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHDISABLECOMMITONWAKEMEASUREMENTATTRIBUTEHANDLER_H
#define BLSHDISABLECOMMITONWAKEMEASUREMENTATTRIBUTEHANDLER_H

@protocol BLSHDisableCommitOnWakeMeasurementProvider;


#import "BLSHLocalCountingAssertionAttributeHandler.h"

@interface BLSHDisableCommitOnWakeMeasurementAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHDisableCommitOnWakeMeasurementProvider> *_provider;
}




+(Class)attributeBaseClass;
+(id)attributeClasses;
+(id)registerHandlerForService:(id)arg0 provider:(id)arg1 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;


@end


#endif