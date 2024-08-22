// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFLPCMTYPECONVERTER_H
#define CSFLPCMTYPECONVERTER_H


#import <Foundation/Foundation.h>


@interface CSFLPCMTypeConverter : NSObject



+(id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg0 ;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg0 ;
+(void)apply12dBGainToFloatBuffer:(id)arg0 ;
+(void)apply12dBGainToShortBuffer:(id)arg0 ;
+(void)applyGain:(float)arg0 toFloatBuffer:(id)arg1 ;
+(void)applyGain:(float)arg0 toShortBuffer:(id)arg1 ;
+(void)applyNegative20dBGainToFloatBuffer:(id)arg0 ;
+(void)applyNegative20dBGainToShortBuffer:(id)arg0 ;
+(void)applyNegative32dBGainToFloatBuffer:(id)arg0 ;
+(void)applyNegative32dBGainToShortBuffer:(id)arg0 ;


@end


#endif