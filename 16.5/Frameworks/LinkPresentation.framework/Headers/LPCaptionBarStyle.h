// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCAPTIONBARSTYLE_H
#define LPCAPTIONBARSTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "LPButtonStyle.h"
#import "LPCollaborationFooterStyle.h"
#import "LPCaptionBarAccessoryStyle.h"
#import "LPImageViewStyle.h"
#import "LPIconBadgeStyle.h"
#import "LPPointUnit.h"
#import "LPAudioPlayButtonStyle.h"
#import "LPPadding.h"
#import "LPVerticalTextStackViewStyle.h"

@interface LPCaptionBarStyle : NSObject

@property (nonatomic) BOOL addFullWidthLineForButton; // ivar: _addFullWidthLineForButton
@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge; // ivar: _alignButtonWithCaptionTextLeadingEdge
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) LPButtonStyle *button; // ivar: _button
@property (nonatomic) BOOL buttonIgnoresTextSafeAreaInsets; // ivar: _buttonIgnoresTextSafeAreaInsets
@property (nonatomic) BOOL buttonRespectsTextStackPadding; // ivar: _buttonRespectsTextStackPadding
@property (nonatomic) BOOL canAddLineForButton; // ivar: _canAddLineForButton
@property (retain, nonatomic) LPCollaborationFooterStyle *collaborationFooter; // ivar: _collaborationFooter
@property (nonatomic) BOOL expandButtonToCaptionEdge; // ivar: _expandButtonToCaptionEdge
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory; // ivar: _leadingAccessory
@property (readonly, nonatomic) LPImageViewStyle *leadingIcon; // ivar: _leadingIcon
@property (readonly, nonatomic) LPIconBadgeStyle *leadingIconBadge; // ivar: _leadingIconBadge
@property (nonatomic) unsigned int minimumNumberOfLinesToVerticallyCenter; // ivar: _minimumNumberOfLinesToVerticallyCenter
@property (retain, nonatomic) LPPointUnit *minimumWidth; // ivar: _minimumWidth
@property (readonly, nonatomic) LPAudioPlayButtonStyle *playButton; // ivar: _playButton
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding; // ivar: _playButtonPadding
@property (nonatomic) BOOL positionButtonRelativeToTextStack; // ivar: _positionButtonRelativeToTextStack
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack; // ivar: _textStack
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory; // ivar: _trailingAccessory
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon; // ivar: _trailingIcon
@property (readonly, nonatomic) LPIconBadgeStyle *trailingIconBadge; // ivar: _trailingIconBadge
@property (nonatomic) BOOL usesOutOfLineButton; // ivar: _usesOutOfLineButton


-(id)initWithPlatform:(NSInteger)arg0 sizeClass:(NSUInteger)arg1 fontScalingFactor:(CGFloat)arg2 ;
-(id)leftAccessory;
-(id)leftIcon;
-(id)rightAccessory;
-(id)rightIcon;


@end


#endif