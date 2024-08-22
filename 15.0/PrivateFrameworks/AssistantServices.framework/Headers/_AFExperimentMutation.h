// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFEXPERIMENTMUTATION_H
#define _AFEXPERIMENTMUTATION_H

@class NSString, NSDictionary;
@protocol AFExperimentMutating;

#import <Foundation/Foundation.h>

#import "AFExperiment.h"

@interface _AFExperimentMutation : NSObject <AFExperimentMutating>

 {
    AFExperiment *_baseModel;
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


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setConfigurationIdentifier:(id)arg0 ;
-(void)setConfigurationVersion:(id)arg0 ;
-(void)setDeploymentGroupIdentifier:(id)arg0 ;
-(void)setDeploymentGroupProperties:(id)arg0 ;
-(void)setDeploymentReason:(NSInteger)arg0 ;


@end


#endif