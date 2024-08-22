// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGTRIALCLIENTWRAPPER_H
#define SGTRIALCLIENTWRAPPER_H

@class TRIClient, NSString, TRIRolloutIdentifiers;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SGTrialClientWrapper : NSObject {
    TRIClient *_triClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_namespaceName;
    NSString *_experimentId;
    int _deploymentId;
    NSString *_treatmentId;
    TRIRolloutIdentifiers *_rolloutIdentifiers;
}




-(BOOL)_unarchiveFrom:(id)arg0 to:(id)arg1 ;
-(BOOL)_uncompressModelAtPath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)refreshEnrollmentInformationForNamespace:(id)arg0 ;
-(BOOL)refreshRolloutIdentifiersForNamespace:(id)arg0 ;
-(id)_modelDirectoryPathCreateIfNeeded:(BOOL)arg0 ;
-(id)_modelNameForCurrentEnrollment;
-(id)_modelNameForExperimentId:(id)arg0 treatmentId:(id)arg1 deploymentId:(id)arg2 ;
-(id)_modelPathForExperimentId:(id)arg0 treatmentId:(id)arg1 deploymentId:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)baseModelName;
-(id)deploymentId;
-(id)experimentId;
-(id)initWithClientIdentifier:(int)arg0 ;
-(id)modelPath;
-(id)modelPathForCurrentEnrollment;
-(id)modelPathForExperimentId:(id)arg0 treatmentId:(id)arg1 deploymentId:(id)arg2 ;
-(id)modelPathForTriClient:(id)arg0 andNamespace:(id)arg1 ;
-(id)rolloutIdentifiers;
-(id)treatmentId;
-(void)cleanExperimentModelsFromTrialModelsFolder;
-(void)uncompressModelAndUpdateFactors:(id)arg0 destinationPath:(id)arg1 ;
-(void)updateFactors;


@end


#endif