// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTPARAMETERPAIRSERIALIZATION_H
#define PTPARAMETERPAIRSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PTParameterPairSerialization : NSObject



+(?)appendCMTimeParameter:(?)arg0 value:(?)arg1 scaletoOutput;
+(?)appendFloatParameter:(?)arg0 valuetoOutput;
+(?)appendUIntParameter:(?)arg0 valuetoOutput;
+(float)getFloatParameter:(unsigned short)arg0 fromPairs:(struct ? *)arg1 numPairs:(unsigned int)arg2 ;
+(float)getFloatParameter:(unsigned short)arg0 fromPairs:(struct ? *)arg1 numPairs:(unsigned int)arg2 didFindValue:(*BOOL)arg3 ;
+(float)getFloatParameter:(unsigned short)arg0 fromPairs:(struct ? *)arg1 numPairs:(unsigned int)arg2 withDefault:(float)arg3 ;
+(struct ? )getCMTimeParameter:(unsigned short)arg0 scale:(int)arg1 fromPairs:(struct ? *)arg2 numPairs:(unsigned int)arg3 withDefault:(struct ? )arg4 ;
+(unsigned int)getUIntParameter:(unsigned short)arg0 fromPairs:(struct ? *)arg1 numPairs:(unsigned int)arg2 ;
+(unsigned int)getUIntParameter:(unsigned short)arg0 fromPairs:(struct ? *)arg1 numPairs:(unsigned int)arg2 didFindValue:(*BOOL)arg3 ;
+(unsigned int)getUIntParameter:(unsigned short)arg0 fromPairs:(struct ? *)arg1 numPairs:(unsigned int)arg2 withDefault:(unsigned int)arg3 didFindValue:(*BOOL)arg4 ;


@end


#endif