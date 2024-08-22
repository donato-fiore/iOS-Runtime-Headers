// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCAPTIONBUTTONPRESENTATIONPROPERTIES_H
#define LPCAPTIONBUTTONPRESENTATIONPROPERTIES_H

@class NSArray, NSAttributedString, UIColor, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "LPCaptionButtonCollapsedPresentationProperties.h"
#import "LPImage.h"

@interface LPCaptionButtonPresentationProperties : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) LPCaptionButtonCollapsedPresentationProperties *collapsedButton; // ivar: _collapsedButton
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (nonatomic) CGFloat minimumWidth; // ivar: _minimumWidth
@property (retain, nonatomic) NSNumber *requiresInlineButton; // ivar: _requiresInlineButton
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif