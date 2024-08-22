// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLMODELWEIGHTS_H
#define PMLMODELWEIGHTS_H

@class NSString;
@protocol PMLPlistAndChunksSerializableProtocol;

#import <Foundation/Foundation.h>

#import "PMLMutableDenseVector.h"

@interface PMLModelWeights : NSObject <PMLPlistAndChunksSerializableProtocol>

 {
    PMLMutableDenseVector *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int length;
@property (readonly) Class superclass;


+(id)constWeightsOfLength:(int)arg0 value:(float)arg1 ;
+(id)modelWeightsFromFloats:(id)arg0 ;
+(id)modelWeightsOfLength:(int)arg0 ;
+(id)modelWeightsOfLength:(int)arg0 rng:(id)arg1 ;
+(id)modelWeightsOfLength:(int)arg0 rngSeed:(NSUInteger)arg1 ;
+(id)weightsFromNumbers:(id)arg0 ;
+(id)zeroWeightsOfLength:(int)arg0 ;
-(*float)values;
-(id)asMutableDenseVector;
-(id)copy;
-(id)initFromDictionary:(id)arg0 ;
-(id)initModelWeightsFromFloats:(id)arg0 ;
-(id)initWithCount:(int)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg0 ;
-(id)sliceFrom:(int)arg0 to:(int)arg1 ;
-(id)toDictionary;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)weightsByAppendingWeights:(id)arg0 ;
-(void)processValuesInPlaceWithBlock:(id)arg0 ;


@end


#endif