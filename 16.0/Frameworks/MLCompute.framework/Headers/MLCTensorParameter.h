// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCTENSORPARAMETER_H
#define MLCTENSORPARAMETER_H


#import <Foundation/Foundation.h>

#import "MLCDevice.h"
#import "MLCTensor.h"

@interface MLCTensorParameter : NSObject

@property (retain, nonatomic) MLCDevice *device; // ivar: _device
@property (nonatomic) BOOL isUpdatable; // ivar: _isUpdatable
@property (readonly, retain, nonatomic) MLCTensor *tensor; // ivar: _tensor


+(id)parameterWithTensor:(id)arg0 ;
+(id)parameterWithTensor:(id)arg0 optimizerData:(id)arg1 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 device:(id)arg1 isVector:(BOOL)arg2 ;
-(id)initWithTensor:(id)arg0 optimizerData:(id)arg1 ;


@end


#endif