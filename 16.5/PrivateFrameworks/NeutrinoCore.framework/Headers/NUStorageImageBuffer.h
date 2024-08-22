// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSTORAGEIMAGEBUFFER_H
#define NUSTORAGEIMAGEBUFFER_H

@class NSString;
@protocol NUImageBuffer, NUPurgeableStorage;

#import <Foundation/Foundation.h>

#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NUPurgeableStoragePool.h"

@interface NUStorageImageBuffer : NSObject <NUImageBuffer>



@property (readonly, nonatomic) *__CVBuffer CVPixelBuffer;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NUPurgeableStoragePool *pool; // ivar: _pool
@property (readonly, nonatomic) ? size;
@property (readonly, nonatomic) NSObject<NUPurgeableStorage> *storage; // ivar: _storage
@property (readonly) Class superclass;


+(id)imageBufferWithSize:(struct ? )arg0 format:(id)arg1 fromPool:(id)arg2 ;
-(id)init;
-(id)initWithStorage:(id)arg0 fromPool:(id)arg1 ;
-(void)dealloc;


@end


#endif