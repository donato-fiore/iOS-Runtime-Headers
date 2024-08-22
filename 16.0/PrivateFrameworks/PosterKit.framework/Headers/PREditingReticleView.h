// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGRETICLEVIEW_H
#define PREDITINGRETICLEVIEW_H

@class UIView;



@interface PREditingReticleView : UIView

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) UIView *emptyView; // ivar: _emptyView
@property (readonly, nonatomic) UIView *outlineBorderView; // ivar: _outlineBorderView


+(CGFloat)borderColor;
+(CGFloat)maxBorderColor;
+(CGFloat)minBorderColor;
+(CGFloat)vibrancyStrength;
+(id)reticleVibrancyForVibrancyConfiguration:(id)arg0 ;
-(id)init;
-(void)_startActiveAnimation;
-(void)_stopActiveAnimation;


@end


#endif