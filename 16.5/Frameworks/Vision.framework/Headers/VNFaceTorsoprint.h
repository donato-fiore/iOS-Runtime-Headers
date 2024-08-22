// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACETORSOPRINT_H
#define VNFACETORSOPRINT_H



#import "VNEspressoModelImageprint.h"
#import "VNFaceprint.h"
#import "VNTorsoprint.h"

@interface VNFaceTorsoprint : VNEspressoModelImageprint

@property (readonly, nonatomic) VNFaceprint *faceprint; // ivar: _faceprint
@property (nonatomic) NSUInteger personId; // ivar: _personId
@property (readonly, nonatomic) VNTorsoprint *torsoprint; // ivar: _torsoprint
@property (readonly, nonatomic, getter=isValidFaceprint) BOOL validFaceprint;
@property (readonly, nonatomic, getter=isValidTorsoprint) BOOL validTorsoprint;


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)currentSerializationVersion;
+(id)codingTypesToCodingKeys;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)computeDistance:(id)arg0 withDistanceFunction:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 faceprintConfidence:(float)arg4 torsoprintConfidence:(float)arg5 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 faceprintConfidence:(float)arg4 torsoprintConfidence:(float)arg5 originatingRequestSpecifier:(id)arg6 ;
-(id)initWithFaceprint:(id)arg0 torsoPrint:(id)arg1 originatingRequestSpecifier:(id)arg2 ;
-(id)initWithFaceprint:(id)arg0 torsoPrint:(id)arg1 requestRevision:(NSUInteger)arg2 ;
-(id)initWithFaceprint:(id)arg0 torsoprint:(id)arg1 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)serializeStateAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif