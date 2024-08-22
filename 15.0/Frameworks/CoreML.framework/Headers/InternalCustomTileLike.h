// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INTERNALCUSTOMTILELIKE_H
#define INTERNALCUSTOMTILELIKE_H

@protocol MLCustomLayer;

#import <Foundation/Foundation.h>


@interface InternalCustomTileLike : NSObject <MLCustomLayer>

 {
    vector<unsigned long, std::allocator<unsigned long>> _multiples;
    vector<unsigned long, std::allocator<unsigned long>> _inputShape;
    vector<unsigned long, std::allocator<unsigned long>> _outputShape;
}


@property (readonly, nonatomic) NSUInteger inputRank; // ivar: _inputRank
@property ? inputShape;
@property ? multiples;
@property ? outputShape;


-(BOOL)evaluateOnCPUWithInputs:(id)arg0 outputs:(id)arg1 error:(*id)arg2 ;
-(id)initWithParameterDictionary:(id)arg0 error:(*id)arg1 ;
-(id)outputShapesForInputShapes:(id)arg0 error:(*id)arg1 ;


@end


#endif