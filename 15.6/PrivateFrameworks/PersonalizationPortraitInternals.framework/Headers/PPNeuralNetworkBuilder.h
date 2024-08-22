// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNEURALNETWORKBUILDER_H
#define PPNEURALNETWORKBUILDER_H

@class NSMutableData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPNeuralNetworkBuilder : NSObject {
    NSUInteger _prevSize;
    NSUInteger _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    BOOL _haveOutputLayer;
    BOOL _done;
}




-(id)init;
-(id)initWithInputSize:(NSUInteger)arg0 ;
-(id)serialize;
-(void)addHiddenLayer:(NSUInteger)arg0 weights:(*float)arg1 bias:(*float)arg2 activation:(unsigned char)arg3 skip:(BOOL)arg4 ;
-(void)addOutputLayer:(NSUInteger)arg0 weights:(*float)arg1 bias:(*float)arg2 activation:(unsigned char)arg3 softmax:(BOOL)arg4 ;


@end


#endif