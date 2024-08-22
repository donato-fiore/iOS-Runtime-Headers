// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYRECTANIMATION_H
#define PXSTORYRECTANIMATION_H



#import "PXStoryValueAnimation.h"

@interface PXStoryRectAnimation : PXStoryValueAnimation {
    CGRect _sourceRectWithoutRotation;
    CGFloat _sourceRotation;
    CGRect _targetRectWithoutRotation;
    CGFloat _targetRotation;
    CGAffineTransform _normalizingTransform;
}


@property (readonly, nonatomic) ? currentRect; // ivar: _currentRect
@property (readonly, nonatomic) CGRect outerBounds; // ivar: _outerBounds
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) ? sourceRect; // ivar: _sourceRect
@property (readonly, nonatomic) ? targetRect; // ivar: _targetRect


-(id)initWithDuration:(struct ? )arg0 curveInfo:(struct ? )arg1 ;
-(id)initWithIdentifier:(id)arg0 duration:(struct ? )arg1 curveInfo:(struct ? )arg2 ;
-(id)initWithIdentifier:(id)arg0 sourceRect:(struct ? )arg1 targetRect:(struct ? )arg2 outerBounds:(struct CGRect )arg3 referenceSize:(struct CGSize )arg4 duration:(struct ? )arg5 curveInfo:(struct ? )arg6 ;
-(void)updateCurrentValueWithProgress:(CGFloat)arg0 ;


@end


#endif