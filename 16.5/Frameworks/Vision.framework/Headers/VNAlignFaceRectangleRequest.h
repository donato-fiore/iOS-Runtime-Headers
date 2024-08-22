// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNALIGNFACERECTANGLEREQUEST_H
#define VNALIGNFACERECTANGLEREQUEST_H

@class NSArray;


#import "VNRequest.h"

@interface VNAlignFaceRectangleRequest : VNRequest

@property (readonly, copy, nonatomic) NSArray *inputFaceObservations; // ivar: _inputFaceObservations
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithFaceObservations:(id)arg0 ;
-(id)initWithFaceObservations:(id)arg0 completionHandler:(id)arg1 ;
-(id)newDefaultRequestInstance;


@end


#endif