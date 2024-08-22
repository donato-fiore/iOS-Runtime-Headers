// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGESPATIOTEMPORALGUIDEDFILTERDESCRIPTOR_H
#define MPSIMAGESPATIOTEMPORALGUIDEDFILTERDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSImageSpatioTemporalGuidedFilterDescriptor : NSObject

@property (nonatomic) NSUInteger arrayLength; // ivar: _arrayLength
@property (nonatomic) float epsilon; // ivar: _epsilon
@property (nonatomic) NSUInteger guideChannels; // ivar: _guideChannels
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) NSUInteger kernelSpatialDiameter; // ivar: _kernelSpatialDiameter
@property (nonatomic) NSUInteger kernelTemporalDiameter; // ivar: _kernelTemporalDiameter
@property (nonatomic) BOOL preallocateIntermediates; // ivar: _preallocateIntermediates
@property (nonatomic) NSUInteger sourceChannels; // ivar: _sourceChannels
@property (nonatomic) BOOL useHighPrecisionIntermediates; // ivar: _useHighPrecisionIntermediates
@property (nonatomic) NSUInteger width; // ivar: _width


+(id)filterDescriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 arrayLength:(NSUInteger)arg2 kernelSpatialDiameter:(NSUInteger)arg3 kernelTemporalDiameter:(NSUInteger)arg4 epsilon:(float)arg5 sourceChannels:(NSUInteger)arg6 guideChannels:(NSUInteger)arg7 ;
+(id)filterDescriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 arrayLength:(NSUInteger)arg2 kernelSpatialDiameter:(NSUInteger)arg3 kernelTemporalDiameter:(NSUInteger)arg4 epsilon:(float)arg5 sourceChannels:(NSUInteger)arg6 guideChannels:(NSUInteger)arg7 preallocateIntermediates:(BOOL)arg8 ;
-(id)init;


@end


#endif