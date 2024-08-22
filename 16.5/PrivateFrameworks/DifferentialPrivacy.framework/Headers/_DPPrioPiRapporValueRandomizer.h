// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPPRIOPIRAPPORVALUERANDOMIZER_H
#define _DPPRIOPIRAPPORVALUERANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPPrioPiRapporValueRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dynamicVectorSize; // ivar: _dynamicVectorSize
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger p; // ivar: _p
@property (readonly, nonatomic) CGFloat piRapporAlpha0; // ivar: _piRapporAlpha0
@property (readonly, nonatomic) CGFloat piRapporAlpha1; // ivar: _piRapporAlpha1
@property (readonly, nonatomic) unsigned int piRapporPrime; // ivar: _piRapporPrime
@property (readonly) Class superclass;


+(id)randomizerWithEpsilon:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 dynamicVectorSize:(BOOL)arg2 piRapporPrime:(unsigned int)arg3 piRapporAlpha0:(CGFloat)arg4 piRapporAlpha1:(CGFloat)arg5 ;
-(NSUInteger)getAllocationSizeWithPiRapporAlgorithm:(id)arg0 numberOfEncodedIndices:(NSUInteger)arg1 ;
-(id)createDPPrioRecordFromPrivatizedShares:(id)arg0 forKey:(id)arg1 withMetadata:(id)arg2 withCreationDate:(CGFloat)arg3 ;
-(id)encodeClassIndices:(id)arg0 withDimensionality:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 dynamicVectorSize:(BOOL)arg2 piRapporPrime:(unsigned int)arg3 piRapporAlpha0:(CGFloat)arg4 piRapporAlpha1:(CGFloat)arg5 ;
-(id)randomize:(id)arg0 metadata:(id)arg1 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeBitValues:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeBitVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeVector:(id)arg0 metadata:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif