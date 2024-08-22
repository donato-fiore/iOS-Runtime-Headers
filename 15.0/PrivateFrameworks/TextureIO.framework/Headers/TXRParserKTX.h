// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRPARSERKTX_H
#define TXRPARSERKTX_H

@class NSDictionary, NSString;
@protocol TXRParser, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TXRDeferredTextureInfo.h"
#import "TXRTextureInfo.h"

@interface TXRParserKTX : NSObject <TXRParser>

 {
    unsigned int _bytesOfKeyValueData;
    BOOL _isCompressed;
    NSDictionary *_internalSizedFormatLookup;
    TXRDeferredTextureInfo *_deferredTextureInfo;
    NSObject<OS_dispatch_queue> *_parserQueue;
    BOOL _shouldFlipVertically;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TXRTextureInfo *textureInfo; // ivar: _textureInfo


+(BOOL)exportTexture:(id)arg0 url:(id)arg1 error:(*id)arg2 ;
+(BOOL)handlesData:(id)arg0 ;
-(BOOL)parseData:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)determineFormatFromType:(unsigned int)arg0 format:(unsigned int)arg1 internalFormat:(unsigned int)arg2 baseInternalFormat:(unsigned int)arg3 ;
-(id)parsedImageAtLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 face:(NSUInteger)arg2 ;
-(void)parseImageData:(id)arg0 WithOptions:(id)arg1 bufferAllocator:(id)arg2 ;


@end


#endif