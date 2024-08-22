// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYVISUALDIAGNOSTICSDRAWTEXTCONFIGURATION_H
#define _PXSTORYVISUALDIAGNOSTICSDRAWTEXTCONFIGURATION_H

@class NSAttributedString, UIColor, UIFont, NSString;
@protocol PXStoryVisualDiagnosticsDrawTextConfiguration;

#import <Foundation/Foundation.h>


@interface _PXStoryVisualDiagnosticsDrawTextConfiguration : NSObject <PXStoryVisualDiagnosticsDrawTextConfiguration>



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