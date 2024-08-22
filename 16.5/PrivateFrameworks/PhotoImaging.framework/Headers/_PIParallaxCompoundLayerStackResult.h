// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXCOMPOUNDLAYERSTACKRESULT_H
#define _PIPARALLAXCOMPOUNDLAYERSTACKRESULT_H

@class NURenderResult, NSString, PFParallaxLayerStack;
@protocol PIParallaxLayerStackResult, NURenderStatistics;



@interface _PIParallaxCompoundLayerStackResult : NURenderResult <PIParallaxLayerStackResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PFParallaxLayerStack *layerStack; // ivar: _layerStack
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif