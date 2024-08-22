// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPPTVALUERANDOMIZER_H
#define _DPPTVALUERANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPPTValueRandomizer : NSObject <_DPStringRandomizer>



@property (nonatomic) unsigned int bucketCount; // ivar: _bucketCount
@property (nonatomic) CGFloat chancePMinusQ; // ivar: _chancePMinusQ
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mask; // ivar: _mask
@property (nonatomic) unsigned int numGroups; // ivar: _numGroups
@property (readonly) Class superclass;


+(id)randomizerWithEpsilon:(CGFloat)arg0 numberOfGroups:(unsigned int)arg1 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 numberOfGroups:(unsigned int)arg1 ;
-(id)randomize:(id)arg0 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif