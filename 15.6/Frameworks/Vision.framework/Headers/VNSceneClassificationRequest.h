// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSCENECLASSIFICATIONREQUEST_H
#define VNSCENECLASSIFICATIONREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"
#import "VNClassificationCustomHierarchy.h"
#import "VNSceneObservation.h"

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumHierarchicalObservations;
@property (nonatomic) NSUInteger maximumLeafObservations;
@property (readonly, copy) NSArray *results;
@property (readonly, retain, nonatomic) VNSceneObservation *sceneObservation;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
+(id)_imageAnalyzerMultiDetectorLoadedInSession:(id)arg0 forRevision:(NSUInteger)arg1 processingDevice:(id)arg2 requestBackingStore:(NSUInteger)arg3 appliedDetectorOptions:(*id)arg4 error:(*id)arg5 ;
+(id)_knownVNImageAnalyzerMultiDetectorSceneLabelsForRevision:(NSUInteger)arg0 requestBackingStore:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownSceneClassifications;
+(id)knownSceneClassificationsForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
+(struct ? *)dependentRequestCompatibility;
+(struct ? *)revisionAvailability;
-(BOOL)defineCustomHierarchy:(id)arg0 error:(*id)arg1 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)_applicableDetectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;
-(id)_errorForUnimplementedSelector:(SEL)arg0 forRevision:(NSUInteger)arg1 ;
-(id)defineCustomHierarchyWithRelationships:(id)arg0 error:(*id)arg1 ;
-(id)initWithSceneObservation:(id)arg0 ;
-(id)initWithSceneObservation:(id)arg0 completionHandler:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)resolvedRevisionDidChangeFromRevision:(NSUInteger)arg0 ;


@end


#endif