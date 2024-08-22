// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISIMPLETEXTPRINTFORMATTER_H
#define UISIMPLETEXTPRINTFORMATTER_H

@class NSAttributedString, UIColor, UIFont, NSString;


#import "UIPrintFormatter.h"

@interface UISimpleTextPrintFormatter : UIPrintFormatter

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


-(id)initWithAttributedText:(id)arg0 ;
-(id)initWithText:(id)arg0 ;


@end


#endif