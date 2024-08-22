// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPNUMBERRANDOMIZER_H
#define _DPNUMBERRANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>

#import "_DPLaplaceNoiseGenerator.h"

@interface _DPNumberRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) _DPLaplaceNoiseGenerator *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger range; // ivar: _range
@property (readonly) Class superclass;


+(id)numberRandomizerWithRange:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)init;
-(id)initWithRange:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)randomize:(id)arg0 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeNumbers:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif