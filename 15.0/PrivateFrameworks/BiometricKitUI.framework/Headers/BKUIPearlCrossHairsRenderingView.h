// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLCROSSHAIRSRENDERINGVIEW_H
#define BKUIPEARLCROSSHAIRSRENDERINGVIEW_H

@class MTKView, MTLSPathBufferData, MTLSAnimatablePathCollection, MTLSplineRenderer;
@protocol OS_dispatch_semaphore, MTLCommandQueue;


#import "BKUIPearlCrossHairsManager.h"

@interface BKUIPearlCrossHairsRenderingView : MTKView {
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    id<MTLCommandQueue> *_commandQueue;
    CGFloat _time;
    float _pathBlend;
    float _pathBlendDest;
    ? _axis;
}


@property ? axis;
@property (retain) MTLSPathBufferData *checkMarkData; // ivar: _checkMarkData
@property (retain) MTLSAnimatablePathCollection *checkMarkPathCollection; // ivar: _checkMarkPathCollection
@property (retain) MTLSPathBufferData *crosshairsData; // ivar: _crosshairsData
@property (retain) BKUIPearlCrossHairsManager *crosshairsInstanceManager; // ivar: _crosshairsInstanceManager
@property (retain) MTLSAnimatablePathCollection *crosshairsPathCollection; // ivar: _crosshairsPathCollection
@property (nonatomic) BOOL grayscale;
@property (retain) MTLSplineRenderer *renderer; // ivar: _renderer
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)initWithFrame:(struct CGRect )arg0 device:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif