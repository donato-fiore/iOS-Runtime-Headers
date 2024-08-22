// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFEATUREPRINTOBSERVATION_H
#define VNFEATUREPRINTOBSERVATION_H

@class NSData;


#import "VNObservation.h"

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) NSData *data;
@property (readonly) NSUInteger elementCount;
@property (readonly) NSUInteger elementType;


+(BOOL)supportsSecureCoding;
-(BOOL)computeDistance:(*float)arg0 toFeaturePrintObservation:(id)arg1 error:(*id)arg2 ;
-(float)computeDistanceToFeaturePrintObservation:(id)arg0 error:(*id)arg1 ;


@end


#endif