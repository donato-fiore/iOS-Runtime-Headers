// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMPIMAGEDESCRIPTOR_H
#define VNMPIMAGEDESCRIPTOR_H

@class NSString, NSData;
@protocol NSSecureCoding, VNSerializingInternal;

#import <Foundation/Foundation.h>


@interface VNMPImageDescriptor : NSObject <NSSecureCoding, VNSerializingInternal>



@property (readonly) *void colorGaborDescriptor; // ivar: _colorGaborDescriptor
@property (readonly) NSInteger descriptorId; // ivar: _internalNonSerializedDescriptorId
@property (readonly) NSInteger exifTimestamp; // ivar: _exifTimestamp
@property (readonly) NSString *externalImageId; // ivar: _externalImageId
@property (readonly) NSString *imageFilePath; // ivar: _imageFilePath
@property (readonly) *void imageRegistrationDescriptor; // ivar: _imageRegistrationDescriptor
@property float nextLeafDescriptorDistance; // ivar: _nextLeafDescriptorDistance
@property NSInteger nextLeafId; // ivar: _nextLeafId
@property NSInteger nextLeafTimestampDistance; // ivar: _nextLeafTimestampDistance
@property float nextLeafTotalDistance; // ivar: _nextLeafTotalDistance
@property float previousLeafDescriptorDistance; // ivar: _previousLeafDescriptorDistance
@property NSInteger previousLeafId; // ivar: _previousLeafId
@property NSInteger previousLeafTimestampDistance; // ivar: _previousLeafTimestampDistance
@property float previousLeafTotalDistance; // ivar: _previousLeafTotalDistance
@property (readonly) float quality; // ivar: _quality
@property (readonly) NSData *rawColorGaborDescriptor;
@property (readonly) *void sceneClassifierDescriptor; // ivar: _sceneClassifierDescriptor
@property (readonly, nonatomic) NSUInteger serializedLength;


+(BOOL)supportsSecureCoding;
+(NSUInteger)currentVersion;
-(BOOL)computeConvnetDescriptorForImageData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)computeDescriptorForImageData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)computeRegistrationFeaturesForImageData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg0 andSceneClassifierDistance:(float)arg1 ;
-(float)distanceFromDescriptor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageData:(id)arg0 andCustomQualityScore:(float)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)initWithImageData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)initWithRawColorGaborDescriptor:(id)arg0 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif