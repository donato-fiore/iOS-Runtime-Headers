// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFEATUREFLAGREMOTE_H
#define AMSFEATUREFLAGREMOTE_H



#import "AMSFeatureFlag.h"

@interface AMSFeatureFlagRemote : AMSFeatureFlag



+(id)fetchRemoteFlagState;
-(BOOL)isRemote;
-(NSInteger)_developmentPhase;
-(id)_preferencesKey;
-(void)_activateFlag;
-(void)_updateDevelopmentPhase;
-(void)_updateInternalEnabledState;


@end


#endif