// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNANIMALPRINT_H
#define VNANIMALPRINT_H

@class NSData, NSString;
@protocol VNEntityIdentificationModelPrint, VNSerializingInternal;


#import "VNEspressoModelImageprint.h"
#import "VNRequestSpecifier.h"

@interface VNAnimalprint : VNEspressoModelImageprint <VNEntityIdentificationModelPrint, VNSerializingInternal>



@property (readonly) NSUInteger VNEntityIdentificationModelPrintByteLength;
@property (readonly) NSData *VNEntityIdentificationModelPrintData;
@property (readonly) NSUInteger VNEntityIdentificationModelPrintElementCount;
@property (readonly) NSUInteger VNEntityIdentificationModelPrintElementType;
@property (readonly, copy) VNRequestSpecifier *VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger serializedLength;
@property (readonly) Class superclass;


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)confidenceTypeForRevision:(NSUInteger)arg0 ;
+(NSUInteger)currentSerializationVersion;
+(NSUInteger)serializationMagicNumber;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToVNEntityIdentificationModelPrint:(id)arg0 ;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 confidence:(float)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithState:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif