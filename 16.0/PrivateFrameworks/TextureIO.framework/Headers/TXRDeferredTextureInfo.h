// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TXRDEFERREDTEXTUREINFO_H
#define TXRDEFERREDTEXTUREINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TXRTextureInfo.h"

@interface TXRDeferredTextureInfo : NSObject

@property (retain, nonatomic) TXRTextureInfo *info; // ivar: _info
@property (readonly, nonatomic) NSMutableArray *mipmaps; // ivar: _mipmaps


-(id)initWithMipmapLevelCount:(NSUInteger)arg0 arrayLength:(NSUInteger)arg1 cubemap:(BOOL)arg2 ;


@end


#endif