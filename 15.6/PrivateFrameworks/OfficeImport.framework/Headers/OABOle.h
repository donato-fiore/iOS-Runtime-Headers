// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OABOLE_H
#define OABOLE_H


#import <Foundation/Foundation.h>


@interface OABOle : NSObject



+(BOOL)isBiffCLSID:(id)arg0 ;
+(BOOL)isChart:(id)arg0 ;
+(BOOL)readSharedInfoFor:(id)arg0 fromStorage:(struct SsrwOOStorage *)arg1 ;
+(id)read4ByteFromStream:(struct SsrwOOStream *)arg0 ;
+(id)readAnsiStringFromStream:(struct SsrwOOStream *)arg0 ;
+(id)readCLSIDFromStream:(struct SsrwOOStream *)arg0 ;
+(id)readCompressedFromStream:(struct SsrwOOStream *)arg0 compressedSize:(unsigned int)arg1 uncompressedSize:(unsigned int)arg2 cancel:(id)arg3 ;
+(id)readFromData:(id)arg0 cancel:(id)arg1 ;
+(id)readFromFileName:(id)arg0 cancel:(id)arg1 ;
+(id)readFromParentStorage:(struct SsrwOOStorage *)arg0 storageName:(id)arg1 cancel:(id)arg2 ;
+(id)readFromStream:(struct SsrwOOStream *)arg0 size:(unsigned int)arg1 cancel:(id)arg2 ;
+(id)readUnicodeStringFromStream:(struct SsrwOOStream *)arg0 ;
+(id)stringForCLSID:(struct _SsrwOO_GUID )arg0 ;


@end


#endif