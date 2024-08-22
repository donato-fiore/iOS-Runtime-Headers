// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSVGG16BLOCK2DESCRIPTOR_H
#define TCMPSVGG16BLOCK2DESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TCMPSConvolutionDescriptor.h"
#import "TCMPSPoolingDescriptor.h"

@interface TCMPSVgg16Block2Descriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv1; // ivar: _conv1
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv2; // ivar: _conv2
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv3; // ivar: _conv3
@property (retain, nonatomic) TCMPSPoolingDescriptor *pooling; // ivar: _pooling


-(id)init;


@end


#endif