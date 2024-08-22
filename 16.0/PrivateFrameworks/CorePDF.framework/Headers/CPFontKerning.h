// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPFONTKERNING_H
#define CPFONTKERNING_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>


@interface CPFontKerning : NSObject <CPDisposable>

 {
    *__CFData kernTable;
    char * dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    *__CFDictionary kernDictionary;
    BOOL override;
    BOOL valid;
}




-(id)initWithCGFont:(struct CGFont *)arg0 ;
-(id)initWithKernData:(struct __CFData *)arg0 ;
-(short)readShort;
-(struct __CFDictionary *)createKernTable;
-(unsigned char)readByte;
-(unsigned int)readUnsignedLong;
-(unsigned short)readUnsignedShort;
-(void)dealloc;
-(void)dispose;
-(void)doKerningPair;
-(void)doOTSubtable;
-(void)doSubtableFormat0;
-(void)doSubtableFormat1;
-(void)doSubtableFormat2;
-(void)doSubtableFormat3;
-(void)doTTSubtable;
-(void)doTable;
-(void)finalize;


@end


#endif