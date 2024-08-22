// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPNEURALNETWORK_H
#define PPNEURALNETWORK_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PPNeuralNetwork : NSObject {
    NSData *_data;
    char * _dataBytes;
    NSUInteger _nlayers;
    *? _layers;
}


@property (readonly, nonatomic) NSUInteger inputSize;
@property (readonly, nonatomic) NSUInteger outputSize;


-(CGFloat)predictWithDoubles:(*CGFloat)arg0 ;
-(CGFloat)predictWithFloats:(*float)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)forInputs:(*float)arg0 computeOutputLayer:(*float)arg1 ;


@end


#endif