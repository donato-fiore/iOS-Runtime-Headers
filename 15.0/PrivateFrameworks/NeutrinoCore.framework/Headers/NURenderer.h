// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NURENDERER_H
#define NURENDERER_H

@class CIContext, NSString;
@protocol NURenderer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NURenderer : NSObject <NURenderer>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) CIContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(BOOL)allowClampToAlpha;
+(BOOL)defaultUseHalfFloat;
+(id)_renderContextOptionsWithOptions:(id)arg0 nameSuffix:(id)arg1 ;
+(id)defaultRenderContextOptions;
+(id)rendererWithMetalDevice:(id)arg0 options:(id)arg1 ;
+(int)workingFormat;
+(struct CGColorSpace *)workingColorSpace;
-(id)imageForSurface:(id)arg0 options:(id)arg1 ;
-(id)init;
-(id)initWithCIContext:(id)arg0 priority:(NSInteger)arg1 ;
-(id)renderDestinationForSurface:(id)arg0 ;
-(id)renderImage:(id)arg0 rect:(struct ? )arg1 toDestination:(id)arg2 atPoint:(struct ? )arg3 error:(*id)arg4 ;


@end


#endif