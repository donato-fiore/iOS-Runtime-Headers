// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPIMAGEDESCRIPTOR_LEGACYSUPPORTDONOTCHANGE_H
#define MPIMAGEDESCRIPTOR_LEGACYSUPPORTDONOTCHANGE_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPImageDescriptor_LegacySupportDoNotChange : NSObject <NSSecureCoding>



@property (readonly) *void colorGaborDescriptor; // ivar: _colorGaborDescriptor
@property (readonly) NSInteger descriptorId; // ivar: _descriptorId
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
@property (readonly) NSData *rawColorGaborDescriptor; // ivar: _rawColorGaborDescriptor
@property (readonly) *void sceneClassifierDescriptor; // ivar: _sceneClassifierDescriptor


+(BOOL)supportsSecureCoding;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif