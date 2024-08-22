// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMPSVGG16DESCRIPTOR_H
#define TCMPSVGG16DESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TCMPSVgg16Block1Descriptor.h"
#import "TCMPSVgg16Block2Descriptor.h"

@interface TCMPSVgg16Descriptor : NSObject

@property (retain, nonatomic) TCMPSVgg16Block1Descriptor *block1; // ivar: _block1
@property (retain, nonatomic) TCMPSVgg16Block1Descriptor *block2; // ivar: _block2
@property (retain, nonatomic) TCMPSVgg16Block2Descriptor *block3; // ivar: _block3
@property (retain, nonatomic) TCMPSVgg16Block2Descriptor *block4; // ivar: _block4


-(id)init;


@end


#endif