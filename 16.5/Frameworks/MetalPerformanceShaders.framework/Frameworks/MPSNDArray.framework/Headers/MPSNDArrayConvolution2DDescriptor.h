// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYCONVOLUTION2DDESCRIPTOR_H
#define MPSNDARRAYCONVOLUTION2DDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSNDArrayConvolution2DDescriptor : NSObject <NSCopying>

 {
    NSUInteger _channelMultiplier;
}


@property (nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (nonatomic) NSUInteger groups; // ivar: _groups
@property (nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (nonatomic) NSUInteger strideInPixelsX; // ivar: _strideInPixelsX
@property (nonatomic) NSUInteger strideInPixelsY; // ivar: _strideInPixelsY
@property (nonatomic) unsigned int weightsFormat; // ivar: _weightsFormat


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif