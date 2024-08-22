// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPNUMBERRANDOMIZER_H
#define _DPNUMBERRANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>

#import "_DPLaplaceNoiseGenerator.h"

@interface _DPNumberRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) _DPLaplaceNoiseGenerator *generator; // ivar: _generator
@property (readonly, nonatomic) NSUInteger range; // ivar: _range


+(id)numberRandomizerWithRange:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)description;
-(id)init;
-(id)initWithRange:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)randomize:(id)arg0 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeNumbers:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif