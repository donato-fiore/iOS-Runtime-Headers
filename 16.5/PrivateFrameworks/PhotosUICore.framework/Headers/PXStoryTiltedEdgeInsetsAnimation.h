// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTILTEDEDGEINSETSANIMATION_H
#define PXSTORYTILTEDEDGEINSETSANIMATION_H



#import "PXStoryValueAnimation.h"

@interface PXStoryTiltedEdgeInsetsAnimation : PXStoryValueAnimation

@property (readonly, nonatomic) ? currentEdgeInsets; // ivar: _currentEdgeInsets
@property (readonly, nonatomic) ? sourceEdgeInsets; // ivar: _sourceEdgeInsets
@property (readonly, nonatomic) ? targetEdgeInsets; // ivar: _targetEdgeInsets


-(id)initWithIdentifier:(id)arg0 duration:(struct ? )arg1 curveInfo:(struct ? )arg2 ;
-(id)initWithIdentifier:(id)arg0 sourceEdgeInsets:(struct ? )arg1 targetEdgeInsets:(struct ? )arg2 duration:(struct ? )arg3 curveInfo:(struct ? )arg4 ;
-(id)initWithSourceEdgeInsets:(struct ? )arg0 targetEdgeInsets:(struct ? )arg1 duration:(struct ? )arg2 curveInfo:(struct ? )arg3 ;
-(void)updateCurrentValueWithProgress:(CGFloat)arg0 ;


@end


#endif