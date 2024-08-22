// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZEANIMALSREQUEST_H
#define VNRECOGNIZEANIMALSREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNRecognizeAnimalsRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(BOOL)_shouldProcessRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)knownAnimalIdentifiersForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;


@end


#endif