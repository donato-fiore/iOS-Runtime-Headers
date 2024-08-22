// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDTILINGHOSTINGLAYER_H
#define TSDTILINGHOSTINGLAYER_H

@class NSMutableSet;


#import "TSDNoDefaultImplicitActionLayer.h"
#import "TSDInteractiveCanvasController.h"

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {
    NSMutableSet *mDirtyTilingLayers;
}


@property (nonatomic) TSDInteractiveCanvasController *controller; // ivar: mController


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)p_commonInit;
-(void)setNeedsDisplayForDirtyTiles:(id)arg0 ;


@end


#endif