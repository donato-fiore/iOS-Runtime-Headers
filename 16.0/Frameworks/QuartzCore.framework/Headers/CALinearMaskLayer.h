// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALINEARMASKLAYER_H
#define CALINEARMASKLAYER_H

@protocol CALinearMaskLayerDelegate><CALayerDelegate;


#import "CALayer.h"

@interface CALinearMaskLayer : CALayer

@property (weak) NSObject<CALinearMaskLayerDelegate><CALayerDelegate> *delegate;
@property *CGColor foregroundColor;


+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(void)drawInLinearMaskContext:(struct CALinearMaskContext *)arg0 ;


@end


#endif