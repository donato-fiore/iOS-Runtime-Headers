// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLFONT_H
#define TMLFONT_H

@class UIFont, UIFontDescriptor, NSString;
@protocol TMLFontJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLFont : NSObject <TMLFontJSExports, NSCopying>

 {
    UIFont *_font;
    UIFontDescriptor *_fontDescriptor;
}


@property (readonly, nonatomic) *CGFont CGFontRef;
@property (readonly, nonatomic) CGFloat ascender;
@property (readonly, nonatomic) CGFloat capHeight;
@property (readonly, nonatomic) CGFloat descender;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) CGFloat leading;
@property (readonly, nonatomic) CGFloat lineHeight;
@property (readonly, nonatomic) CGFloat pointSize;
@property (readonly, nonatomic) CGFloat xHeight;


+(void)initializeJSContext:(id)arg0 ;
-(id)UIFontValue;
-(id)bold;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFont:(id)arg0 ;
-(id)initWithFontDescriptor:(id)arg0 ;
-(id)italic;
-(id)withAXRestrictedStyle:(id)arg0 ;
-(id)withAttributes:(id)arg0 ;
-(id)withFamily:(id)arg0 ;
-(id)withScale:(CGFloat)arg0 ;
-(id)withScaleTransform:(CGFloat)arg0 ;
-(id)withSize:(CGFloat)arg0 ;
-(id)withStyle:(id)arg0 ;
-(id)withSymbolicTraits:(unsigned int)arg0 ;
-(id)withWeight:(CGFloat)arg0 ;
-(id)withWidth:(CGFloat)arg0 ;


@end


#endif