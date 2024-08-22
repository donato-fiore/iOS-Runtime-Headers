// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTORSOPRINT_H
#define VNTORSOPRINT_H



#import "VNEspressoModelImageprint.h"

@interface VNTorsoprint : VNEspressoModelImageprint

@property (readonly, nonatomic) float confidence; // ivar: _confidence


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)currentSerializationVersion;
+(NSUInteger)serializationMagicNumber;
+(id)codingTypesToCodingKeys;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)emptyTorsoprintDataForRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 confidence:(float)arg4 originatingRequestSpecifier:(id)arg5 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 confidence:(float)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif