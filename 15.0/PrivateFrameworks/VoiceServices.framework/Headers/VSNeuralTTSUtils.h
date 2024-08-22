// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSNEURALTTSUTILS_H
#define VSNEURALTTSUTILS_H


#import <Foundation/Foundation.h>


@interface VSNeuralTTSUtils : NSObject



+(BOOL)hasAMX;
+(BOOL)hasANE;
+(BOOL)hasOTAANEModel:(id)arg0 ;
+(BOOL)isANECompilationPlatform;
+(BOOL)isANEModelCompiled:(id)arg0 ;
+(BOOL)isNeuralTTSPlatform;
+(BOOL)isNeuralVoiceReady:(id)arg0 ;
+(void)compileANEModel:(id)arg0 ;


@end


#endif