// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIXELBUFFEROVERLAY_H
#define VCPIXELBUFFEROVERLAY_H



#import "VCObject.h"

@interface VCPixelBufferOverlay : VCObject {
    *CGContext _bitmapContext;
}


@property VCInfoDetails currentDetails; // ivar: _currentDetails


-(id)init;
-(id)reverseString:(id)arg0 ;
-(void)dealloc;
-(void)drawOverlayMessage:(id)arg0 onPixelBuffer:(struct __CVBuffer *)arg1 attributes:(struct __CFDictionary *)arg2 ;
-(void)updateOverlayWithPixelBuffer:(struct __CVBuffer *)arg0 ;


@end


#endif