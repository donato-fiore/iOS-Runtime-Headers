// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKPENCILOVERLAYANCHORSELECTIONRECTANGLE_H
#define TSKPENCILOVERLAYANCHORSELECTIONRECTANGLE_H


#import <Foundation/Foundation.h>


@interface TSKPencilOverlayAnchorSelectionRectangle : NSObject

@property (nonatomic) *CGColor fillColor; // ivar: _fillColor
@property (nonatomic) CGRect rectangle; // ivar: _rectangle
@property (nonatomic) *CGColor strokeColor; // ivar: _strokeColor


-(id)anchorOverlayLayerForElapsedAnimationTime:(CGFloat)arg0 ;
-(id)initWithRectangle:(struct CGRect )arg0 strokeColor:(struct CGColor *)arg1 fillColor:(struct CGColor *)arg2 ;
-(id)pencilAnchorBloopAnimationStartingAtElapsedTime:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif