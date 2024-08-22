// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCLASSIFYIMAGEREQUEST_H
#define VNCLASSIFYIMAGEREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"
#import "VNClassificationCustomHierarchy.h"

@interface VNClassifyImageRequest : VNImageBasedRequest

@property (readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) NSUInteger imageCropAndScaleOption;
@property (nonatomic) NSUInteger maximumHierarchicalObservations;
@property (nonatomic) NSUInteger maximumLeafObservations;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownClassificationsForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)defineCustomHierarchy:(id)arg0 error:(*id)arg1 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)defineCustomHierarchyWithRelationships:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)resolvedRevisionDidChangeFromRevision:(NSUInteger)arg0 ;


@end


#endif