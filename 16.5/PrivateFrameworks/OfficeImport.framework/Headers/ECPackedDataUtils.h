// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECPACKEDDATAUTILS_H
#define ECPACKEDDATAUTILS_H


#import <Foundation/Foundation.h>


@interface ECPackedDataUtils : NSObject



+(BOOL)setData:(char *)arg0 ofLength:(unsigned int)arg1 atIndex:(unsigned int)arg2 withPreviousLength:(unsigned int)arg3 inPackedData:(struct __CFData *)arg4 packedDataSize:(unsigned int)arg5 ;
+(char *)prepareForDataOfLength:(unsigned int)arg0 atIndex:(unsigned int)arg1 withPreviousLength:(unsigned int)arg2 inPackedData:(struct __CFData *)arg3 packedDataSize:(unsigned int)arg4 ;
+(id)dumpDataToHexadecimalString:(char *)arg0 start:(unsigned int)arg1 stop:(unsigned int)arg2 nicelyFormatted:(BOOL)arg3 ;
+(id)readStringFromData:(char *)arg0 atOffset:(unsigned int)arg1 withLength:(unsigned int)arg2 ;
+(void)writeString:(id)arg0 toPackedData:(struct __CFData *)arg1 packedDataSize:(unsigned int)arg2 atIndex:(unsigned int)arg3 withPreviousLength:(unsigned short)arg4 outLength:(*unsigned short)arg5 ;


@end


#endif