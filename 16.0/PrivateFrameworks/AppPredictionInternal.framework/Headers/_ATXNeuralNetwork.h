// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXNEURALNETWORK_H
#define _ATXNEURALNETWORK_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _ATXNeuralNetwork : NSObject {
    NSData *_data;
    char * _dataBytes;
    NSUInteger _nlayers;
    *? _layers;
}


@property (readonly, nonatomic) NSUInteger inputSize;
@property (readonly, nonatomic) NSUInteger outputSize;


-(*float)_runOnInputs:(*float)arg0 freeInputsAfterUse:(BOOL)arg1 ;
-(CGFloat)_predict:(*float)arg0 freeInputsAfterUse:(BOOL)arg1 ;
-(CGFloat)predict32:(*float)arg0 ;
-(CGFloat)predict:(*CGFloat)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)forInputs:(*float)arg0 computeOutputLayer:(*float)arg1 ;


@end


#endif