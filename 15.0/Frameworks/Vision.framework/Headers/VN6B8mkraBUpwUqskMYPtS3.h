// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VN6B8MKRABUPWUQSKMYPTS3_H
#define VN6B8MKRABUPWUQSKMYPTS3_H



#import "VNEspressoModelImageprint.h"

@interface VN6B8mkraBUpwUqskMYPtS3 : VNEspressoModelImageprint

@property (readonly) NSUInteger imageSignatureHashType; // ivar: _imageSignatureHashType


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
-(id)encodeHashDescriptorWithBase64EncodingAndReturnError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 imageSignatureHashType:(NSUInteger)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithState:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif