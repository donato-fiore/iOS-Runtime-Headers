// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLDEPTHSTENCILSTATE_H
#define _MTLDEPTHSTENCILSTATE_H

@class NSString;
@protocol MTLDepthStencilStateSPI, MTLDevice;

#import <Foundation/Foundation.h>


@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) BOOL readsDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) Class superclass;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL writesStencil;


-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 depthStencilDescriptor:(id)arg1 ;
-(void)dealloc;


@end


#endif