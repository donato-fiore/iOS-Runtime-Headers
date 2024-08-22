// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VN6AC6CYL5O5OK19HBOYMBR_H
#define VN6AC6CYL5O5OK19HBOYMBR_H



#import "VNEspressoModelImageprint.h"

@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint

@property (readonly) NSUInteger imageSignatureprintType; // ivar: _imageSignatureprintType


+(BOOL)_signaturePrintTypeSupported:(NSUInteger)arg0 ;
+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)currentSerializationVersion;
+(NSUInteger)serializationMagicNumber;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 imageSignatureprintType:(NSUInteger)arg4 originatingRequestSpecifier:(id)arg5 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 imageSignatureprintType:(NSUInteger)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithState:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif