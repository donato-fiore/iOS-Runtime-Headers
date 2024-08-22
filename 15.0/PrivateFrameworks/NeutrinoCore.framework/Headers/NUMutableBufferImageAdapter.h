// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUMUTABLEBUFFERIMAGEADAPTER_H
#define NUMUTABLEBUFFERIMAGEADAPTER_H

@class NSString;
@protocol NUMutableBufferImage, NUMutableBufferProvider;


#import "NUBufferImageAdapter.h"
#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NUImageLayout.h"
#import "NURegion.h"

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage>

 {
    id<NUMutableBufferProvider> *_mutableBufferProvider;
}


@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) ? size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion;


-(BOOL)copyBufferStorage:(id)arg0 fromRect:(struct ? )arg1 toPoint:(struct ? )arg2 ;
-(BOOL)copySurfaceStorage:(id)arg0 fromRect:(struct ? )arg1 toPoint:(struct ? )arg2 device:(id)arg3 ;
-(id)initWithBufferProvider:(id)arg0 colorSpace:(id)arg1 validRegion:(id)arg2 ;
-(id)initWithMutableBuffer:(id)arg0 colorSpace:(id)arg1 validRegion:(id)arg2 ;
-(id)initWithMutableBufferProvider:(id)arg0 colorSpace:(id)arg1 validRegion:(id)arg2 ;
-(void)writeBufferRegion:(id)arg0 withBlock:(id)arg1 ;


@end


#endif