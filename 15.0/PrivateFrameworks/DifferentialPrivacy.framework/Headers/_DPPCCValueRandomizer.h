// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPPCCVALUERANDOMIZER_H
#define _DPPCCVALUERANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPPCCValueRandomizer : NSObject <_DPStringRandomizer>





-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif