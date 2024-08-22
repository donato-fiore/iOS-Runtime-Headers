// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGCOLORPROGRAMLIBRARY_H
#define PXGCOLORPROGRAMLIBRARY_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PXGMetalRenderContext.h"

@interface PXGColorProgramLibrary : NSObject {
    NSMutableArray *_programs;
    NSMutableSet *_failedColorspaces;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) *CGColorSpace destinationColorSpace; // ivar: _destinationColorSpace
@property (readonly, nonatomic) PXGMetalRenderContext *metalRenderContext; // ivar: _metalRenderContext


-(id)colorProgramForSourceColorSpace:(struct CGColorSpace *)arg0 flags:(NSUInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initWithContext:(id)arg0 destinationColorSpace:(struct CGColorSpace *)arg1 ;
-(void)dealloc;


@end


#endif