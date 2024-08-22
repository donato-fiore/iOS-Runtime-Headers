// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIDESLAYERPARAMETERS_H
#define HMIDESLAYERPARAMETERS_H

@class HMFObject, NSString;


#import "HMIDESMutableFloatArray.h"

@interface HMIDESLayerParameters : HMFObject

@property (readonly) HMIDESMutableFloatArray *biases; // ivar: _biases
@property (readonly) NSString *name; // ivar: _name
@property (readonly) HMIDESMutableFloatArray *weights; // ivar: _weights


-(id)initWithName:(id)arg0 weights:(id)arg1 biases:(id)arg2 ;


@end


#endif