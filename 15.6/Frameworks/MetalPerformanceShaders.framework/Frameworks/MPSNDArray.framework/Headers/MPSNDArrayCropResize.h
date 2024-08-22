// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYCROPRESIZE_H
#define MPSNDARRAYCROPRESIZE_H



#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArrayCropResize : MPSNDArrayMultiaryKernel

@property (nonatomic) unsigned int coordinateMode; // ivar: _coordinateMode
@property (nonatomic) BOOL normalizeCoordinates; // ivar: _normalizeCoordinates
@property (nonatomic) unsigned int resampleMode; // ivar: _resampleMode
@property (nonatomic) NSUInteger resizeHeight; // ivar: _resizeHeight
@property (nonatomic) NSUInteger resizeWidth; // ivar: _resizeWidth
@property (nonatomic) unsigned int samplingMode; // ivar: _samplingMode
@property (nonatomic) float spatialScale; // ivar: _spatialScale


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif