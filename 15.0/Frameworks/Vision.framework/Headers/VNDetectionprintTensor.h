// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTIONPRINTTENSOR_H
#define VNDETECTIONPRINTTENSOR_H



#import "VNEspressoModelImageprint.h"

@interface VNDetectionprintTensor : VNEspressoModelImageprint



+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg0 ;
+(NSUInteger)confidenceTypeForOriginatingRequestSpecifier:(id)arg0 ;
+(NSUInteger)currentSerializationVersion;
+(NSUInteger)serializationMagicNumber;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;


@end


#endif