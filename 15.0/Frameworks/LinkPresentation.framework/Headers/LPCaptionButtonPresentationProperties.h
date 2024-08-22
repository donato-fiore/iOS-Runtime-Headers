// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPCAPTIONBUTTONPRESENTATIONPROPERTIES_H
#define LPCAPTIONBUTTONPRESENTATIONPROPERTIES_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>

#import "LPCaptionButtonCollapsedPresentationProperties.h"
#import "LPImage.h"

@interface LPCaptionButtonPresentationProperties : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) LPCaptionButtonCollapsedPresentationProperties *collapsedButton; // ivar: _collapsedButton
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif