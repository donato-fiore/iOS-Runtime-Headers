// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CREANCONTROLLER_H
#define CREANCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CREANController : NSObject



+(BOOL)_calculateDerLength:(id)arg0 actual_size:(*NSUInteger)arg1 ;
+(BOOL)_writeDataToEAN:(struct __CFData *)arg0 withKey:(struct __CFString *)arg1 ;
+(BOOL)deleteFDRDataFromEANWithDataClass:(id)arg0 ;
+(BOOL)isEANSupported;
+(BOOL)readFDRDataFromEANWithDataClass:(id)arg0 outData:(*id)arg1 stripPadding:(BOOL)arg2 ;
+(BOOL)verifyFDRDataFromEANUsingCache:(BOOL)arg0 cachedData:(id)arg1 ;
+(BOOL)writeFDRDataToEANWithUpdateDataClassFromDir:(id)arg0 ;
+(id)_getDataClassesToWrite;
+(unsigned int)_getQuerykeyFromDataClass:(struct __CFString *)arg0 ;


@end


#endif