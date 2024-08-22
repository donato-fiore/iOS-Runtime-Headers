// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPPRIOPLUSPLUSMETADATAVALUERANDOMIZER_H
#define _DPPRIOPLUSPLUSMETADATAVALUERANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPPrioPlusPlusMetadataValueRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, nonatomic) BOOL dynamicVectorSize; // ivar: _dynamicVectorSize
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) NSUInteger p; // ivar: _p


+(id)randomizerWithEpsilon:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 dynamicVectorSize:(BOOL)arg2 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 dynamicVectorSize:(BOOL)arg2 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeBitVector:(id)arg0 metadata:(id)arg1 ;
-(id)randomizeBitVectors:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeBitVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif