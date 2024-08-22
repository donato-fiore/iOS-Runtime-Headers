// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCVPIXELBUFFER_H
#define NUCVPIXELBUFFER_H

@class NSString;
@protocol NUImageBuffer;

#import <Foundation/Foundation.h>

#import "NUColorSpace.h"
#import "NUPixelFormat.h"

@interface NUCVPixelBuffer : NSObject <NUImageBuffer>



@property (readonly, nonatomic) *__CVBuffer CVPixelBuffer; // ivar: _buffer
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? size;
@property (readonly) Class superclass;


-(id)CIImageProcessorDigestObject;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif