// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSPATIALPROFILEUIPEARLENROLLVIEW_H
#define HPSSPATIALPROFILEUIPEARLENROLLVIEW_H

@class BKUIPearlEnrollView;


#import "HPSSpatialProfileCrossHairs.h"

@interface HPSSpatialProfileUIPearlEnrollView : BKUIPearlEnrollView {
    HPSSpatialProfileCrossHairs *_enrollmentCustomCrossHairs;
}


@property (nonatomic) BOOL faceCaptured; // ivar: _faceCaptured
@property (nonatomic) BOOL forceBlur; // ivar: _forceBlur
@property (nonatomic) BOOL pauseBlur; // ivar: _pauseBlur


-(id)crossHairs;
-(id)initWithVideoCaptureSession:(id)arg0 inSheet:(BOOL)arg1 squareNeedsPositionLayout:(BOOL)arg2 ;
-(void)nudgeLeft:(id)arg0 ;
-(void)nudgeRight:(id)arg0 ;
-(void)setCameraBlurAmount:(CGFloat)arg0 useShade:(BOOL)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif