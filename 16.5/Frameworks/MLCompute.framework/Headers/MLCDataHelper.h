// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCDATAHELPER_H
#define MLCDATAHELPER_H


#import <Foundation/Foundation.h>


@interface MLCDataHelper : NSObject



+(BOOL)convertFp16toFp32:(NSUInteger)arg0 fp16Values:(**float)arg1 fp32Values;
+(BOOL)convertFp32toFp16:(NSUInteger)arg0 fp32Values:(*float)arg1 fp16Values;
+(BOOL)convertOIHWtoIOHW:(id)arg0 sourceOIHW:(*void)arg1 resultIOHW:(*void)arg2 inputFeatureChannelCount:(NSUInteger)arg3 outputFeatureChannelCount:(NSUInteger)arg4 ;
+(BOOL)convertSourceHWIO:(*void)arg0 toResultOIHW:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 inputFeatureChannelCount:(NSUInteger)arg4 outputFeatureChannelCount:(NSUInteger)arg5 dataType:(int)arg6 ;
+(BOOL)convertSourceHWOI:(*void)arg0 toResultOIHW:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 inputFeatureChannelCount:(NSUInteger)arg4 outputFeatureChannelCount:(NSUInteger)arg5 dataType:(int)arg6 ;
+(BOOL)convertSourceOIHW:(*void)arg0 toResultHWIO:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 inputFeatureChannelCount:(NSUInteger)arg4 outputFeatureChannelCount:(NSUInteger)arg5 dataType:(int)arg6 ;
+(BOOL)convertSourceOIHW:(*void)arg0 toResultHWOI:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 inputFeatureChannelCount:(NSUInteger)arg4 outputFeatureChannelCount:(NSUInteger)arg5 dataType:(int)arg6 ;
+(id)createDataWithFloatValue:(float)arg0 count:(NSUInteger)arg1 ;
+(void)copySource:(*void)arg0 toTarget:(*void)arg1 sourceOffset:(NSUInteger)arg2 targetOffset:(NSUInteger)arg3 sizeToCopy:(NSUInteger)arg4 ;
+(void)fillData:(id)arg0 withFloatValue:(float)arg1 ;


@end


#endif