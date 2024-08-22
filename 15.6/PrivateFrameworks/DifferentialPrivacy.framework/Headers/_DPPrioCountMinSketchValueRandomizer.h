// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIOCOUNTMINSKETCHVALUERANDOMIZER_H
#define _DPPRIOCOUNTMINSKETCHVALUERANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPPrioCountMinSketchValueRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger k; // ivar: _k
@property (readonly, nonatomic) NSUInteger m; // ivar: _m
@property (readonly) Class superclass;


+(id)randomizerWithEpsilon:(CGFloat)arg0 bitCount:(NSUInteger)arg1 hashFunctionCount:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 bitCount:(NSUInteger)arg1 hashFunctionCount:(NSUInteger)arg2 ;
-(id)randomize:(id)arg0 metadata:(id)arg1 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif