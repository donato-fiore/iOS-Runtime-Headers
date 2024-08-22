// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXVISUALDIAGNOSTICSDRAWTEXTCONFIGURATION_H
#define _PXVISUALDIAGNOSTICSDRAWTEXTCONFIGURATION_H

@class NSAttributedString, UIColor, UIFont, NSString;
@protocol PXVisualDiagnosticsDrawTextConfiguration;

#import <Foundation/Foundation.h>


@interface _PXVisualDiagnosticsDrawTextConfiguration : NSObject <PXVisualDiagnosticsDrawTextConfiguration>



@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) CGPoint relativePosition; // ivar: _relativePosition
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)init;


@end


#endif