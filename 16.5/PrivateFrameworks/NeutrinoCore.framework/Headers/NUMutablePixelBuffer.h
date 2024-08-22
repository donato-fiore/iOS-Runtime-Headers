// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUMUTABLEPIXELBUFFER_H
#define NUMUTABLEPIXELBUFFER_H

@class NSString;
@protocol NUMutableBuffer, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "NUBufferStorage.h"
#import "NUPixelFormat.h"

@interface NUMutablePixelBuffer : NSObject <NUMutableBuffer, NSCopying, NSMutableCopying>

 {
    NUBufferStorage *_storage;
    id<NUMutableBuffer> *_buffer;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void mutableBytes;
@property (readonly, nonatomic) NSInteger rowBytes;
@property (readonly, nonatomic) ? size;
@property (readonly) Class superclass;


-(*void)bytesAtPoint:(struct ? )arg0 ;
-(*void)mutableBytesAtPoint:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newRenderDestination;
-(id)privateInit;
-(void)dealloc;


@end


#endif