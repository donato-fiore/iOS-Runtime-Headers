// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPLALTERNATIVEPREDICTION_H
#define UPPLALTERNATIVEPREDICTION_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface UPPLAlternativePrediction : NSObject

@property (readonly, nonatomic) NSUInteger alternativeIndex; // ivar: _alternativeIndex
@property (readonly, nonatomic) NSArray *chunkPredictions; // ivar: _chunkPredictions
@property (readonly, nonatomic) NSNumber *nerScore; // ivar: _nerScore


-(id)dictionaryRepresentation;
-(id)initWithChunkPredictions:(id)arg0 nerScore:(id)arg1 alternativeIndex:(NSUInteger)arg2 ;


@end


#endif