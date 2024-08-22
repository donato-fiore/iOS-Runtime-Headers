// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVALUEANIMATION_H
#define PXSTORYVALUEANIMATION_H



#import "PXStoryAnimation.h"

@interface PXStoryValueAnimation : PXStoryAnimation

@property (readonly, nonatomic) ? curveInfo; // ivar: _curveInfo
@property (readonly, nonatomic) ? duration; // ivar: _duration


-(id)init;
-(id)initWithDuration:(struct ? )arg0 curveInfo:(struct ? )arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 duration:(struct ? )arg1 curveInfo:(struct ? )arg2 ;
-(void)timeDidChange;
-(void)updateCurrentValueWithProgress:(CGFloat)arg0 ;


@end


#endif