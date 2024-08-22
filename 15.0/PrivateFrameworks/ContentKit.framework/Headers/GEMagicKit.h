// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEMAGICKIT_H
#define GEMAGICKIT_H


#import <Foundation/Foundation.h>


@interface GEMagicKit : NSObject



+(id)magicForData:(id)arg0 ;
+(id)magicForData:(id)arg0 decompress:(BOOL)arg1 ;
+(id)magicForFileAtPath:(id)arg0 ;
+(id)magicForFileAtPath:(id)arg0 decompress:(BOOL)arg1 ;
+(id)magicForFileAtURL:(id)arg0 ;
+(id)magicForFileAtURL:(id)arg0 decompress:(BOOL)arg1 ;
+(id)magicForObject:(id)arg0 decompress:(BOOL)arg1 ;
+(id)rawMagicOutputForObject:(id)arg0 cookie:(struct magic_set *)arg1 flags:(int)arg2 ;
+(id)typeHierarchyForType:(id)arg0 ;
+(struct magic_set *)sharedMagicCookie;


@end


#endif