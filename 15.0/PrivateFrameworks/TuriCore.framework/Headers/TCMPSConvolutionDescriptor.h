// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSCONVOLUTIONDESCRIPTOR_H
#define TCMPSCONVOLUTIONDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCMPSConvolutionDescriptor : NSObject

@property (nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (nonatomic) NSUInteger paddingHeight; // ivar: _paddingHeight
@property (nonatomic) NSUInteger paddingWidth; // ivar: _paddingWidth
@property (nonatomic) NSUInteger strideHeight; // ivar: _strideHeight
@property (nonatomic) NSUInteger strideWidth; // ivar: _strideWidth
@property (nonatomic) BOOL updateWeights; // ivar: _updateWeights


-(id)init;


@end


#endif