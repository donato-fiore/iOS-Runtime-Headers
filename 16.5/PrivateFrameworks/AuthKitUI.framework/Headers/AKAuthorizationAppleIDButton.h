// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONAPPLEIDBUTTON_H
#define AKAUTHORIZATIONAPPLEIDBUTTON_H

@class CAFilter;


#import "AKAuthorizationButton.h"

@interface AKAuthorizationAppleIDButton : AKAuthorizationButton {
    NSInteger _type;
    NSInteger _style;
    CAFilter *_highlightFilter;
    BOOL _changesInterfaceStyle;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius


+(CGFloat)defaultCornerRadius;
+(Class)layerClass;
+(NSInteger)_buttonStyleForUIStyle;
+(id)buttonWithType:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithAuthorizationButtonType:(NSInteger)arg0 authorizationButtonStyle:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_commonInit;
-(void)_createHighlightFilterIfNecessary;
-(void)_drawRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)_performAnimationToSetHighlighted:(BOOL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setButtonText:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif