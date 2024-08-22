// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUDEBUGRENDERVIEW_H
#define NUDEBUGRENDERVIEW_H

@class UILongPressGestureRecognizer, CMMotionManager;


#import "NURenderView.h"

@interface NUDebugRenderView : NURenderView {
    UILongPressGestureRecognizer *_doubleTap;
    BOOL _showDebug;
    CMMotionManager *_motionManager;
}




-(BOOL)debugMode;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_debugToggle:(id)arg0 ;
-(void)_orientWithX:(CGFloat)arg0 andY:(CGFloat)arg1 ;
-(void)_resetOrientation:(id)arg0 ;
-(void)_setupDeviceMotion;
-(void)_startDeviceMotion;
-(void)_stopDeviceMotion;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setDebugMode:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif