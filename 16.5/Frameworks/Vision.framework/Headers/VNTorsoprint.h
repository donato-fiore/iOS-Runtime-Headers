// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNTORSOPRINT_H
#define VNTORSOPRINT_H

@class NSData, NSString;
@protocol VNEntityIdentificationModelPrint;


#import "VNEspressoModelImageprint.h"
#import "VNRequestSpecifier.h"

@interface VNTorsoprint : VNEspressoModelImageprint <VNEntityIdentificationModelPrint>



@property (readonly) NSUInteger VNEntityIdentificationModelPrintByteLength;
@property (readonly) NSData *VNEntityIdentificationModelPrintData;
@property (readonly) NSUInteger VNEntityIdentificationModelPrintElementCount;
@property (readonly) NSUInteger VNEntityIdentificationModelPrintElementType;
@property (readonly, copy) VNRequestSpecifier *VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)confidenceTypeForOriginatingRequestSpecifier:(id)arg0 ;
+(NSUInteger)currentSerializationVersion;
+(NSUInteger)serializationMagicNumber;
+(id)codingTypesToCodingKeys;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)emptyTorsoprintDataForRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToVNEntityIdentificationModelPrint:(id)arg0 ;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 confidence:(float)arg4 originatingRequestSpecifier:(id)arg5 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 confidence:(float)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif