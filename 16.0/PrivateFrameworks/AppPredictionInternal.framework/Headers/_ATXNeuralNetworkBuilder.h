// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXNEURALNETWORKBUILDER_H
#define _ATXNEURALNETWORKBUILDER_H

@class NSMutableData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _ATXNeuralNetworkBuilder : NSObject {
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