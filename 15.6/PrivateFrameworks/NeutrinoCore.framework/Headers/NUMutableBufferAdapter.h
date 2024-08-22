// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMUTABLEBUFFERADAPTER_H
#define NUMUTABLEBUFFERADAPTER_H

@class NSString;
@protocol NUMutableBuffer, NUMutableBufferProvider;


#import "NUBufferAdapter.h"
#import "NUPixelFormat.h"

@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider>

 {
    *void _mutableBytes;
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


-(*void)mutableBytesAtPoint:(struct ? )arg0 ;
-(id)initWithMutableBuffer:(id)arg0 ;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 rowBytes:(NSInteger)arg2 bytes:(*void)arg3 ;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 rowBytes:(NSInteger)arg2 mutableBytes:(*void)arg3 ;
-(id)newRenderDestination;
-(void)provideMutableBuffer:(id)arg0 ;


@end


#endif