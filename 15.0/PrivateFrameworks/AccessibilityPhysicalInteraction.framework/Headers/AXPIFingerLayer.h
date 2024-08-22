// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPIFINGERLAYER_H
#define AXPIFINGERLAYER_H

@class CAShapeLayer;
@protocol AXPIFingerAppearanceDelegate;



@interface AXPIFingerLayer : CAShapeLayer

@property (weak, nonatomic) NSObject<AXPIFingerAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (readonly, nonatomic) CGRect outerFrame; // ivar: _outerFrame
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _isSelected
@property (nonatomic) NSUInteger shape; // ivar: _shape


-(id)initWithAppearanceDelegate:(id)arg0 ;


@end


#endif