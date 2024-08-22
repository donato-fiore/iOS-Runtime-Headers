// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFEXPERIMENTMUTATION_H
#define _AFEXPERIMENTMUTATION_H

@class NSString, NSDictionary;
@protocol AFExperimentMutating;

#import <Foundation/Foundation.h>

#import "AFExperiment.h"

@interface _AFExperimentMutation : NSObject <AFExperimentMutating>

 {
    AFExperiment *_base;
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    NSInteger _deploymentReason;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getDeploymentReason;
-(id)getConfigurationIdentifier;
-(id)getConfigurationVersion;
-(id)getDeploymentGroupIdentifier;
-(id)getDeploymentGroupProperties;
-(id)initWithBase:(id)arg0 ;
-(void)setConfigurationIdentifier:(id)arg0 ;
-(void)setConfigurationVersion:(id)arg0 ;
-(void)setDeploymentGroupIdentifier:(id)arg0 ;
-(void)setDeploymentGroupProperties:(id)arg0 ;
-(void)setDeploymentReason:(NSInteger)arg0 ;


@end


#endif