// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSRESIDUALDESCRIPTOR_H
#define TCMPSRESIDUALDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TCMPSConvolutionDescriptor.h"
#import "TCMPSInstanceNormalizationDescriptor.h"

@interface TCMPSResidualDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv1; // ivar: _conv1
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv2; // ivar: _conv2
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst1; // ivar: _inst1
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst2; // ivar: _inst2


-(id)init;


@end


#endif