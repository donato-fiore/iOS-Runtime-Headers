// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCROPADORNMENTLAYER_H
#define AKCROPADORNMENTLAYER_H

@class CAShapeLayer;


#import "AKAdornmentLayer.h"

@interface AKCropAdornmentLayer : AKAdornmentLayer

@property (retain) CAShapeLayer *handlesLayer; // ivar: _handlesLayer


-(BOOL)_shouldShowHandles;
-(BOOL)needsUpdateWhenDraggingStartsOrEnds;
-(void)_addHandles;
-(void)_removeHandles;
-(void)_updateHandles;
-(void)updateAdornmentElements;
-(void)updateSublayersWithScale:(CGFloat)arg0 ;


@end


#endif