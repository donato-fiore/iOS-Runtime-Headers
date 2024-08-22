// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMETALRENDERER_H
#define NUMETALRENDERER_H

@protocol MTLDevice;


#import "NURenderer.h"

@interface NUMetalRenderer : NURenderer {
    id<MTLDevice> *_device;
}




-(id)imageForSurface:(id)arg0 options:(id)arg1 ;
-(id)initWithCIContext:(id)arg0 priority:(NSInteger)arg1 ;
-(id)initWithMetalDevice:(id)arg0 options:(id)arg1 ;
-(id)name;
-(id)renderDestinationForSurface:(id)arg0 ;


@end


#endif