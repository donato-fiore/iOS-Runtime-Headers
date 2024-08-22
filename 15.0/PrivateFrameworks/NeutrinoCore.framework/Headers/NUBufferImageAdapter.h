// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUBUFFERIMAGEADAPTER_H
#define NUBUFFERIMAGEADAPTER_H

@class NSString;
@protocol NUBufferImage, NUBufferProvider;

#import <Foundation/Foundation.h>

#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NUImageLayout.h"
#import "NURegion.h"

@interface NUBufferImageAdapter : NSObject <NUBufferImage>

 {
    id<NUBufferProvider> *_bufferProvider;
}


@property (readonly) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly) NUImageLayout *layout; // ivar: _layout
@property (readonly) ? size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion; // ivar: _validRegion


-(id)debugQuickLookObject;
-(id)immutableImageCopy;
-(id)init;
-(id)initWithBuffer:(id)arg0 colorSpace:(id)arg1 validRegion:(id)arg2 ;
-(id)initWithBufferProvider:(id)arg0 colorSpace:(id)arg1 validRegion:(id)arg2 ;
-(id)mutableImageCopy;
-(id)mutablePurgeableImageCopy;
-(id)purgeableImageCopy;
-(void)readBufferRegion:(id)arg0 withBlock:(id)arg1 ;


@end


#endif