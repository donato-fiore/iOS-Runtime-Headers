// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPFONTINFO_H
#define CPFONTINFO_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>


@interface CPFontInfo : NSObject <CPDisposable>

 {
    *__CFData fontData;
    char * dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    BOOL valid;
}




-(BOOL)getDescriptor:(struct ? *)arg0 ;
-(float)readFloat;
-(id)initWithFontData:(struct __CFData *)arg0 ;
-(int)kernUnitsPerEm;
-(int)readLong;
-(struct CGRect )readRect;
-(struct __CFData *)newKernData;
-(unsigned char)readByte;
-(unsigned int)readUnsignedLong;
-(void)dealloc;
-(void)dispose;
-(void)finalize;


@end


#endif