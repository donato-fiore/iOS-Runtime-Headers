// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPCAPTIONPRESENTATIONPROPERTIES_H
#define LPCAPTIONPRESENTATIONPROPERTIES_H

@class NSAttributedString, UIColor, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface LPCaptionPresentationProperties : NSObject

@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSNumber *maximumNumberOfLines; // ivar: _maximumNumberOfLines
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat textScale; // ivar: _textScale


-(id)init;


@end


#endif