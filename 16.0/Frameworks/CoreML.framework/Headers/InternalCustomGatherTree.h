// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTERNALCUSTOMGATHERTREE_H
#define INTERNALCUSTOMGATHERTREE_H

@protocol MLCustomLayer;

#import <Foundation/Foundation.h>


@interface InternalCustomGatherTree : NSObject <MLCustomLayer>

 {
    vector<int, std::allocator<int>> _shape;
}


@property ? shape;


-(BOOL)evaluateOnCPUWithInputs:(id)arg0 outputs:(id)arg1 error:(*id)arg2 ;
-(id)initWithParameterDictionary:(id)arg0 error:(*id)arg1 ;
-(id)outputShapesForInputShapes:(id)arg0 error:(*id)arg1 ;


@end


#endif