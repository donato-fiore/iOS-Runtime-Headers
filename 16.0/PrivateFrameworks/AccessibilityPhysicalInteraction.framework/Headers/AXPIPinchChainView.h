// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPIPINCHCHAINVIEW_H
#define AXPIPINCHCHAINVIEW_H

@class UIView;
@protocol AXPIFingerAppearanceDelegate;



@interface AXPIPinchChainView : UIView

@property (weak, nonatomic) NSObject<AXPIFingerAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) CGPoint startPoint; // ivar: _startPoint


-(BOOL)isUserInteractionEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif