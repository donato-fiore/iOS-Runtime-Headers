// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUDEVICE_H
#define NUDEVICE_H

@class NSString;
@protocol NUDevice, OS_dispatch_queue, MTLCommandQueue, NURenderer, MTLDevice;

#import <Foundation/Foundation.h>

#import "NURenderer.h"

@interface NUDevice : NSObject <NUDevice>

 {
    NURenderer *_noIntermediatesRenderer;
    NURenderer *_lowPriorityNoIntermediatesRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    id<MTLCommandQueue> *_commandQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultSampleMode;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger family;
@property (readonly, nonatomic) BOOL hasMetalSupport;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NURenderer> *lowPriorityRenderer; // ivar: _lowPriorityRenderer
@property (readonly, nonatomic) NSObject<MTLDevice> *metalDevice; // ivar: _metalDevice
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<NURenderer> *renderer; // ivar: _renderer
@property (readonly, nonatomic) BOOL shouldRenderUsingMetal;
@property (readonly) Class superclass;


-(BOOL)shouldLogRendererUsed;
-(NSInteger)_preferredSampleMode;
-(id)_lowPriorityRenderer:(*id)arg0 ;
-(id)_lowPriorityRendererWithoutIntermediateCaching:(*id)arg0 ;
-(id)_metalCommandQueue;
-(id)_newLowPriorityNoIntermediatesRenderer:(*id)arg0 ;
-(id)_newLowPriorityRenderer:(*id)arg0 ;
-(id)_newNoIntermediatesRenderer:(*id)arg0 ;
-(id)_newRenderer:(*id)arg0 ;
-(id)_renderer:(*id)arg0 ;
-(id)_rendererWithoutIntermediateCaching:(*id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 model:(id)arg1 metalDevice:(id)arg2 ;
-(id)lowPriorityRenderer:(*id)arg0 ;
-(id)lowPriorityRendererWithoutIntermediateCaching:(*id)arg0 ;
-(id)renderer:(*id)arg0 ;
-(id)rendererWithoutIntermediateCaching:(*id)arg0 ;
-(void)clearCaches;
-(void)executeMetal:(id)arg0 ;


@end


#endif