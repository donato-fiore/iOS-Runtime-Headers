// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSTRANSFORMERDESCRIPTOR_H
#define TCMPSTRANSFORMERDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TCMPSConvolutionDescriptor.h"
#import "TCMPSDecodingDescriptor.h"
#import "TCMPSEncodingDescriptor.h"
#import "TCMPSInstanceNormalizationDescriptor.h"
#import "TCMPSResidualDescriptor.h"

@interface TCMPSTransformerDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv; // ivar: _conv
@property (retain, nonatomic) TCMPSDecodingDescriptor *decode1; // ivar: _decode1
@property (retain, nonatomic) TCMPSDecodingDescriptor *decode2; // ivar: _decode2
@property (retain, nonatomic) TCMPSEncodingDescriptor *encode1; // ivar: _encode1
@property (retain, nonatomic) TCMPSEncodingDescriptor *encode2; // ivar: _encode2
@property (retain, nonatomic) TCMPSEncodingDescriptor *encode3; // ivar: _encode3
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst; // ivar: _inst
@property (retain, nonatomic) TCMPSResidualDescriptor *residual1; // ivar: _residual1
@property (retain, nonatomic) TCMPSResidualDescriptor *residual2; // ivar: _residual2
@property (retain, nonatomic) TCMPSResidualDescriptor *residual3; // ivar: _residual3
@property (retain, nonatomic) TCMPSResidualDescriptor *residual4; // ivar: _residual4
@property (retain, nonatomic) TCMPSResidualDescriptor *residual5; // ivar: _residual5


-(id)init;


@end


#endif