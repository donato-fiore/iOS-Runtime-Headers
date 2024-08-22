// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRINGOVERLAPARCVIEW_H
#define NTKRINGOVERLAPARCVIEW_H



#import "NTKColoringView.h"

@interface NTKRingOverlapArcView : NTKColoringView

@property (nonatomic) CGFloat fillFraction; // ivar: _fillFraction
@property (readonly, nonatomic) CGFloat overlapWidth; // ivar: _overlapWidth
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) CGFloat ringWidth; // ivar: _ringWidth


-(id)initWithFrame:(struct CGRect )arg0 radius:(CGFloat)arg1 ringWidth:(CGFloat)arg2 overlapWidth:(CGFloat)arg3 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif