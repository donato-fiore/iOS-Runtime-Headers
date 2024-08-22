// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(void)applyNegative12dBGainToFloatBuffer:(id)arg0 ;
+(void)applyNegative12dBGainToShortBuffer:(id)arg0 ;


@end


#endif