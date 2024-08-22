// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSCENEPRINT_H
#define VNSCENEPRINT_H

@class NSDictionary;


#import "VNEspressoModelImageprint.h"

@interface VNSceneprint : VNEspressoModelImageprint

@property (readonly, copy) NSDictionary *labelsAndConfidence; // ivar: _labelsAndConfidence


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)confidenceTypeForOriginatingRequestSpecifier:(id)arg0 ;
+(NSUInteger)currentSerializationVersion;
+(NSUInteger)serializationMagicNumber;
+(id)codingTypesToCodingKeys;
+(id)currentVersion;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(unsigned int)currentCodingVersion;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 labelsAndConfidence:(id)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif