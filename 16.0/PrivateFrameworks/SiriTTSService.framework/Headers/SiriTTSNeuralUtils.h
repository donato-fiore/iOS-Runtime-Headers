// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSNEURALUTILS_H
#define SIRITTSNEURALUTILS_H


#import <Foundation/Foundation.h>


@interface SiriTTSNeuralUtils : NSObject



+(BOOL)compileANEModel:(id)arg0 error:(*id)arg1 ;
+(BOOL)hasAMX;
+(BOOL)hasANE;
+(BOOL)isANEModelCompiled:(id)arg0 ;
+(BOOL)isANEOnly;
+(BOOL)isH12Platform;
+(BOOL)isNeuralPlatform;
+(BOOL)shouldUseNeuralVoice:(id)arg0 ;


@end


#endif