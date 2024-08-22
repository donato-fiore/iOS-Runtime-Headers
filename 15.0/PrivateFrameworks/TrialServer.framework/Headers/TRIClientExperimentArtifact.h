// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRICLIENTEXPERIMENTARTIFACT_H
#define TRICLIENTEXPERIMENTARTIFACT_H

@class NSDate, NSData, NSString, TRIClientExperiment, TRIExperimentDeployment, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIClientExperimentArtifact : NSObject <NSSecureCoding>



@property (nonatomic) int cloudKitContainer; // ivar: _cloudKitContainer
@property (retain, nonatomic) NSDate *deploymentDate; // ivar: _deploymentDate
@property (nonatomic) int deploymentEnvironment; // ivar: _deploymentEnvironment
@property (nonatomic) int deploymentId; // ivar: _deploymentId
@property (retain, nonatomic) NSData *encodedExperimentDefinition; // ivar: _encodedExperimentDefinition
@property (retain, nonatomic) NSString *encodedExperimentDefinitionSignature; // ivar: _encodedExperimentDefinitionSignature
@property (readonly, nonatomic) TRIClientExperiment *experiment;
@property (readonly) TRIExperimentDeployment *experimentDeployment;
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) int experimentPriority; // ivar: _experimentPriority
@property (nonatomic) int experimentState; // ivar: _experimentState
@property (nonatomic) int experimentType; // ivar: _experimentType
@property (readonly) BOOL hasDeploymentId;
@property (nonatomic) BOOL internalBuildOnly; // ivar: _internalBuildOnly
@property (retain, nonatomic) NSArray *namespaceCompatibilityVersions; // ivar: _namespaceCompatibilityVersions
@property (retain, nonatomic) NSArray *namespaces; // ivar: _namespaces
@property (retain, nonatomic) NSData *publicCertificate; // ivar: _publicCertificate
@property (retain, nonatomic) NSString *teamId; // ivar: _teamId


+(BOOL)supportsSecureCoding;
+(id)_convertNamespaceIdsToNames:(id)arg0 ;
+(id)artifactFromCKRecordResult:(id)arg0 withNamespaceDescriptorProvider:(id)arg1 container:(int)arg2 teamId:(id)arg3 requireDeploymentId:(BOOL)arg4 completion:(id)arg5 ;
+(id)artifactWithExperiment:(id)arg0 ;
+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasNamespacesAvailableForExperimentWithDatabase:(id)arg0 ;
-(BOOL)isCompatibleWithNamespaceDescriptorProvider:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)saveWithDatabase:(id)arg0 paths:(id)arg1 ;
-(NSUInteger)hash;
-(id)asPersistedArtifact;
-(id)data;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperiment:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif