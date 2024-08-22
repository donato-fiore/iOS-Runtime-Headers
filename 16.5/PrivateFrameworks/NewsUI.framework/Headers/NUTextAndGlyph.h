// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUTEXTANDGLYPH_H
#define NUTEXTANDGLYPH_H

@class NSAttributedString, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface NUTextAndGlyph : NSObject

@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, nonatomic) UIImage *glyph; // ivar: _glyph
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)init;
-(id)initWithAttributedText:(id)arg0 glyph:(id)arg1 ;
-(id)initWithAttributedText:(id)arg0 text:(id)arg1 glyph:(id)arg2 ;
-(id)initWithText:(id)arg0 glyph:(id)arg1 ;


@end


#endif