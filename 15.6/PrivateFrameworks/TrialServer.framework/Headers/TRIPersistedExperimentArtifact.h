// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPERSISTEDEXPERIMENTARTIFACT_H
#define TRIPERSISTEDEXPERIMENTARTIFACT_H

@class TRIPBMessage, TRIPBTimestamp, NSData, NSString, TRIPBUInt32Array, NSMutableArray;



@interface TRIPersistedExperimentArtifact : TRIPBMessage

@property (nonatomic) int cloudKitContainer;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSData *encodedExperimentDefinition;
@property (copy, nonatomic) NSString *encodedExperimentDefinitionSignature;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasCloudKitContainer;
@property (nonatomic) BOOL hasDeploymentDate;
@property (nonatomic) BOOL hasDeploymentEnvironment;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasEncodedExperimentDefinition;
@property (nonatomic) BOOL hasEncodedExperimentDefinitionSignature;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasInternalBuildOnly;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) BOOL hasPublicCertificate;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTeamId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL internalBuildOnly;
@property (retain, nonatomic) TRIPBUInt32Array *namespaceCompatibilityVersionsArray;
@property (readonly, nonatomic) NSUInteger namespaceCompatibilityVersionsArray_Count;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) NSUInteger namespacesArray_Count;
@property (nonatomic) int priority;
@property (nonatomic) int projectId;
@property (copy, nonatomic) NSData *publicCertificate;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *teamId;
@property (nonatomic) int type;


+(id)descriptor;


@end


#endif