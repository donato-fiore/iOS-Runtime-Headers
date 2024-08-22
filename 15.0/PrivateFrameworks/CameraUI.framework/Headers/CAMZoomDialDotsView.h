// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMZOOMDIALDOTSVIEW_H
#define CAMZOOMDIALDOTSVIEW_H

@class UIView, CALayer;



@interface CAMZoomDialDotsView : UIView

@property (readonly, nonatomic) CALayer *_dotLayer; // ivar: __dotLayer
@property (nonatomic) CGPoint dotCenter;
@property (nonatomic) NSInteger dotCount;
@property (nonatomic) CGFloat dotSpacingAngle; // ivar: _dotSpacingAngle


+(Class)layerClass;
-(id)_replicatorLayer;
-(id)initWithDotImage:(id)arg0 ;


@end


#endif