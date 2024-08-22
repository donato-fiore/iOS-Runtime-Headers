// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONAPPLEIDBUTTON_H
#define ASAUTHORIZATIONAPPLEIDBUTTON_H

@class UIControl, CAFilter;



@interface ASAuthorizationAppleIDButton : UIControl {
    NSInteger _type;
    NSInteger _style;
    CAFilter *_highlightFilter;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius


+(CGFloat)defaultCornerRadius;
+(Class)layerClass;
+(id)buttonWithType:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSInteger)_ak_buttonStyle;
-(NSInteger)_ak_buttonType;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithAuthorizationButtonType:(NSInteger)arg0 authorizationButtonStyle:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_createHighlightFilterIfNecessary;
-(void)_drawRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)_performAnimationToSetHighlighted:(BOOL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif