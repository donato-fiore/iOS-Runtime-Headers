// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSIDENTITYGLYPHINFO_H
#define NSIDENTITYGLYPHINFO_H

@protocol NSSecureCoding;


#import "NSGlyphInfo.h"
#import "NSFont.h"

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding>

 {
    NSFont *_font;
    unsigned int _glyph;
}




+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithGlyph:(unsigned int)arg0 forFont:(id)arg1 baseString:(id)arg2 ;
+(void)initialize;
-(id)_font;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGlyph:(unsigned int)arg0 forFont:(id)arg1 baseString:(id)arg2 ;
-(unsigned int)_glyph;
-(unsigned int)_glyphForFont:(id)arg0 baseString:(id)arg1 ;
-(unsigned short)glyph;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif