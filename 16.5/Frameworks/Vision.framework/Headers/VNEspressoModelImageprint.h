// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNESPRESSOMODELIMAGEPRINT_H
#define VNESPRESSOMODELIMAGEPRINT_H

@class NSData, NSString;
@protocol VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding>

 {
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSUInteger _elementType;
    NSUInteger _serializationOptions;
}


@property (readonly, nonatomic) NSUInteger confidenceScoreType; // ivar: _confidenceScoreType
@property (readonly) NSData *descriptorData; // ivar: _descriptorData
@property (readonly) NSUInteger elementCount; // ivar: _elementCount
@property (readonly) NSUInteger elementType;
@property (readonly) NSUInteger lengthInBytes;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (readonly, nonatomic) NSUInteger serializedLength;
@property (readonly) NSString *version; // ivar: _version


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)validateDescriptorData:(id)arg0 elementType:(NSUInteger)arg1 elementCount:(NSUInteger)arg2 error:(*id)arg3 ;
+(NSUInteger)confidenceTypeForOriginatingRequestSpecifier:(id)arg0 ;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)originatingRequestSpecifierForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)printWithDescriptorData:(id)arg0 elementType:(NSUInteger)arg1 elementCount:(NSUInteger)arg2 originatingRequestSpecifier:(id)arg3 error:(*id)arg4 ;
+(id)printWithFloat16PrecisionFloat32Data:(id)arg0 originatingRequestSpecifier:(id)arg1 error:(*id)arg2 ;
+(id)printWithFloat16PrecisionFloat32Values:(*float)arg0 elementCount:(NSUInteger)arg1 originatingRequestSpecifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)hasEquivalentDescriptorToImageprint:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPrint:(id)arg0 compatibleWithOtherPrint:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_VNEspressoModelImageprintSerializedLength;
-(NSUInteger)hash;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_initWithClassKeyMappedCoder:(id)arg0 ;
-(id)computeDistance:(id)arg0 withDistanceFunction:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 forCodingVersion:(unsigned int)arg1 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 labelsAndConfidence:(id)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 requestRevision:(NSUInteger)arg4 ;
-(id)initWithDescriptorData:(id)arg0 elementType:(NSUInteger)arg1 elementCount:(NSUInteger)arg2 originatingRequestSpecifier:(id)arg3 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithState:(id)arg0 error:(*id)arg1 ;
-(id)labelsAndConfidence;
-(id)serializeStateAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif