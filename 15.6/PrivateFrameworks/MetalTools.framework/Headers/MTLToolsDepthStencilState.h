// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSDEPTHSTENCILSTATE_H
#define MTLTOOLSDEPTHSTENCILSTATE_H

@class NSString;
@protocol MTLDepthStencilStateSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label;
@property (readonly) BOOL readsDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) Class superclass;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL writesStencil;


-(id)initWithDepthStencilState:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(void)dealloc;


@end


#endif