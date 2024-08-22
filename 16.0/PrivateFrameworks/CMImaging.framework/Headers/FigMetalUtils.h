// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGMETALUTILS_H
#define FIGMETALUTILS_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface FigMetalUtils : NSObject

@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


-(NSUInteger)computeLinearTextureStride:(NSUInteger)arg0 format:(NSUInteger)arg1 ;
-(NSUInteger)getPixelSizeInBytes:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)texture2DFromBuffer:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 format:(NSUInteger)arg3 offset:(NSUInteger)arg4 usage:(NSUInteger)arg5 ;


@end


#endif