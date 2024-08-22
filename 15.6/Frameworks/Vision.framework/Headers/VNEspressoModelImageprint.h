// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNESPRESSOMODELIMAGEPRINT_H
#define VNESPRESSOMODELIMAGEPRINT_H

@class NSData, NSDictionary, NSString;
@protocol VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding>

 {
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSUInteger _elementType;
}


@property (readonly, nonatomic) NSUInteger confidenceScoreType; // ivar: _confidenceScoreType
@property (readonly) NSData *descriptorData; // ivar: _descriptorData
@property (readonly) NSUInteger elementCount; // ivar: _elementCount
@property (readonly) NSUInteger elementType;
@property (readonly, copy) NSDictionary *labelsAndConfidence;
@property (readonly) NSUInteger lengthInBytes; // ivar: _lengthInBytes
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (readonly, nonatomic) NSUInteger serializedLength;
@property (readonly) NSString *version; // ivar: _version


+(BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)confidenceTypeForOriginatingRequestSpecifier:(id)arg0 ;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)originatingRequestSpecifierForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)hasEquivalentDescriptorToImageprint:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_VNEspressoModelImageprintSerializedLength;
-(NSUInteger)hash;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_initWithClassKeyMappedCoder:(id)arg0 ;
-(id)computeDistance:(id)arg0 withDistanceFunction:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 forCodingVersion:(unsigned int)arg1 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 labelsAndConfidence:(id)arg4 requestRevision:(NSUInteger)arg5 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 originatingRequestSpecifier:(id)arg4 ;
-(id)initWithData:(*void)arg0 elementCount:(NSUInteger)arg1 elementType:(NSUInteger)arg2 lengthInBytes:(NSUInteger)arg3 requestRevision:(NSUInteger)arg4 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithState:(id)arg0 error:(*id)arg1 ;
-(id)serializeStateAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif