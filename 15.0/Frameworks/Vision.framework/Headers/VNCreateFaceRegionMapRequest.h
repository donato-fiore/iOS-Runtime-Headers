// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCREATEFACEREGIONMAPREQUEST_H
#define VNCREATEFACEREGIONMAPREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAccepting;


#import "VNImageBasedRequest.h"

@interface VNCreateFaceRegionMapRequest : VNImageBasedRequest <VNFaceObservationAccepting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;


+(struct ? *)dependentRequestCompatibility;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;
-(void)_determineFacesToProcessFrom:(id)arg0 outputFacesThatNeedNoProcessing:(id)arg1 outputFacesThatNeedProcessing:(id)arg2 outputFacesThatNeed2DLandmarks:(id)arg3 ;


@end


#endif