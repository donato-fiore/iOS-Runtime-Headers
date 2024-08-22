// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIOPLUSPLUSVALUERANDOMIZER_H
#define _DPPRIOPLUSPLUSVALUERANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPPrioPlusPlusValueRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delta; // ivar: _delta
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger n; // ivar: _n
@property (readonly) Class superclass;


+(id)randomizerWithEpsilon:(CGFloat)arg0 delta:(CGFloat)arg1 maxLength:(NSUInteger)arg2 ;
-(BOOL)checkAlgorithmParametersIn:(id)arg0 ;
-(id)initWithEpsilon:(CGFloat)arg0 delta:(CGFloat)arg1 maxLength:(NSUInteger)arg2 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeFloatVector:(id)arg0 metadata:(id)arg1 ;
-(id)randomizeFloatVectors:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeFloatVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif